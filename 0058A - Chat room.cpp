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

string solve(string s){
	int status = 0;
	for(int i=0;i<s.length();i++){
		switch(s[i]){
			case 'h':
				if(!status)
					status++;
				break;
			case 'e':
				if(status==1)
					status++;
				break;
			case 'l':
				if(status==2 || status==3)
					status++;
				break;
			case 'o':
				if(status==4)
					return "YES";
				break;
		}
	}
	return "NO";
}

int main()
{
	#ifdef LOCAL
		freopen("in.txt", "r", stdin);
	#endif

	string s;
	
	cin>>s;
	cout<<solve(s);

	#ifdef LOCAL
		fclose(stdin);
	#endif
	
	return 0;
}
