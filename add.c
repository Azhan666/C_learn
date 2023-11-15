//
// Created by 阿展要提高 on 2023/11/15.
//

// 这是给main.c引入的全局变量：
int g_val = 2023; // 全局变量：具有外部链接属性，可被链接至其它文件使用
// ”编译+链接 = 可执行程序“

static int g_val_1 = 2023; // 被static修饰后无法被引用，作用域仅仅限于add.c
// static修饰全局变量后，全局变量的外部链接属性就变味了内部链接属性，
// 其它源文件(.c)就不能再引用它了。

//int Add(int x, int y)  // 定义求和函数，在main.c中引用它
//{
//    return x + y;
//}

// 使用static修饰后函数无法被被引用：”作用域被限制在定义它的源文件中“

static int Add(int x, int y)  // 定义求和函数，在main.c中引用它
{
    return x + y;
}