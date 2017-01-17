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

	string input, target;
	int ans=0;
	
	cin>>input>>target;
	
	for(int i=0;i<input.length();){
		if(input.substr(i, target.length())==target){
			ans++;
			i+=target.length();
		}else
			i++;
	}
	cout<<ans<<endl;
	
	#ifdef LOCAL
	fclose(stdin);
	#endif 

	return 0;
}
