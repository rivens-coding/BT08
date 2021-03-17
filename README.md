# BT08
A1.
-cả 2 địa chỉ giống nhau 
-giải thich : : vị trí của stack frame cho hàm f khi nó chạy trùng với vị trí của hàm g khi nó được gọi (đều bắt đầu trên đỉnh stack của hàm main), cả hai hàm f và g cùng có 1 tham số kiểu int, cùng kiểu trả về, x và y cùng là biến địa phương đầu tiên của hàm.
 Do đó khả năng lớn là trình biên dịch xếp x và y ở cùng một địa chỉ.

A2.
b)
#include <iostream>

using namespace std;

int main( )
{
   int a[4] = {1,2,3,4};
   for (int *cp = a; cp<a+4; cp++) {
      cout << (void*) cp << " : " << (*cp) << endl;
   }
   return 0;
}

c)
#include <iostream>

using namespace std;

int main( )
{
   double a[4] = {1.5,2.5,3.5,4.5};
   for (double *cp = a; cp<a+4; cp++) {
      cout << (void*) cp << " : " << (*cp) << endl;
   }
   return 0;
}

d)
-kết quả : chỉ hiện địa chỉ và giá trị của những số ở vị trí chẵn

#include <iostream>

using namespace std;

int main( )
{
   double a[4] = {1.5,2.5,3.5,4.5};
   for (double *cp = a; cp<a+4; cp+=2) {
      cout << (void*) cp << " : " << (*cp) << endl;
   }
   return 0;
}

A3.
#include <iostream>

using namespace std;

void swap_pointers(char** x, char** y)
{
    char* tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

int main()
{
   char a[] = "I should print second";
   char b[] = "I should print first";

   char *s1 = a;
   char *s2 = b;
   swap_pointers(&s1,&s2);
   cout << "s1 is " << s1 << endl;
   cout << "s2 is " << s2 << endl;
   return 0;
}
