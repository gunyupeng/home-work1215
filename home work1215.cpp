// home work1215.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>

#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main()
{
  /*  1 int 陣列
      int int_array[5] = { 1,2,3,4,5 };
      cout << "2值 => " << int_array[2] << '/n' ;
 */
    /*  2 char
   
    char cha_array[5] = { 'a','b','c','d','e' };
    cout << "4值 > " << cha_array[4] << endl;

    */

    /* 3 vector
    vector<int> vector = { 1,2,3,4,5 };
    vector.push_back(6);
    vector.push_back(7);
    vector.push_back(8);
    vector.push_back(9);
    vector.push_back(10);
    vector.push_back(11);
    vector.push_back(12);
    vector.push_back(13);
    vector.push_back(14);
    vector.push_back(15);
    vector.push_back(16);
    cout << "1 > " << vector[1] << '\n'
        << "9 > " << vector[9] << '\n'
        << "10 > " << vector[10] << '\n'
        << "15 > " << vector[15] << '\n';
     */


    list<int> list1 = { 1,2,3,4,5 };
    list1.push_front(6);
    list1.push_front(7);
    list1.push_front(8);
    list1.push_front(9);
    list1.push_front(10);
    cout << "頭部 " << *list1.begin() << '\n';
    cout << "尾部 " << list1.back() << '\n';


}

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
