#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int d,c;
        int a[3],b[3];
        cin>>d>>c;
        int charges_a=0,charges_b=0;
        for(int i=0;i<3;i++){
            cin>>a[i];
            charges_a+=a[i];
        }
        for(int i=0;i<3;i++){
            cin>>b[i];
            charges_b+=b[i];
        }
        if(charges_b<150 && charges_a>=150 ){
            if((charges_a+charges_b+c+d)<((charges_a+charges_b+2*d)))
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else if(charges_a<150 && charges_b>=150){
            if((charges_a+charges_b+c+d)<((charges_a+charges_b+2*d)))
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else if(charges_a<150 && charges_b<150){
            cout<<"NO"<<endl;
        }
        else{
            if((charges_a+charges_b+c)<(charges_a+charges_b+2*d)){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }

    }
    return 0;
}