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

	int n;
	vector<int> primes;
	
	cin>>n;
	primes.resize(n+1, 1);
	
	primes[0] = 0;
	primes[1] = 0;
	for(int i=2;i<primes.size();i++)
		if(primes[i])
			for(int j=i+i;j<primes.size();j+=i)
				primes[j] = 0;
	
	for(int x=4;x<=n/2;x+=2){
		int y=n-x;
		if(!primes[x] && !primes[y]){
			cout<<x<<" "<<y<<endl;
			break;
		}
	}
	
	#ifdef LOCAL
		fclose(stdin);
	#endif
	
	return 0;
}
