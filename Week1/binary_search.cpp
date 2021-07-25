#include<iostream>
#include<algorithm>
using namespace std;
int binary(int a[],int num,int key){
int s=0;
int e=num-1;
while(s<=e){
        int mid=(s+e)/2;
    if(a[mid]==key){
        return mid;
    }
    else if(a[mid]>key){
        e=mid-1;
    }
    else {
        s=mid+1;
    }
}
return -1;
}
int main(){
int num,test_case;
int a[100],result;
int key;
cin>>test_case;

while(test_case--){
  cin>>num;
for(int i=0;i<num;i++){
    cin>>a[i];
}
cin>>key;
result=binary(a,num,key);

    if(result==-1){
    cout<<"Not Present "<<num<<endl;
}
else
cout<<"Present "<<result+1<<endl;

}

}
