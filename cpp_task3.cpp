#include<iostream>
using namespace std;
class addamount{
	public:
	int amount=50;
	addamount(){
        cout<<"Inside default constructor"<<endl;
		cout<<"\nmoney: "<<amount<<endl;
	}
	addamount(int add_money){
        cout<<"Inside parameterized constructor"<<endl;
		amount += add_money;
		cout<<"\nMoney: "<<amount<<endl;
	}
};

int main(){

    int additional_amount;
    addamount a1;
    cout<<"\n";

    cout<<"Enter the additional amount to add"<<endl;
    cin>>additional_amount;
    addamount a2(additional_amount);

	
	return 0;
}