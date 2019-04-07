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

void solve(string &s){
	for(int i=1;i<s.length();i++)
		if(s[i]>=97)
			return;

	for(int i=0;i<s.length();i++)
		s[i] = (s[i]>=97?s[i]-32:s[i]+32);
}

int main()
{
	#ifdef LOCAL
		freopen("in.txt", "r", stdin);
	#endif

	string input;
	
	cin>>input;
	solve(input);
	cout<<input;

	#ifdef LOCAL
		fclose(stdin);
	#endif
	
	return 0;
}
