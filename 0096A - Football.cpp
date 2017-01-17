#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <sstream>

#define LL long long
#define ULL unsigned long long
#define PI 3.14159265

using namespace std;

static int dx[] = {-1,-1,-1,0,0,1,1,1};
static int dy[] = {-1,0,1,-1,1,-1,0,1};

int main()
{
	string str;
	int dangerous = 0;
	cin>>str;
	if(str.length()>7){
		int L,R;
		for(L=0,R=1;L<str.length(),R<str.length();){
			if(str[L]==str[R]){
				if((R-L+1)>=7){
					dangerous = 1;
					break;
				}
				R++;
			}else{
				L++;
				R=L+1;
			}
		}
	}
	
	cout<<(dangerous?"YES":"NO");
	
	return 0;
}
