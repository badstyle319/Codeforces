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

	int n, ans=26;
	int flag[26] = {0};
	char ch;
	
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>ch;
		ch = tolower(ch);
		if(!flag[ch-'a']){
			flag[ch-'a'] = 1;
			ans--;
		}
	}
	cout<<(ans?"NO":"YES");
	
	#ifdef LOCAL
		fclose(stdin);
	#endif
	
	return 0;
}
