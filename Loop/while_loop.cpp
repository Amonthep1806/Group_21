#include <iostream>
using namespace std;

int main() {
 
    int i = 0; // เริ่มต้นตัวแปร i ที่ 0
    while (i < 5) { // วนลูปตราบใดที่ i น้อยกว่า 5
        cout << "Hi  => i = " << i << endl; // แสดงข้อความ "Hi" พร้อมกับค่าของ i
        i++; // เพิ่มค่า i ทีละ 1
    }

    return 0;
}