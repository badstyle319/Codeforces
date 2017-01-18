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

	int n, ans=0;
	string input;
	map<string,int> mp;
	
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>input;
		mp[input]+=1;
	}
	for(map<string,int>::iterator it=mp.begin();it!=mp.end();it++)
		ans = max(ans, it->second);
	cout<<ans<<endl;
	
	#ifdef LOCAL
		fclose(stdin);
	#endif
	
	return 0;
}
