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

	int n, m, num;
	bitset<2001> bs;
	
	cin>>n>>m;
	if(n>m){
		cout<<"YES"<<endl;
		return 0;
	}
	
	for(int i=0;i<n;i++){
		cin>>num;
		bs |= bs<<(num%m);
		// cout<<bs<<endl;
		bs |= bs>>m;
		// cout<<bs<<endl;
		bs[num%m] = 1;
		// cout<<bs<<endl<<endl;
	}
	cout<<(bs[0]?"YES":"NO")<<endl;
	
	#ifdef LOCAL
	fclose(stdin);
	#endif 

	return 0;
}
