#include<iostream>
using namespace std;

int linear_search(int a[],int n,int key){

 for(int i=0;i<n;i++)
    if(a[i]==key)
    return i;

return -1;
}

int main()
{

int test_case,n,key,result;
cin>>test_case;
int a[1000];
while(test_case--){

cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
cin>>key;
 result =linear_search(a,n,key);
if(result==-1){
    cout<<"Not Present "<<n<<endl;
}
else
cout<<"Present "<<result+1<<endl;

}
}
