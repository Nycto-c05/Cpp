#include <iostream>
using namespace std;

class Y; // forward declaration of Y since compiler will encouter a obj of Y below
// w/o knowing what Y is

class X
{
    friend void add(X, Y); // takes obj of class x and y
    int data;

public:
    void setvalue(int value)
    {
        data = value;
    }
};

class Y
{
    int num;

public:
    void setValue(int data)
    {
        num = data;
    }
    friend void add(X, Y);
};

void add(X o1, Y o2) // outside function using private var of classes, so make it a friend
// in both x & Y classes
{
    cout << "Adding datas of x and y gives : " << o1.data + o2.num << endl;
}

int main()
{
    X a1;
    a1.setvalue(3);

    Y b1;
    b1.setValue(5);

    add(a1, b1);

    return 0;
}












#include <iostream>
using namespace std;

class c2;//has to forward declare c2 since coiler will encouter it first

class c1
{
    int val1;
    friend void exchange(c1 &, c2 &);//itll pass address, or else only a copy of value will go, n real value will be the same as it is

public:
    void indata(int a)
    {
        val1 = a;
    }

    void display(void)
    {
        cout << val1 << endl;
    }
    friend void exchange(c1 &, c2 &);
};

class c2
{
    int val2;
friend void exchange(c1 &, c2 &);
public:
    void indata(int a)
    {
        val2 = a;
    }

    void display(void)
    {
        cout << val2 << endl;
    }

    
};

void exchange(c1 &x, c2 &y)
{
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main()
{
    c1 oc1;
    c2 oc2;

    oc1.indata(35);
    oc2.indata(34);

    exchange(oc1, oc2);

    // VAlue after swap
    oc1.display();  
    oc2.display();  

    return 0;
}