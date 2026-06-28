class Solution {
public:
bool removesenate(string &senate,int idx,char ch){
    bool checkleft=false;
    while(true){
    if(idx==0)
    checkleft=true;
    if(senate[idx]==ch){
    senate.erase(begin(senate)+idx);
    break;
    }
    idx=(idx+1)%senate.length();
    }
    return checkleft;
}
    string predictPartyVictory(string senate) {
        int rcount=count(senate.begin(),senate.end(),'R');
        int dcount=senate.length()-rcount;
        int idx=0;
        while(rcount>0 && dcount>0){
            if(senate[idx]=='R'){
                bool checkleftside=removesenate(senate,(idx+1)%(senate.length()),'D');
                dcount--;
                if(checkleftside)
                idx--;
            }else{
                  bool checkleftside=removesenate(senate,(idx+1)%(senate.length()),'R');
                  rcount--;
                if(checkleftside)
                idx--;
            }
            idx=(idx+1)%(senate.length());
        }
        return rcount==0?"Dire":"Radiant";
    }
};