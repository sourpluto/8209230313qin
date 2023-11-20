#include <iostream>
using namespace std;
int main() {
    char ch;
   cin >> ch;

    if (ch >= 'a' && ch <= 'z') {
        ch = ch - ('a' - 'A');
        cout << ch << endl;

    }
    else if (ch >= 'A' && ch <= 'Z') {
        ch++;
        cout << static_cast<int>(ch) << endl;
    }


        double x, y;
cout << "输入 x 值: ";
        cin >> x;
 if (x>0&&x<1) {
           y =3-2*x;
        }
        else if (x>=1&&x<5) {
            y =2/(4*x)+1;
        }
        else if (x>=5&&x<10) 
 {
     y = x * x;
 }
  cout << "y的值为: " <<y << endl;


    

    return 0;
}
