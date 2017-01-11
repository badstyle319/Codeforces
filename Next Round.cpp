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
	int n, k, ans = 0;
	cin>>n>>k;
	vector<int> nums(n, 0);
	for(int i=0;i<n;i++)
		cin>>nums[i];
	sort(nums.begin(), nums.end(), greater<int>());
	for(int i=0;i<nums.size();i++)
		if(nums[i] && nums[i]>=nums[k-1])
			ans++;
	cout<<ans;
	return 0;
}
