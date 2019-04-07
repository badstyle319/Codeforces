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

	int n, num;
	bitset<100001> data;
	
	cin>>n;
	for(int i=0, j=n;i<n;i++){
		cin>>num;
		data[num] = 1;
		while(data[j] && j>=(n-i)){
			cout<<j<<" ";
			j--;
		}
		cout<<endl;
	}
	
	#ifdef LOCAL
	fclose(stdin);
	#endif 

	return 0;
}
