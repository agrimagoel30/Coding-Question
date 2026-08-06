class Solution {
public:
int MAX_WIDTH;
  string findLine(int i, int j, int eachGaddhaSpace, int extraSpaceGaddha, vector<string>& words) {

        string line;

        for (int k = i; k < j; k++) {

            line += words[k];
            if(k==j-1)
            continue;

            for (int z = 1; z <= eachGaddhaSpace; z++) {
                line += " ";
            } 

            if (extraSpaceGaddha > 0) {
                line += " ";
                extraSpaceGaddha--;
            }
        }

        while (line.length() < MAX_WIDTH) {
            line += " ";
        }

        return line;
    }
    vector<string> fullJustify(vector<string>& words, int maxwidth) {
        vector<string>result;
        int n=words.size();
        MAX_WIDTH=maxwidth;
        int i=0;
        while(i<n){
            int lettercount=words[i].length();
            int j=i+1;
            int space=0;
            while(j<n && words[j].length()+1+space+lettercount<=maxwidth){
                lettercount+=words[j].length();
                space++;
                j++;
            }
            int remaining=maxwidth-lettercount;
            int eachspace=space==0 ? 0:remaining/space;
            int extraspace=space==0 ? 0 : remaining%space;
            if(j==n){
                eachspace=1;
                extraspace=0;
            }
            result.push_back(findLine(i,j,eachspace,extraspace,words));
            i=j;
        }
        return result;
    }
};