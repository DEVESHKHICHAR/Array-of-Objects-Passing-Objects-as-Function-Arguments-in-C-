#include <iostream>
using namespace std;
class employee{
    int Id;
    int salary;
    public:
      void setdata(){
        cout<<"enter the Id of the employee: "<<endl;
        cin>>Id;
      }
      void getdata(){
        cout<<"the Id of employee is: "<<Id<<endl;
      }
};
int main() {
    employee arra1[6];
    for(int i=0;i<2;i++){
         arra1[i].setdata();
         arra1[i].getdata();
    }
    cout<<arra1;
    return 0;
}