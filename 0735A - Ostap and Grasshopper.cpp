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

	int n, k;
	vector<int> idx;
	string input, ans;
	
	cin>>n>>k>>input;
	
	for(int i=0;i<input.length();i++){
		switch(input[i]){
			case 'G':
			case 'T':
				idx.push_back(i);
				break;
		}
	}
	
	// ans = (idx[1]-idx[0])<k?"NO":"YES";
	// for(int i=idx[0]+k;i<=idx[1];i+=k){
		// if(input[i]=='#'){
			// ans = "NO";
			// break;
		// }
	// }
	ans = "NO";
	for(int i=idx[0]+k;i<input.length();i+=k){
		if(input[i]=='#')
			break;
		else if(i==idx[1]){
			ans = "YES";
			break;
		}
	}
	cout<<ans<<endl;
	
	#ifdef LOCAL
	fclose(stdin);
	#endif 

	return 0;
}
