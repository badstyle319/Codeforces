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

	vector<int> nums;
	int n, ans=1;
	
	cin>>n;
	nums.resize(n, 0);
	for(int i=0;i<n;i++)
		cin>>nums[i];
	
	
	for(int i=0, j=1;i<n-1;i++){
		if(nums[i]<=nums[i+1]){
			j++;
			ans = max(ans, j);
		}else{
			j=1;
		}
	}
	cout<<ans;
	#ifdef CF
	fclose(stdin);
	#endif 

	return 0;
}
