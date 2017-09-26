#include<bits/stdc++.h>
#define CHAR_TO_INDEX(c) ((int)c - (int)'a')
using namespace std;
typedef struct node1{
    struct node1 *children[26];
    bool isLeaf;
    int count;
} TrieNode;

TrieNode* getNode(){
    TrieNode* node = new TrieNode;
    if(node){
        node->isLeaf = false;
        for(int i=0;i<26;++i){
            node->children[i] = NULL;
        }
        //node->count = 0;
    }
    return node;
}

void insertTrie(TrieNode* root,string s){
    TrieNode* pCrawl = root;
    int index = 0;
    for(int level=0;s[level]!='\0';++level){
        index = CHAR_TO_INDEX(s[level]);
        if(!pCrawl->children[index]){
            pCrawl->children[index] = getNode();
        }
        pCrawl->count=pCrawl->count+1;
        pCrawl = pCrawl->children[index]; 
        pCrawl->count = pCrawl->count+1;
    }
    pCrawl->isLeaf = true;
}


void printPartialCount(TrieNode* root,string s){
    TrieNode* pCrawl = root;
    int index = 0;
    for(int level=0;pCrawl && s[level]!='\0';++level){
        index = CHAR_TO_INDEX(s[level]);
        if(!pCrawl->children[index]){
            cout<<0<<endl;
            return;
        }
        pCrawl = pCrawl->children[index];
    }
}


int main() {
    int n;
    string s1;
    cin>>n;
    TrieNode* root = getNode();
    while(n--){
        cin>>s1;
        insertTrie(root,s1);         
    }
    return 0;
}
