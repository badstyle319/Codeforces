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
	#ifdef LOCAL
	freopen("in.txt", "r", stdin);
	#endif

	string s = "abcdefghijklmnopqrstuvwxyz";
	string input;
	int ans = 0;
	char ch='a';
	
	cin>>input;
	
	for(int i=0;i<input.length();i++){
		int diff = input[i]-ch;
		if(diff<0)
			diff+=26;
		ans += min(diff, 26-diff);
		ch = input[i];
	}
	cout<<ans<<endl;
	
	#ifdef LOCAL
	fclose(stdin);
	#endif 

	return 0;
}
