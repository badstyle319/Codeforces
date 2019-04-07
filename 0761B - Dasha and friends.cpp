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

	int n, L, num, legal=0;
	vector<int> nums;
	string s1, s2;
	
	cin>>n>>L;
	for(int i=0;i<n;i++){
		cin>>num;
		nums.push_back(num);
	}
	for(int i=1;i<nums.size();i++){
		num = nums[i]-nums[i-1];
		s1+=num/10+'0';
		s1+=num%10+'0';
	}
	num = L-nums[nums.size()-1]+nums[0];
	s1+=num/10+'0';
	s1+=num%10+'0';
	
	nums.clear();
	for(int i=0;i<n;i++){
		cin>>num;
		nums.push_back(num);
	}
	for(int i=1;i<nums.size();i++){
		num = nums[i]-nums[i-1];
		s2+=num/10+'0';
		s2+=num%10+'0';
	}
	num = L-nums[nums.size()-1]+nums[0];
	s2+=num/10+'0';
	s2+=num%10+'0';
	size_t pos = 0;
	while((pos=s2.find(s1.substr(0, 2), pos))!=string::npos){
		int len1=pos;
		int len2=s1.length()-len1;
		if(s1.substr(0, len2)==s2.substr(pos) && s1.substr(len2)==s2.substr(0, len1)){
			legal = 1;
			break;
		}
		pos++;
	}
	cout<<(legal?"YES":"NO");
	
	#ifdef LOCAL
	fclose(stdin);
	#endif 

	return 0;
}
