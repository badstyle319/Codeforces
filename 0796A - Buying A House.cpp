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
#include <bitset>
#include <ctime>

#define LL long long
#define ULL unsigned long long
#define PI 3.14159265

using namespace std;

static int dx[] = {-1,-1,-1,0,0,1,1,1};
static int dy[] = {-1,0,1,-1,1,-1,0,1};

#define FILENAME "sample"

void solve(){
	
}

int main()
{
#ifdef LOCAL
	freopen(FILENAME ".in", "r", stdin);
	freopen(FILENAME ".out", "w", stdout);
#endif
	int n, m, k, ans=1e9;
	vector<int> nums;
	
	cin>>n>>m>>k;
	nums.resize(n, 0);
	for(int i=0;i<nums.size();i++)
		cin>>nums[i];
	
	for(int i=0;i<m-1;i++)
		if(nums[i]>0 && k>=nums[i])
			ans = min(ans, (m-1-i)*10);
	for(int i=m;i<n;i++)
		if(nums[i]>0 && k>=nums[i])
			ans = min(ans, (i-m+1)*10);
	cout<<ans<<endl;
	
	
#ifdef LOCAL
	fclose(stdin);
	fclose(stdout);
#endif

	return 0;
}
