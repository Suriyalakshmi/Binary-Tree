#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
string str;
int no_of_char;
int rank=0;
 string word;
void swap(char *char1,char *char2){
    char temp;
    temp=*char1;
    *char1=*char2;
    *char2=temp;
    //cout<<" "<<char1<<char2<<" "<<endl;
}

void permutation(char *letters,int l,int r){
    str="";
   if(l==r)
    {
        for(int j=0;j<no_of_char;j++){
            str=str+letters[j];
              cout<<letters[j];
        }
        rank++;
        cout<<" "<<rank<<endl;
        if(str==word){
            cout<<endl<<"rank of the given string is:"<<rank<<endl<<endl;
            return ;
        }

    }
    else{
        for(int i=l;i<=r;i++){
            swap((letters+l),(letters+r));
            permutation(letters,l+1,r);
        }
    }
}
int main(){
    cout<<"Enter No .of characters in the array:";
    cin>>no_of_char;
    char arrayOfLetters[no_of_char];
    cout<<"Enter the Characters:";
    for(int i=0;i<no_of_char;i++){
            cin>>arrayOfLetters[i];
            cout<<arrayOfLetters[i]<<endl;
    }
    cout<<"Enter the string to be ranked:";

    cin>>word;
    permutation(arrayOfLetters,0,no_of_char-1);

}
