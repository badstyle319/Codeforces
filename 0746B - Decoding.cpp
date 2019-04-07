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

	int n, flag;
	string input, output;
	
	cin>>n>>input;
	flag = n%2;
	for(int i=0;i<n;i++){
		if(flag)
			output.append(&input[i], 1);
		else
			output.insert(0, 1, input[i]);
		flag^=1;
	}
	cout<<output<<endl;
	
	#ifdef LOCAL
		fclose(stdin);
	#endif
	
	return 0;
}
