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

	int n, k, best=0, worst=0;
	string str;
	map<int,int> mp;
	
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>str;
		mp[str.length()]+=1;
	}
	cin>>str;
	mp[str.length()]-=1;
	
	for(map<int,int>::iterator it=mp.begin();it!=mp.end();it++){
		if(it->first<str.length()){
			best+=it->second;
		}
		if(it->first<=str.length())
			worst+=it->second;
	}
	cout<<(best+best/k*5+1)<<" "<<(worst+worst/k*5+1)<<endl;
	
	#ifdef LOCAL
	fclose(stdin);
	#endif 

	return 0;
}
