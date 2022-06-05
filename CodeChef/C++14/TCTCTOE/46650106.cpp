
// Problem: Tic Tac Toe
// Contest: CodeChef - May Challenge 2021 Division 1 (Unrated)
// URL: https://www.codechef.com/MAY21A/problems/TCTCTOE
// Memory Limit: 256 MB
// Time Limit: 500 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include <iostream>
#include <iosfwd>
#include <iomanip>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <cassert>
#include <cctype>
#include <climits>
#include <vector>
#include <bitset>
#include <set>
#include <queue>
#include <math.h>
#include <stack>
#include <map>
#include <deque>
#include <string>
#include <list>
#include <iterator>
#include <sstream>
#include <complex>
#include <fstream>
#include <functional>
#include <numeric>
#include <utility>
#include <algorithm>
#include <assert.h>
#include <unordered_map>
#pragma GCC optimize ("-O3")

using namespace std;

#define watch(x) cout << (#x) << " = " << (x) << endl
#define PI double(2 * acos(0.0))
#define LL long long
#define MOD 1000000007
#define all(x) (x).begin(), (x).end()
#define INF 1e15

char board[3][3];

int checkWin(char winner)	{
	for(int i = 0; i < 3; i++)	{
		if(board[i][0] == board[i][1] && board[i][1] == board[i][2])	{
			if(board[i][0] == winner)	{
				return 1;
			}
		}
		if(board[0][i] == board[1][i] && board[1][i] == board[2][i])	{
			if(board[0][i] == winner)	{
				return 1;
			}
		}
	}
	int flag = 1;
	for(int i = 0; i < 3; i++)	{
		if(board[i][i] != winner)	{
			flag = 0;
		}
	}
	if(flag)	{
		return 1;
	}
	flag = 1;
	for(int i = 0; i < 3; i++)	{
		if(board[2-i][i] != winner)	{
			flag = 0;
		}
	}
	if(flag)	{
		return 1;
	}
	return 0;
}

int main()  {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)	{
    	
    	int countX = 0;
    	int countO = 0;
    	for(int i = 0; i < 3; i++)	{
    		for(int j = 0; j < 3; j++)	{
    			cin >> board[i][j];
    			if(board[i][j] == 'X')	{
    				countX++;
    			} else if(board[i][j] == 'O')	{
    				countO++;
    			}
    		}
    	}
    	if(countO == countX || countO == (countX-1))	{
    		int winX = checkWin('X');
    		int winO = checkWin('O');
    		if(winX && winO)	{
    			cout << "3\n";
    		} else if(winX)		{
    			if(countO == (countX-1))	{
    				cout << "1\n";
    			} else {
    				cout << "3\n";
    			}
    		} else if(winO)	{
    			if(countO == countX)	{
    				cout << "1\n";
    			} else {
    				cout << "3\n";
    			}
    		} else {
    			if((countO+countX) == 9)	{
    				cout << "1\n";
    			} else	{
    				cout << "2\n";
    			}
    		}
    	} else{
    		cout << "3\n";
    	}
    }
    return 0;
}







































