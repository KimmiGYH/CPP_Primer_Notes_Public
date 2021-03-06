/* 练习3.24：请使用迭代器重做 3.3.3 节（第94页）的最后一个练习。P101 */

/* 练习3.20：读入一组整数并把它们存入一个 vector 对象，将每对相邻整数的和输出出来。
改写你的程序，这次要求先输出第 1 个和最后 1 个元素的和，接着输出第 2 个和倒数第 2 个元素的和，以此类推。*/

// 求相邻元素和的程序如下所示：
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vInt;
    int iVal;
    cout << "Please enter a group of numbers: " << endl;
    while (cin >> iVal)
        vInt.push_back(iVal);
    
    if (vInt.cbegin() == vInt.cend())
    {
        cout << "There are no elements." << endl;
        return -1;
    }
    cout << "Adjacent two numbers are: " << endl;
    // 利用 auto 推断 it 的类型
    for (auto it = vInt.cbegin(); it != vInt.cend() - 1; it++)
    {
        // 求相邻两项的和
        cout << *it + *(++it) << " ";
        // 每行输出 5 个数字
        if ((it - vInt.cbegin() + 1) % 10 == 0)
            cout << endl;
    }
    // 如果元素数是奇数，单独处理最后一个元素
    if (vInt.size() % 2 != 0)
        cout << *(vInt.end() - 1);
    return 0;
}

/*
Please enter a group of numbers:
5
548
45
987
87
74
15
^Z
Adjacent two numbers are:
553 1032 161 15
*/

// 求首尾元素和的程序如下所示：
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vInt;
    int iVal;
    cout << "Please enter a group of numbers: " << endl;
    while (cin >> iVal)
        vInt.push_back(iVal);
    if (vInt.cbegin() == vInt.cend())
    {
        cout << "There are no elements." << endl;
        return -1;
    }
    auto beg = vInt.begin();
    auto end = vInt.end();
    cout << "First and last elements are: " << *beg << " " << *(end-1) << endl;
    // 利用 auto 推断 it 的类型
    for  (auto it = beg; it != beg + (end - beg)/2; it++)
    {
        cout << (*it + *(beg + (end - it) - 1)) << " "; // ???
        // 每行输出 5 个数字
        if ((it - beg + 1) % 5 == 0)                    // ???
            cout << endl;   
    }
    // 如果元素数是奇数，单独处理中间那个元素
    if(vInt.size() % 2 != 0)
        cout << *(beg + (end - beg)/2);
    return 0;
}

/*
Please enter a group of numbers:
5
548
45
987
87
74
15
^Z
First and last elements are: 5 15
20 622 132 987
*/