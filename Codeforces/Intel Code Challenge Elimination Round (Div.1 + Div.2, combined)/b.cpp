#include<iostream>
#include <vector>

using namespace std;

int main(){
    int n, c;
    cin>>n;
    int patron[n];
    for(int i=0;i<n;i++){
        cin>>patron[i];
    }
    string word;
    bool verdad=true;
    for(int i=0;i<n;i++){
        cin.ignore();
        getline(cin,word);
        c=0;
        int tam=word.size();
        for(int j=0;j<tam;j++){
            if((word[j]=='a'||word[j]=='e'||word[j]=='i'||word[j]=='o'||word[j]=='u'||word[j]=='y')&&!(word[j-1]=='u'&&word[j]=='e'||word[j-1])&&!(word[j-1]=='u'&&word[j]=='i'||word[j-1]))
                c++;
        }
        if(c!=patron[i]) verdad=false;

    }
    if(verdad)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}

