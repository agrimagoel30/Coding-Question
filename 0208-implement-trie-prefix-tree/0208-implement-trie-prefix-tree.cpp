class Node{
public:
char data;
bool terminal;
unordered_map<char,Node*> children;
Node(char data){
    this->data=data;
    this->terminal=false;
}
void maketerminal(){
    terminal=true;
}
bool isterminal(){
    return this->terminal==true;
}
};
class Trie {
public:
        Node*root;
    Trie() {
             root=new Node('\0');
    }
    
    void insert(string word) {
        Node* curr=root;
        for(int i=0;i<word.length();i++){
            char ch=word[i];
            if(curr->children.count(ch)){
                curr=curr->children[ch];
            }else{
                Node* temp=new Node(ch);
                curr->children[ch]=temp;
                curr=temp;
            }
        }
        curr->maketerminal();
    }
    
    bool search(string word) {
        Node* curr=root;
        for(int i=0;i<word.length();i++){
            char ch=word[i];
            if(curr->children.count(ch)){
                curr=curr->children[ch];
            }else{
                return false;
            }
        }
return curr->isterminal();        
    }
    
    bool startsWith(string prefix) {
          Node* curr=root;
        for(int i=0;i<prefix.length();i++){
            char ch=prefix[i];
            if(curr->children.count(ch)){
                curr=curr->children[ch];
            }else{
                return false;
            }
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */