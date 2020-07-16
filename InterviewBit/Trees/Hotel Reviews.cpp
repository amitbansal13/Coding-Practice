struct trie{
    bool end;
    trie* arr[26];
};

struct counting {
    int index;
    int goodCount;
};

trie* getNode() {
    trie* t = new trie;
    t->end = false;
    for(int i=0;i<26;i++) {
        t->arr[i] = NULL;
    }
    return t;
}

void insert(trie* t, string s){
    trie* temp = t;
    for(int i=0;i<s.length();i++) {
        if(temp->arr[s[i]-'a'] == NULL)
            temp->arr[s[i]-'a'] = getNode();
        temp = temp->arr[s[i]-'a'];
    }
    temp->end = true;
}

bool find(trie* t, string s) {
    trie* temp = t;
    for(int i=0;i<s.length();i++) {
        if(temp->arr[s[i]-'a'] == NULL) {
            return false;
        }
        temp = temp->arr[s[i]-'a'];
    }
    if(temp == NULL || temp->end == false)
        return false;
    return true;
}

int comp(counting a, counting b) {
    if(a.goodCount == b.goodCount)
    return a.index<b.index;
    return a.goodCount > b.goodCount;
}
vector<string> split(string s, string tok) {
    vector<string> vec;
    string temp = "";
    int index = 0;
    while(index<s.size()) {
        temp = "";
        while(index<s.size() && s[index]!='_') {
            temp+=s[index];
            index++;
        }
        vec.push_back(temp);
        index++;
    }
    return vec;
}
vector<int> Solution::solve(string A, vector<string> &B) {
    vector<string> arr = split(A, "_");
    trie* t = getNode();
    for(string s:arr) {
        insert(t, s);
    }
    counting counter[B.size()];
    for(int i=0;i<B.size();i++) {
        vector<string> temp = split(B[i], "_");
        counter[i].index = i;
        counter[i].goodCount = 0;
        for(string x:temp){
            if(find(t, x)) {
                counter[i].goodCount++;
            }
        }
    }
    sort(counter, counter + B.size(), comp);
    vector<int> ans;
    for(int i=0;i<B.size();i++) {
        ans.push_back(counter[i].index);
    }
    return ans;
}
