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

int solve(int *nums){
	for(int i=0;i<26;i++){
		if(nums[i])
			return 1;
	}
	return 0;
}

int main()
{
	#ifdef LOCAL
		freopen("in.txt", "r", stdin);
	#endif

	string guest, host, input;
	int flag[26] = {0};
	
	cin>>guest>>host>>input;
	for(int i=0;i<guest.length();i++){
		flag[guest[i]-'A']+=1;
	}
	for(int i=0;i<host.length();i++){
		flag[host[i]-'A']+=1;
	}
	for(int i=0;i<input.length();i++){
		flag[input[i]-'A']-=1;
	}
	cout<<(solve(flag)?"NO":"YES");
	// cin>>guest>>host>>input;
	// guest+=host;
	// sort(guest.begin(), guest.end());
	// sort(input.begin(), input.end());
	// cout<<(guest==input?"YES":"NO");
	
	#ifdef LOCAL
		fclose(stdin);
	#endif
	
	return 0;
}
