#include<iostream> // เรียกใช้ library สำหรับการใช้งาน input/output
using namespace std; // ใช้ namespace std เพื่อไม่ต้องเขียน std:: ทุกครั้ง

int main() { // จุดเริ่มต้นของโปรแกรม
    cout << "If and If-else Example" << endl; // แสดงข้อความบนหน้าจอ  
    int A = 0; // ประกาศตัวแปร A และกำหนดค่าเริ่มต้นเป็น 0
    // ขอให้ผู้ใช้ป้อนค่าตัวแปร A
    cout << "Please enter a number for A: " << endl; // แสดงข้อความขอให้ผู้ใช้ป้อนค่า
    cin >> A; // รับค่าจากผู้ใช้และเก็บไว้ในตัวแปร A

    if (A == 8) { // ตรวจสอบว่าค่า A เท่ากับ 8 หรือไม่
        cout << "A is 8" << endl; // ถ้า A เท่ากับ 8 จะแสดงข้อความนี้
    } else if (A > 8) { // ตรวจสอบว่าค่า A มากกว่า 8 หรือไม่
        cout << "A is greater than 8" << endl; // ถ้า A มากกว่า 8 จะแสดงข้อความนี้
    } else { // ถ้า A ไม่เท่ากับ 8 และไม่มากกว่า 8
        cout << "A is less than 8" << endl;
    }

    return 0; // ส่งค่ากลับ 0 เพื่อบอกว่าโปรแกรมทำงานสำเร็จ
}