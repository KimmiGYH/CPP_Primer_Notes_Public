/* 练习 3.37：
下面的程序是何含义，程序的输出结果是什么？
*/

const char ca[] = {'h', 'e', 'l', 'l', 'o'};
const char *cp = ca;
while (*cp) {
    cout << *cp << endl;
    ++cp;
}

/* 【出题思路】
考察 C风格字符串和字符数组的关系，尤其是串尾是否含有空字符的问题。
C风格字符串与标准库string对象既有联系又有区别。

【解答】
第一行：声明了一个包含 5 个字符的字符数组，因为我们无须修改数组的内容，所以将其定义为常量。

第二行：定义了一个指向字符常量的指针，该指针可以指向不同的字符常量，但是不允许通过该指针修改所指常量的值。

while 循环的条件是 *cp，只要指针 cp 所指的字符不是空字符 '\0'，循环就重复执行，
循环的任务有两项：首先输出指针当前所指的字符，然后将指针向后移动一位。

该程序的愿意是：输出 ca 中存储的 5 个字符，每个字符占一行，但实际的执行效果无法符合预期。
因为以列表初始化方式赋值的 C风格字符串与以字符串字面值赋值的有所区别，
后者会在字符串最后额外增加一个空字符以示字符串的结束，而前者不会这样做。

因此在该程序中，ca 的 5 个字符全部输出后，并没有遇到预期的空字符，也就是说，while 循环的条件仍将满足，无法跳出。
程序继续在内存中 ca 的存储位置之后挨个寻找空字符，直到找到为止。
在这个过程中，额外经历的内容也将被输出出来，从而产生错误。
*/

/*【修改】
要想实现程序的原意，应该修改为以下两种形式： */

// 一、以列表初始化方式赋值的 C风格字符串
const char ca[] = {'h', 'e', 'l', 'l', 'o', '\0'};
const char *cp = ca;
while (*cp) {
    cout << *cp << endl;
    ++cp;
}

// 二、以字符串字面值赋值的形式
const char ca[] = "hello";
const char *cp = ca;
while (*cp) {
    cout << *cp <<end;
    ++cp;
}
