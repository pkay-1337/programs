#include <iostream>
class data{
    protected:
        int len,width;
};
class area : public data{
    public:
    area(){
        cout << "FOR AREA-----------------" << endl;
    cout << "Enter Length : ";
    cin >> len;
    cout << "Enter width : ";
    cin >> width;
    }
    ~area(){
        cout << "Area = " << len*width << endl;
    }
};
class perimeter : public data{
    public:
    perimeter(){
        cout << "FOR PERIMETER-------------" << endl;
    cout << "Enter Length : ";
    cin >> len;
    cout << "Enter width : ";
    cin >> width;
    }
    ~perimeter(){
        cout << "Perimeter = " << 2*(len+width) << endl;
    }
};
int main (int argc, char *argv[])
{
    area a;
    perimeter p;
    return 0;
}
