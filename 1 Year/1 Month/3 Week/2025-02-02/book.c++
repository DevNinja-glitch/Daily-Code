#include<iostream>
using namespace std;
class BOOK{
    private:
    string title,author;
    double price;
    public:
    BOOK(string title,string author, double price){
         this->title=title;
         this->author=author;
         this->price=price;
    }
    void applyDiscount(float percentage){
        double discount=price*percentage;
        price=price-discount;
        cout<<"After Discount Price is "<<price;
    }
    bool comparePrice(BOOK other){
         if(other.price<=price){
            return true;
         }
         else{
            return false;
         }
    }
    void display(){
        cout<<"The Book name is "<<title
        <<endl<<"The Book author is "
        <<author<<endl<<"The Book price is "
        <<price<<endl;
    }
    ~BOOK(){
        cout<<"Book object destroyed";
    }
};
int main(){
    BOOK b1("The Luggage","GupShyi",23.4);
    b1.display();
    BOOK b2("The Luggage","GupShyi",23.4);
    b2.display();
    b2.applyDiscount(5.6);
    b2.display();
    b2.comparePrice(b1);
    return 0;
}