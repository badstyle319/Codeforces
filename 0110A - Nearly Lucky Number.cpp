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
	
	LL n;
	int count=0, temp;
	
	cin>>n;
	while(n){
		temp = n%10;
		if(temp==4 || temp==7)
			count++;
		n/=10;
	}
	cout<<(count==4||count==7?"YES":"NO");
	
	#ifdef CF
		fclose(stdin);
	#endif
	
	return 0;
}
