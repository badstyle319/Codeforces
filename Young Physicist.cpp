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

	int n, num, sum[3]={0};
	
	cin>>n;
	for(int i=0;i<3*n;i++){
		cin>>num;
		sum[i%3]+=num;
	}
	cout<<(sum[0]||sum[1]||sum[2]?"NO":"YES");

	#ifdef CF
	fclose(stdin);
	#endif 

	return 0;
}
