/* 练习6.2：请指出下列函数哪个有错误，为什么？
应该如何修改这些错误呢？*/

// (a) 是错误的，因为函数体返回的结果类型是 string，而函数的返回值类型是 int，二者不一致且不能自动转换。

string f() {
    string s;
    // ...
    return s;
}
// (b) 是错误的，因为函数缺少返回值类型。如果该函数确实不需要返回任何值，则程序应该修改为：

void f2(int i) { /* ...*/}

// (c) 是错误的，同一个函数如果含有多个形参，则这些形参的名字不能重复；
// 另外，函数体左侧的花括号丢失了。

int calc(int v1, int v2) { /* ...*/}

// (d)是错误的，因为函数体必须放在一堆花括号内。

double square(double x) {return x * x;}
