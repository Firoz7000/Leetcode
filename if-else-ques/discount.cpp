#include<iostream>
using namespace std;
int main (){
    int quantity;
    double price;
    cin >> quantity >> price;

   double total = quantity * price;

   if (quantity > 100) {
    total = total - (total * 0.10);   // or equivalently: total * 0.90
    }

    cout << "Total expense: " << total;
}
