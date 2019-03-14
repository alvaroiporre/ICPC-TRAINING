
#include<bits/stdc++.h>
using namespace std;
int numOccurences(string s1, string s2)
{
    int count = 0;
    int pos = 0;
    int len2 = s2.length();
    while ((pos = s1.find(s2, pos)) != string::npos) {
        count++;
        pos += len2;
    }
    return count;
}

int main()
{
    string s;
    cin >> s;
    int len = s.length();
    int minchar = len;
    string save;
    for(int i=0; i<len; i++) {
        for(int j=i; j<len; j++) {
            string s2 = s.substr(i, j-i+1);
            int count = numOccurences(s, s2);
            int total = s.length() - (count-1)*s2.length() + count;
            if (total < minchar) {
                //cout<<" cad "<<total<<" "<<s2<<endl;
                minchar = total;
                save = s2;
            }
        }
    }
    cout << minchar << endl;
  //  cout << save << endl;
    return 0;
}
