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
	int n, ans=0, x, y, z;
	cin>>n;
	while(n-->0){
		cin>>x>>y>>z;
		if((x+y+z)>1)
			ans++;
	}
	cout<<ans;
	
	return 0;
}
