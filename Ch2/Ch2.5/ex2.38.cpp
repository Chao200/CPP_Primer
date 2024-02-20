/*
decltype 和 auto 区别
decltype 会保留顶层 const 和引用
而 auto 保留顶层 const 需要手动 const auto
而引用则需要 auto&

并且表达式的不同，decltype 也不同
1. 变量
2. 表达式
3. 变量加括号
4. 赋值
*/