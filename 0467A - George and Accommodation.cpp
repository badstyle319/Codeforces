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

	int n, ans=0, lived, capacity;
	
	cin>>n;
	while(n-->0){
		cin>>lived>>capacity;
		if((capacity-lived)>1)
			ans++;
	}
	cout<<ans;
	
	#ifdef CF
		fclose(stdin);
	#endif
	
	return 0;
}
