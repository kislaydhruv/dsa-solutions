#include<bits/stdc++.h>
using namespace std;
 
class PaymentGateway{
    public:
    virtual ~PaymentGateway() = default;
    virtual void processPayment(double amount) = 0;



};
class CreditCardPayment : public PaymentGateway{
    public:
    void processPayment(double amount) override {
        cout<<"Processing Credit Card Payment : "<<amount<<endl;



    }

};
class UPIPayment : public PaymentGateway{
    public:

    void processPayment(double amount ) override{
        cout<<"Processing Upi payment : "<<amount<<endl;

    }
};
int main(){
    PaymentGateway* p = new CreditCardPayment ;
    p->processPayment(284.5);
    PaymentGateway* y = new UPIPayment;
    y->processPayment(27476.2);
    delete p;
    delete y;
    return 0 ;




}