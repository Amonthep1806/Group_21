// ใช้คำสั่ง #include เพื่อเรียกใช้ไลบรารีที่จำเป็น
#include <iostream>
#include "function.h" 
using namespace std;

// ฟังก์ชัน print_hello จะพิมพ์ข้อความ "Hello World" บนหน้าจอ
void print_hello() // ฟังก์ชันนี้จะถูกเรียกใช้ใน main
{
   cout << "Hello World" << endl;
}