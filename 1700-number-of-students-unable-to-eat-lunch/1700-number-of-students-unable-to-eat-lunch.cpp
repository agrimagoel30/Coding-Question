class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
       queue<int>q;
       for(int i=0;i<students.size();i++){
        q.push(students[i]);
       }
       stack<int>st;
       for(int i=sandwiches.size()-1;i>=0;i--){
        st.push(sandwiches[i]);
       }
       int c=0;
       while(!q.empty() && c<q.size()){
        if(q.front()==st.top()){
            q.pop();
            st.pop();
            c=0;
        }else{
            q.push(q.front());
            q.pop();
            c++;
        }
       }
       return q.size();
    }
};