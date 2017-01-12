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

	int n, input, ans=0, current=0;
	
	cin>>n;
	while(n-->0){
		cin>>input;
		current-=input;
		cin>>input;
		current+=input;
		ans = max(ans, current);
	}
	cout<<ans;
	
	#ifdef LOCAL
		fclose(stdin);
	#endif
	
	return 0;
}
