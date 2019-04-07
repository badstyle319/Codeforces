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
	
	int n, ans=0, num;
	vector<int> nums(5, 0);
	
	cin>>n;
	while(n-->0){
		cin>>num;
		nums[num]+=1;
	}
	//4
	ans+=nums[4];
	//3+1 or 3
	ans+=nums[3];
	nums[1]-=nums[3];
	//2+2
	ans+=nums[2]/2;
	nums[2]%=2;
	
	//2+1+1 or 2+1 or 2
	if(nums[2]>0){
		ans++;
		nums[1]-=2;
	}
	if(nums[1]>0){
		ans+=(nums[1]-1)/4+1;
	}
	
	cout<<ans;
	#ifdef LOCAL
		fclose(stdin);
	#endif
	
	return 0;
}
