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
#include <queue>

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
	
	string names[]={"Sheldon", "Leonard", \
					"Penny", "Rajesh", "Howard"};

	int n;
	
	cin>>n;
	for(int digit=1;;digit++){
		int upperBound=5*(1<<(digit-1));
		if(n<=upperBound){
			cout<<names[(n-1)/(1<<(digit-1))];
			break;
		}else
			n-=upperBound;
	}
	
	#ifdef LOCAL
		fclose(stdin);
	#endif
	
	return 0;
}
