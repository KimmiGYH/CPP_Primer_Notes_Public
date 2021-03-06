/*练习2.27 下面的哪些初始化是合法的？请说明原因 (P64) */

(a) int i = -1, &r = 0;
// 是非法的，非常量引用 r 不能引用字面常量 0

(b) int *const p2 = &i2;
// 是合法的，p2 是一个常量指针，p2 的值永不改变，即 p2 永远指向变量 i2

(c) const int i = -1, &r = 0;
// 是合法的，i 是一个常量， r 是一个常量引用，此时 r 可以绑定到字面值常量 0

(d) const int *const p3 = &i2;
// 是合法的，p3 是一个常量指针，p3 的值永不改变，即 p3 永远指向变量 i2

(e) const int *p1 = &i2;
// 是合法的，p1 指向一个常量，即我们不能通过 p1 改变所指对象的值

(f) const int &const r2;
// 是非法的，引用本身不是对象，因此不能让引用恒定不变

(g) const int i2 = i, &r = i;
// 是合法的，i2 是一个常量，r 是一个常量引用

/* 总结：
- 非常量引用 不能引用字面常量，常量引用 可以绑定到字面值常量。看(a)和(c)
- 引用不是对象，因此不能让引用恒定不变。看(f)
*/