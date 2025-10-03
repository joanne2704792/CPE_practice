#include<iostream>
using namespace std;

int main(){
    int n, m, a, b, number;
    int max = 0;
    int count=1;
    while(cin >> n >> m){
        if(n>m){
            a=m;
            b=n;
        }
        else{ 
            a=n;
            b=m;
        }
        
        for(int i=a; i< b+1; i++){
            number = i;
            while(number!=1){
                if(number%2==1){
                    number = number*3 +1;
                    count++;
                }
                else if (number%2 == 0){
                    number/=2;
                    count++;
                }
            }
            if(count > max){
                max = count;
            }
            count = 1;
        }
        
        cout << n <<" "<< m << " " << max << endl;
    }
    return 0;
}