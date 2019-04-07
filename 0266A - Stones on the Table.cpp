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
	
	int n, count=0;;
	string input;
	
	cin>>n>>input;
	for(int i=0, j=1;i<input.length(), j<input.length();){
		if(input[i]==input[j]){
			count++;
			j++;
		}
		else{
			i = j;
			j = i+1;
		}
	}
	cout<<count;
	
	#ifdef LOCAL
		fclose(stdin);
	#endif
	
	return 0;
}
