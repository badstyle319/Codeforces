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

	int n;
	int original[101] = {0};
	int output[101] = {0};
	
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>original[i+1];
	
	for(int i=1;i<=n;i++){
		output[original[i]] = i;
	}
	for(int i=1;i<=n;i++)
		cout<<output[i]<<" ";
	
	
	#ifdef CF
		fclose(stdin);
	#endif
	
	return 0;
}
