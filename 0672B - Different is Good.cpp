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

	int n, ans=0;
	int flag[26] = {0};
	char ch;
	
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>ch;
		flag[ch-'a']+=1;
	}
	
	if(n>26)
		ans = -1;
	else{
		for(int i=0;i<26;i++)
			if(flag[i])
				ans+=flag[i]-1;
	}
	cout<<ans<<endl;
	
	#ifdef LOCAL
		fclose(stdin);
	#endif
	
	return 0;
}
