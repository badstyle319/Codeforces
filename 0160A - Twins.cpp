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

	int n, num, total=0, sum=0, ans=0;
	vector<int> nums;
	
	cin>>n;
	while(n-->0){
		cin>>num;
		total+=num;
		nums.push_back(num);
	}
	sort(nums.begin(), nums.end());

	for(int i=nums.size()-1;i>=0;i--){
		sum+=nums[i];
		total-=nums[i];
		ans++;
		if(sum>total)
			break;
	}
	cout<<ans;
	
	#ifdef LOCAL
		fclose(stdin);
	#endif
	
	return 0;
}
