class SmallestInfiniteSet {
public:
//APPROACH 1
// vector<bool>nums;
// int i;
//     SmallestInfiniteSet() {
//         nums=vector<bool>(1001,true);
//         i=1;
//     }
    
//     int popSmallest() {
//         int result=i;
//         nums[i]=false;
//         for(int j=i+1;j<1001;j++){
//                 if(nums[j]==true)
//                 {
//                     i=j;
//                     break;
//                 }
//         }
//         return result;
//     }
    
//     void addBack(int num) {
//         nums[num]=true;
//         if(num<i)
//         i=num;
//     }


//APPROACH 2
// int currsmallest;
// unordered_set<int>st;
// priority_queue<int,vector<int>,greater<int>>pq;
//   SmallestInfiniteSet() {
//         currsmallest=1;
//     }
    
//     int popSmallest() {
//         int result;
//         if(!pq.empty()){
//             result=pq.top();
//             pq.pop();
//             st.erase(result);
//         }else
//         {
//         result=currsmallest;
//         currsmallest+=1;
//         }
//         return result;
//     }
    
//     void addBack(int num) {
//         if(num>=currsmallest || st.find(num)!=st.end())
//         return;
//         else
//         st.insert(num);
//         pq.push(num);
//     }

//APPROACH 3
set<int>st;
int currsmallest;
 SmallestInfiniteSet() {
        currsmallest=1;
    }
    
    int popSmallest() {
         int result;
      if(!st.empty()){
           result=*st.begin();
  st.erase(st.begin());
     }else
    {
    result=currsmallest;
  currsmallest+=1;
  }
 return result;
    }
    
    void addBack(int num) {
         if(num>=currsmallest || st.find(num)!=st.end())
    return;
       else
  st.insert(num);
    }
};
/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */