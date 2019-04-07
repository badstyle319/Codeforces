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

int cal(int m, int n){
	if(m%2==0 || n%2==0)
		return m*n/2;
	else{
		return max(cal(m-1, n)+n/2, cal(m, n-1)+m/2);
	}
}

int main()
{
	int M,N;
	cin>>M>>N;
	cout<<cal(M,N);
	return 0;
}
