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

int solve(string s1, string s2){
	int dif;
	for(int i=0;i<s1.length();i++){
		dif = tolower(s1[i])-tolower(s2[i]);
		if(dif)
			return dif/abs(dif);
	}
	return 0;
}

int main()
{
	#ifdef LOCAL
		freopen("in.txt", "r", stdin);
	#endif

	string str1, str2;
	
	cin>>str1>>str2;
	
	cout<<solve(str1, str2);

	#ifdef LOCAL
		fclose(stdin);
	#endif
	
	return 0;
}
