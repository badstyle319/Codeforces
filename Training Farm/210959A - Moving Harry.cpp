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
	LL n, x=0, y=0;
	
	cin>>input>>n;
	for(int i=0;i<input.length();i++){
		switch(input[i]){
			case 'U':
				y++;
				break;
			case 'D':
				y--;
				break;
			case 'R':
				x++;
				break;
			case 'L':
				x--;
				break;
		}
	}
	cout<<x*n<<" "<<y*n<<endl;
	
	#ifdef LOCAL
	fclose(stdin);
	#endif 

	return 0;
}
