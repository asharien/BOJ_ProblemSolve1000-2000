#include <iostream>

using namespace std;

int main(){
        int ARRAY[100];
        int PALIN[100];
        int TEMP, LEN, COUNT = 0, Y_FLAG = 0;
        while(1){
                cin>>TEMP;
                if(TEMP == 0) break;
                LEN = TEMP;
                while(LEN != 0){
                        LEN = LEN/10;
                        COUNT++;
                }
                for(int i=0; i<COUNT; i++){
                        ARRAY[i] = TEMP%10;
                        PALIN[COUNT-i-1] =TEMP%10;
                        TEMP = TEMP/10;
                }
                for(int i=0; i<COUNT; i++){
                        if(PALIN[i] != ARRAY[i]){
                                cout<<"no"<<'\n';
                                Y_FLAG = 0;
                                break;
                        }
                        else{
                                Y_FLAG = 1;
                        }

                }
                if(Y_FLAG == 1){
                        cout<<"yes"<<'\n';
                        Y_FLAG = 0;
                }
                COUNT = 0;
        }
}
