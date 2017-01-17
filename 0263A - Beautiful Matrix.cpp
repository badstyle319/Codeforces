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

	int x, y, t;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin>>t;
			if(t){
				x = i;
				y = j;
			}
		}
	}
	cout<<(abs(x-2)+abs(y-2));
	
	
	#ifdef LOCAL
		fclose(stdin);
	#endif
	
	return 0;
}
