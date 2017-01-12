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
	#ifdef CF
		freopen("in.txt", "r", stdin);
	#endif

	string s, target="Bulbasaur";
	map<char,int> mp;
	int ans = 1e5+1;;
	
	cin>>s;
	for(int i=0;i<s.length();i++){
		// if(!mp.count(s[i]))
			// mp[s[i]] = 1;
		// else
			// mp[s[i]] += 1;
		mp[s[i]]+=1;
	}
	mp['u']/=2;
	mp['a']/=2;
	
	for(int i=0;i<target.length();i++){
		ans = min(ans, mp[target[i]]);
	}
	cout<<ans;
	
	#ifdef CF
		fclose(stdin);
	#endif
	
	return 0;
}
