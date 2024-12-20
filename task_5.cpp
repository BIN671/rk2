// rk2_5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;

class BankAccount {
protected:
    int number;
    string name;
    int balance;

public:
    BankAccount(int num, string nam, int b) : number(num), name(nam), balance(b) {};

    void deposit(int sum) {
        balance = balance + sum;
        cout << balance << endl;
    }

    void withdraw(int sum) {
        balance = balance - sum;
        cout << balance << endl;
    }


};

class SavingAccount: public BankAccount {
private:
    float percent;

public:
    SavingAccount(int num, string nam, int b, int per) : BankAccount(num, nam, b), percent(per) {};

    void add() {
        balance = balance + (percent/100) * balance;
        cout << balance << endl;
    }



};






int main()
{
    BankAccount p1(1, "oleg", 100);
    p1.deposit(20);
    p1.withdraw(50);

    SavingAccount p2(2, "ivan", 100, 10);
    p2.add();
}

