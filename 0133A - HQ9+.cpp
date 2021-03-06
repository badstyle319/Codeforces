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

const char* solve(string s){
	for(int i=0;i<s.length();i++){
		switch(s[i]){
			case 'H':
			case 'Q':
			case '9':
				return "YES";
		}
	}
	return "NO";
}

int main()
{
	#ifdef LOCAL
		freopen("in.txt", "r", stdin);
	#endif

	string input;
	
	cin>>input;
	cout<<solve(input);
	
	#ifdef LOCAL
		fclose(stdin);
	#endif
	
	return 0;
}
