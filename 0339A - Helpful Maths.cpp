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
	
	cin>>input;
	
	sort(input.begin(),input.end());
	input.erase(0, input.size()-input.size()/2-1);
	
	for(int i=0;i<input.size();i++){
		cout<<input[i];
		if(i!=input.size()-1)
			cout<<"+";
	}

	#ifdef LOCAL
		fclose(stdin);
	#endif
	
	return 0;
}
