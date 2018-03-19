#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
struct Node {
    char data;
    struct Node *left;
    struct Node *right;
}*root=NULL;
void insert(char d){
    Node n=new Node;
    n->data=d;
    n->left=NULL;
    n->right=NULL;
    if(root==NULL)
        root=n;
    else if(root->left==NULL)
        root->left=n;
    else
        root->right=n;
}
void print(){
    if(root){
        print(root->left);
        if(root->data!='0')
            cout<<root->data<<" ";
        print(root->right);
    }
}
int main(){
    int n;
    cout<<"No of strings":
    cin>>n;
    for(int l=0;l<n;l++){
        string str;
        cout<<"enter the string";
        cin>>str;
        insert(str[0]);
        for(int i=1;i<str.length();i++){
            if(str[i]=='{'){
                insert(str[i+1]);
            }
        }
        for(int i=1;i<str.length();i++){
            if(str[i]=='{'){
                j=i+2;
                do{
                    insert(str[j]);
                }while(str[j]!='}')
            }
        }
        print();
    }

}
