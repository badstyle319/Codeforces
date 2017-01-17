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

	int arr[5], ans=0;
	vector<int> nums;
	
	for(int i=0;i<5;i++)
		cin>>arr[i];
	
	nums.resize(arr[4]+1, 0);
	
	for(int i=0;i<4;i++){
		for(int j=arr[i];j<nums.size();j+=arr[i])
			nums[j] = 1;
	}
	
	for(int i=0;i<nums.size();i++)
		if(nums[i])
			ans++;
	cout<<ans;
	
	#ifdef CF
		fclose(stdin);
	#endif
	
	return 0;
}
