#include<iostream>
using namespace std ;

int linear_search(int a[],int num,int key){
for(int i=0;i<num;i++){
    if(a[i]==key){
        return i;
    }
    return -1;
}
return 0;
}
int main(){
int num,key,result;
cin>>num;
int a[num];
for(int i=0;i<num;i++){

    cin>>a[i];
}
cin>>key;
result=linear_search(a,num,key);
if(result==-1){
    cout<<"Not Present "<<num<<endl;
}
else{
    cout<<"Present "<<result+1<<endl;
}
}
