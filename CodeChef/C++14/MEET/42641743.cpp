#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string p = "";
        int value = 0;
        char c;
        for (int i = 0; i < 7; i++)
        {
            cin >> c;
            p.push_back(c);
        }
        if(p[5]=='A'){
                value = ((p.at(0)-'0')*10 + (p.at(1)-'0'))*60 + (p.at(3)-'0')*10 + (p.at(4)-'0');
                if(p.at(0)=='1' && p.at(1) == '2'){
                    value = (p.at(3)-'0')*10 + (p.at(4)-'0');
                }
            }
        else if(p[5]=='P'){
                value = 720 + ((p.at(0)-'0')*10 + (p.at(1)-'0'))*60 + (p.at(3)-'0')*10 + (p.at(4)-'0');
                if(p.at(0)=='1' && p.at(1) == '2'){
                    value = 720 + (p.at(3)-'0')*10 + (p.at(4)-'0');
                }
            }
        int n;
        cin >> n;
        while (n--)
        {
            string s = "";
            char time;
            int start=0,nd=0;
            for (int i = 0; i < 14; i++)
            {
                cin >> time;
                s.push_back(time);
            }
            if(s[5]=='A'){
                start = ((s.at(0)-'0')*10 + (s.at(1)-'0'))*60 + (s.at(3)-'0')*10 + (s.at(4)-'0');
                if(s.at(0)=='1' && s.at(1) == '2'){
                    start = (s.at(3)-'0')*10 + (s.at(4)-'0');
                }
            }
            else if(s[5]=='P'){
                start = 720 + ((s.at(0)-'0')*10 + (s.at(1)-'0'))*60 + (s.at(3)-'0')*10 + (s.at(4)-'0');
                if(s.at(0)=='1' && s.at(1) == '2'){
                    start = 720 + (s.at(3)-'0')*10 + (s.at(4)-'0');
                }
            }
            if(s[12]=='A'){
                nd = ((s.at(7)-'0')*10 + (s.at(8)-'0'))*60 + (s.at(10)-'0')*10 + (s.at(11)-'0');
                if(s.at(7)=='1' && s.at(8) == '2'){
                    nd = (s.at(10)-'0')*10 + (s.at(11)-'0');
                }
            }
            else if(s[12]=='P'){
                nd = 720 + ((s.at(7)-'0')*10 + (s.at(8)-'0'))*60 + (s.at(10)-'0')*10 + (s.at(11)-'0');
                if(s.at(7)=='1' && s.at(8) == '2'){
                    nd = 720 + (s.at(10)-'0')*10 + (s.at(11)-'0');
                }
            }
            // cout<<value<<" "<<start<<" "<<nd<<" "<<endl;
            if(start<=value && value<=nd){
                cout<<1;
            }
            else{
                cout<<0;
            }    
        }
        cout<<endl;
    }
    return 0;
}