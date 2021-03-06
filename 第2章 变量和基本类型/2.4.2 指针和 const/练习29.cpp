/*练习 2.29：假设已有上一个联系中定义的那些变量，则下面的哪些语句是合法的？请说明原因。*/

(a) i = ic;
// 是合法的，常量 ic 的值赋给了非常量 i。

(b) p1 = p3;
// 是非法的，普通指针 p1 指向了一个常量，从语法上说，p1 的值可以随意改变，显然是不合理的。

(c) p1 = &ic;
// 是非法的，普通指针 p1 指向了一个常量，错误情况与上一条类似。

(d) p3 = &ic;
// 是非法的，p3 是一个常量指针，不能被赋值。

(e) p2 = p1;
// 是非法的，p2 是一个常量指针，不能被赋值。


(f) ic = *p3;
// 是非法的，*p3 是解引用符，ic 是常量，不能被赋值。

/*总结：
- 不能用普通指针指向一个常量（比如常量地址）。看(b)和(c)
- 常量指针不能被赋值，看(c)和(d)
*/