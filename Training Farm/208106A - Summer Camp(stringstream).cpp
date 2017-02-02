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
//good example for the usage of stringstream
int main()
{
	#ifdef LOCAL
		freopen("in.txt", "r", stdin);
	#endif

	stringstream s;
	int n, i=1;
	
	cin >> n;
	while(s.str().length()<n){
		s<<i;
		i++;
	}
	cout<<s.str()[n-1]<<endl;
	
	#ifdef LOCAL
		fclose(stdin);
	#endif
	
	return 0;
}
