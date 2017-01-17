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

	vector<int> nums(100001, 0);
	int n, num, ans=1, limit=0;
	vector<int> primes(100001, 1);
	
	//calculate primes less than 100001
	for(int i=2;i<primes.size();i++)
		if(primes[i])
			for(int j=i+i;j<primes.size();j+=i)
				primes[j] = 0;
	
	cin>>n;
	while(n-->0){
		cin>>num;
		limit = max(limit, num);
		nums[num] += 1;
	}
	
	int count=0;
	for(int i=2;i<=limit;i+=2)
		if(nums[i])
			count+=nums[i];
	ans = max(ans, count);
	for(int i=3;i<=limit;i+=2){
		count = 0;
		if(primes[i])
			for(int j=i;j<=limit;j+=i)
					count+=nums[j];
		ans = max(ans, count);
	}
	
	cout<<ans;
	
	#ifdef CF
	fclose(stdin);
	#endif 

	return 0;
}
