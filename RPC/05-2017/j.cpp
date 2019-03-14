#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include <cmath>

#define F first
#define S second
#define db(x) cout << #x << " == " << x << endl
#define _ << " _ " <<

using namespace std;
int n;

char x[] = {'n','o','o','p','p','q','q','r','r','s','s','t','t','u','u','v','v','w','w','x','x','y','y','z','z'};

int main(){
	scanf("%d", &n);
	if(n>25){
		int o = 1+ (int)ceil(n/25.0);
		printf("a%c", x[(n-1)%25]);
		for (int i = 0; i < o-3; ++i)
		{
			printf("%c", i&1?'z':'a');
		}
		printf("%c\n", (((n-25-1)/25)&1)?((n&1)?'z':'y'):((n&1)?'b':'a')  );
	}
	else{
		printf("a%c\n", (char)(n+'a'));
	}
	return 0;
}
