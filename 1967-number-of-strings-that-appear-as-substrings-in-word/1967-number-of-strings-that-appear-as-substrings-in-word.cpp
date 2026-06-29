class Solution {
public:
bool countsubstring(string word,string element){
        int n=word.length();
      for(int i=0;i<n;i++){
            string substring="";
            for(int j=i;j<n;j++){
                substring+=word[j];
                if(substring==element)
                return true;
            }
        }
        return false;
}
    int numOfStrings(vector<string>& patterns, string word) {
        int c=0;
      for(int i=0;i<patterns.size();i++){
        bool check=countsubstring(word,patterns[i]);
        if(check)
        c++;
      }
      return c;
    }
};