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

int isReverse(string s, string t){
	if(s.length()!=t.length())
		return 0;
	
	int len = s.length();
	for(int i=0;i<s.length();i++){
		if(s[i]!=t[len-i-1])
			return 0;
	}
	return 1;
}

int main()
{
	#ifdef CF
	freopen("in.txt", "r", stdin);
	#endif

	string s, t;
	
	cin>>s>>t;
	
	cout<<(isReverse(s, t)?"YES":"NO");
	
	#ifdef CF
	fclose(stdin);
	#endif 

	return 0;
}
