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
#include <ctime>

#define LL long long
#define ULL unsigned long long
#define PI 3.14159265

using namespace std;

static int dx[] = {-1,-1,-1,0,0,1,1,1};
static int dy[] = {-1,0,1,-1,1,-1,0,1};

#define FILENAME "sample"

void solve(){
	
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n, m, k, u, v, num, ans = 1;
	bitset<1000005> holes;
	
	cin>>n>>m>>k;
	for(int i=0;i<m;i++){
		cin>>num;
		
		holes[num] = 1;
	}
	
	for(int i=0;i<k;++i){
		cin>>u>>v;
		
		if(ans==u && holes[u])
			break;
		if(ans==v && holes[v])
			break;
		
		if(ans==u && !holes[u])
			ans = v;
		else if(ans==v && !holes[v])
			ans = u;
	}
	cout<<ans;

	return 0;
}
