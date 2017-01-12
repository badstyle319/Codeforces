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

	int n, m, ans=1e9;
	int nums[50] = {0};
	
	cin>>n>>m;
	for(int i=0;i<m;i++)
		cin>>nums[i];
	sort(nums, nums+m);
	
	for(int i=0;(i+n-1)<m;i++)
		ans = min(ans, nums[i+n-1]-nums[i]);
	
	cout<<ans<<endl;
	
	#ifdef CF
		fclose(stdin);
	#endif
	
	return 0;
}
