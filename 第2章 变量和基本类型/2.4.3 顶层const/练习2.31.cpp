/* 练习2.31：假设已有上一个练习中所做的那些声明，则下面的哪些语句是合法的？请说明顶层 const 和底层 const 在每个例子中有何体现。 */

(1) r1 = v2;
// 合法
(2) p1 = p2; p2 = p1;
// 不合法，p1 普通指针，p2 指向常量的指针；
// 合法，不能将普通指针p1 赋给 指向常量的指针 p2
(3) p1 = p3; p2 = p3;
// 不合法：指向常量的常量指针 p3 不能赋给 普通指针 p1
// 合法，常量指针 p3 与 指向常量的指针 p2 在底层 const 上相同，所以合法

