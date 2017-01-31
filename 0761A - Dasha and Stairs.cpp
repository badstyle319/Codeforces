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

	int a, b;
	cin>>a>>b;
	
	if(!a&&!b){
		cout<<"NO";
		return 0;
	}
	
	if(abs(a-b)<=1)
		cout<<"YES";
	else
		cout<<"NO";
	
	#ifdef LOCAL
	fclose(stdin);
	#endif 

	return 0;
}
