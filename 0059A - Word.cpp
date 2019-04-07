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

	string input;
	int upperCnt = 0;
	
	cin>>input;
	for(int i=0;i<input.length();i++){
		if(input[i]>=65 && input[i]<=90)
			upperCnt++;
	}
	
	int result=(upperCnt>input.length()/2?1:0);
	for(int i=0;i<input.length();i++){
		input[i] = result?toupper(input[i]):tolower(input[i]);
	}
	cout<<input<<endl;
	
	#ifdef LOCAL
		fclose(stdin);
	#endif
	
	return 0;
}
