struct trie{
    int count;
    trie* arr[26];
};

trie* get() {
    trie* t = new trie;
    for(int i=0;i<26;i++){
        t->arr[i]=NULL;
    }
    t->count=0;
    return t;
}

void insert(trie* t, string s) {
    int index;
    trie* temp = t; 
    for(int i=0;i<s.length();i++) {
        if(s[i]>='a' && s[i]<='z') {
            index = s[i]-'a';
        }
        else{
            index = s[i]-'A';
        }
        if(temp->arr[index]!=NULL) {
            temp->arr[index]->count++;
        }
        else {
            temp->arr[index] = get();
            temp->arr[index]->count++;
        }
        temp = temp->arr[index];
    }
}

string find(trie* t, string s) {
    string temp = "";
    int index;
    trie* tree = t;
    for(int i=0;i<s.length();i++) {
        if(s[i]>='a' && s[i]<='z') {
            index = s[i]-'a';
        }
        else{
            index = s[i]-'A';
        }
        if(tree->arr[index]->count == 1) {
            temp+= s[i];
            return temp;
        }
        temp+=s[i];
        tree = tree->arr[index];
    }
    return temp;
}

vector<string> Solution::prefix(vector<string> &A) {
    vector<string> ans;
    trie* t = get();
    for(int i=0;i<A.size();i++ ) {
        insert(t, A[i]);
    }
    for(int i=0;i<A.size();i++) {
        ans.push_back(find(t, A[i]));
    }
    return ans;
}
