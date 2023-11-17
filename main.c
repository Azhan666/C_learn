#include <stdio.h>

/*有人用温度计测量出用华氏法表示的温度(如64°F),
 * 今要求把它转换为以摄氏法表示的温度(如 17.8℃)。
 * ps：c=5/9(f-32)*/

//int main() {
//    float f,c; // 定义f、c为单精度浮点型变量
//    f=64.0;    // 指定f的值
//    c=(5.0/9)*(f-32); // 计算c
//    printf("f=%f\nc=%f\n",f,c); // 输出c
//    return 0;
//}

/*printf("华氏温度 = %f\n摄氏温度 = %f\n", f, c);这段代码中的%f是什么意思？
 * 原来啊。%f是printf的格式化说明符，用以指定printf输出的结果的格式：
 * %f表示以浮点数形式输出，默认保留6位小数点，还可以指定保留的小数点位数，如：
 * %0.2f是指保留两位小数，%0.6f 表示保留六位小数，等等。
 * 这使得 printf 函数非常灵活，可以根据需要格式化浮点数的输出。*/

// 优化建议：
//#include <stdio.h>
//
//int main() {
//    float f, c; // 定义f、c为单精度浮点型变量
//    f = 64.0;   // 指定f的值
//    c = (5.0 / 9) * (f - 32); // 使用摄氏温度公式计算c
//    printf("华氏温度 = %f\n摄氏温度 = %f\n", f, c); // 输出华氏温度和摄氏温度
//    return 0;
//}
//改进和优化的建议：
//
//添加注释：在程序中添加注释有助于理解代码的目的和功能。
//使用更具描述性的输出：在打印结果时，使用描述性的标签，以使输出更易于理解。
//使用常量而不是硬编码值：将温度值硬编码为64.0可能不是最佳做法。你可以考虑使用变量或
//从用户输入获取值来使程序更灵活。
//使用换行符：在输出中使用换行符 \n 可以使输出更清晰。
//以上是对你的程序的改进建议，但你的原始程序已经能够正确地将华氏温度转换为摄氏温度并打印出来。

// 下面对代码进行优化，达到与用户交互的效果：
// 挑战点：C语言中如何接受用户的输入？是scanf吗？
// 是的，你可以使用 scanf 函数来接受用户输入。
// scanf 是C语言标准库中的一个函数，用于从标准输入（通常是键盘）读取用户输入的数据。
// PS: printf、scanf、等库函数都是C语言提供的内置函数，不是我们自己写的，因此要使用他们，必须预先使用 #include <stdio.h>预声明，
// 否则无法使用（借别人的东西要告诉别人）。英文解释：include：包含、stdio：std：标准、i：输入、o：输出

//int main(){
//    float f, c; // 定义f，c变量为float单精度浮点型
//
//    // 使用scanf()来接受用户输入：
////    scanf("请输入您要转换的华氏温度值：");  这是错误示例，在py中的print函数是此用法，
////    但C语言中要先使用printf()来提示用户输入，然后使用scanf来扫描用户输入；
//
//    printf("请输入您要转换的华氏温度值："); // 使用printf()来提示用户输入
//
////    scanf("%f",f); 这是错误示例，不同于py，C语言中，scanf函数需要知道用户输入的
////    值存储到了哪个变量中，通过‘&’运算符可以获取变量的内存地址，从而使 scanf 函数能够
////    将用户输入的值存储到正确的地方。在这种情况下，&f 表示获取变量 f 的内存地址，以便
////    scanf 可以将用户输入的浮点数值存储到 f 变量所指向的内存位置。
////
////    简而言之，& 是用于获取变量的地址的符号，通常用于 scanf 或其他需要将用户输入的值存
////    储到变量中的函数中。
//
//    scanf("%f",&f);
//    c = (5.0/9)*(f-32); // 计算c
//    printf("华氏温度为：%0.2f\n摄氏温度为：%0.3f\n",f,c);
//
//    return 0;
//
//}

/*结果符合预期：
请输入您要转换的华氏温度值：64.0
华氏温度为：64.00
摄氏温度为：17.778
*/

/*标准主函数的写法：*/

//int main(){ int整型和返回值return 0 是对应关系：0是整型。main函数是程序的入口，他在哪程序就从它的下一行开始执行。
//
//    return 0;
//}

//float main(){
//    return 0.1;
//}

//int main(void){ // void:明确告知主函数没有参数
//
//    return 0;
//}

/****C语言中的数据类型：****/

//int main(){
//
//    printf("%zu\n", sizeof(int)); // "%zu":输出sizeof()的返回值；
//
//    // sizeof(数据类型)：数据类型所占空间
//    printf("%zu\n", sizeof(char)); // 字符型
//    printf("%zu\n", sizeof(short)); // 短整型
//    printf("%zu\n", sizeof(long)); // 长整型
//    printf("%zu\n", sizeof(long long )); // 更长整型
//    printf("%zu\n", sizeof(float));
//    printf("%zu\n", sizeof(double));
//
//    return 0;
//}

// 结果如下：
//F:\C_and_C++\Coding\C语言程序设计第五版3.1\cmake-build-debug\untitled.exe
//4 4个字节，4✖8bit＝32bit
//1
//2
//8
//8
//4
//8
//
//进程已结束,退出代码0

/****数据类型的作用：****/

//⭐向内存申请合适的空间：（创建变量的本质）
//int main(){
//   int age = 20; //向内存申请int大小（4个字节）的空间：
//   double price = 66.6;
//
//    printf("小明今年%d岁\n",age);
//    printf("这本书卖%0.1f元\n",price); // %0.1f:保留一位小数
//
//    return 0;
//}
// 小明今年20岁
// 这本书卖66.6元

/****变量和常量：****/

//⭐当局部变量和全局变量相同时，优先使用哪一个？
//int a = 10; // 全局变量
//
//int main(){
//    int a = 100;
//    printf("我有%d元\n",a);
//
//    return 0;
//}
//我有100元
// -------- 当局部变量和全局变量相同时，优先使用局部变量

//变量和常量的使用：
//计算两数之和
//int main(){
//    int a,b,sum; // 定义两整型数a，b  ps:创建变量时最好赋初值
//
//    printf("请输入a,b的值：");
//    scanf("%d %d",&a,&b);   // scanf可以接收多个参数，但中间只能使用空格分隔
////    scanf("%d",&a);           // gpt说可以接受多个参数，但我未成功，实际上就是，下面继续尝试
//                            // 原来scanf函数包含两个参数时，输入的两个值也只能用空格分隔！
////    printf("请输入b的值：");
////    scanf("%d",&b);
//
//    sum = a+b;
//
//    printf("两数之和为：%d\n",sum);
//
//    return 0;
//}
//两个scanf：
//请输入a的值：1
//请输入b的值：2
//两数之和为：3

//一个scanf：
//请输入a,b的值：1 2
//两数之和为：3

///*总算把scanf玩明白了！*/

// 看了鹏哥C语言，下面尝试一下：
//int main()
//{
//    int num1 = 0; // 初始化变量
//    int num2 = 0;
//    // 写代码先写逻辑，再写代码实现：
//    printf("请输入要求和的两个整数：");
//    // 接收用户输入：scanf()
//    scanf("%d %d",&num1,&num2);
//    // 求和
//    // sum = num1+num2;  // 注意sum这个变量也需要创建：int sum
//    int sum = num1+num2;
//    // 输出
//    printf("两整数之和为%d\n",sum);
//
//    return 0;
//}

////文章1

/**变量的作用域和生命周期：**/

//int a = 10; // 全局变量的作用域：整个工程，可用extern函数引用：
//extern int a; // 声明一个符号
//
//int main()
//{
//    int a = 20;
//    printf("%d",a);
//    return 0;
//}

// 生命周期-即作用域内：
//int main()
//{
//    int a = 10;
//    printf("这是a的值%d",a);
//    {
//        int b = 20;
//        printf("这是b的值",b);
//    } // 变量b的生命周期就是在这个括号内（作用域内）
//} // 主函数的生命周期结束就意味着程序执行结束。

/**常量和变量：**/
// const 修饰常变量：“变量不允许被修改”:有着常量的属性：即“常变量”：
// “const修饰常变量”，ps：但其本质上还是变量，下面将使用数组验证；
//int main()
//{
//    const int a = 20;
////    a = 10; // 报错：不能赋值给const限定类型const int的变量'a'
//    printf("%d",a);
//
//    return 0;
//}

//ps：const修饰的变量本质上还是变量，仅仅是不允许再被修改了，
// 下面将使用数组验证：（利用数组的参数必须是常量的特性）：
// 创建一个变量n，再使用const修饰它，然后将其传入数组arr[],
// 若可用，则说明n此时为常量，反之为变量：

//int main()
//{
//    const int n = 10;
//    int arr[n] = {0}; // 报错：可变长度数组作为扩展折叠为常量数组
//                      // 说明n仍为变量
//    return 0;
//}

/**使用define定义标识符常量(常量：也是不可修改的)：**/
//#define MAX 100
//#define STR "abcd"
//
//int main()
//{
//    printf("这是使用define定义的标识符常量，值为：%d\n",MAX);
//    printf("作为字符串输出：%s\n",STR);
//    // 也可以将定义的符号常量赋值给其它变量使用：
//    int a = MAX;
//    printf("把MAX传给了a:%d\n",a);
//    return 0;
//}
////这是使用define定义的标识符常量，值为：100
////作为字符串输出：abcd
////把MAX传给了a:100

/**枚举常量enum：（枚举enum：一一列举出来）**/
// 使用关键字enum创建枚举常量：七色彩虹
//enum Color // 枚举常量color：常量名一般大写
//        {
//    RED, ORANGE, YELLOW, GREEN, BLUE, PURPLE // 枚举常量的可能取值
//        };
//int main()
//{
//    int num = 7; // 类似于这样创建变量，枚举常量也可以创建：
//    enum Color c = RED; // 创建枚举常量c，并赋值为RED
////    ps：枚举类型也是可以输出的，值默认从0开始
//
//    return 0;
//}

/**字符串：**/
// 字符类型：char: a
// 字符串：”用双引号括起来的字符类型“: char ch = "a"

//int main()
//{
////    char arr_1[10] = "qwer"; // 创建一个字符串数组，大小为10
////    char arr_2[] = "qwer"; // 创建一个字符串数组，参数不写，则大小自动分配
//// ps:字符串末尾默认以“\0”结尾，不显示，（\0 是字符串的结束标志）
//// 下面分别传参测试：
//    char arr_1[] = "abcdefg"; // 7个字符，（有\0)
////    char arr_2[] = {'a','b','c','d','e','f'};
//                             // 6个字符，（无\0）
//// 手动添加\0:
//    char arr_2[] = {'a','b','c','d','e','f','\0'};
//
//    printf("%s\n",arr_1);
//    printf("%s\n",arr_2);
//
//    return 0;
//}
// 看一下输出结果：
// abcdef
// abcdefabcdef
/**为什么会这样呢？**/
// 因为字符串默认以\0结束，arr1的f后面有\0,所以到f就结束了，不再往内存空间中寻找下一个字符；
// 而arr2中是单个字符，没有\0，而遇到\0时才会认为字符串结束，所以只能继续在内存空间中往下寻找，
// 直到遇见\0，由此，结合打印结果可知，arr_1在内存空间中位于arr2的后面:
// 在arr1后面加一个g，再打印一下：
//abcdefg
//abcdefabcdefg 是的，结合打印结果可知，arr_1在内存空间中位于arr2的后面。
// 也可以手动加一个\0：正常结束：
//abcdefg
//abcdef

// 使用库函数strlen()计算字符串长度：头文件：# include <string.h>
//#include <string.h>
//
//int main()
//{
//    int len = strlen("abc"); // ”abc\0“
//    printf("%d\n",len);
//
//    return 0;
//}
//// 3

// 使用转义字符进行进制转换：
# include <stdio.h>

//int main()
//{
//    printf("%c\n",'\130'); // 130对应的ASCII码值：X
//    printf("%d\n",'a'); // 97
//    printf("%d\n",'A'); // 65
//    printf("%d\n",'\x63'); // 99 :16进制的x63的ASCII码值为99
//    printf("%c\n",'\x63'); // c 的ASCII码值为99
//    printf("%c\n",'\x64'); // d
//    return 0;
//}

/**选择语句和循环语句：**/

# include <stdio.h>

// 选择结构:
//int main()
//{
//    int days = 0; // 变量必须赋值初始化
//    printf("请输入骨折天数：");
//    scanf("%d",&days); // 必须使用&来告知地址
//    if (days >=90) :if()语句的条件放括号里面，下面语句用{}括起来
//    {
//        printf("可以脱拐了！");
//    }
//    else
//    {
//        printf("加油康复，胜利就在眼前！");
//    }
//
//    return 0;
//}

// 循环结构的：
//int main()
//{
//    int days = 0; // 初始化变量
//    while (days <= 90) // while(循环条件)
//    {                  // {循环体}
//        printf("骨折天数：%d\n",days);
//        days++; // 自增
//    }
//    printf("可以脱拐啦！"); // 跳出循环后执行
//
//    return 0;
//}
// 运行结果：
//骨折天数：0
//骨折天数：1
//骨折天数：2
//骨折天数：3
//......
//骨折天数：88
//骨折天数：89
//骨折天数：90
//可以脱拐啦！
//进程已结束,退出代码0

/**函数：实现一定的功能**/
// 求两个整数之和-不使用函数：
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d",&a,&b);
//    int sum = a+b;
//    printf("%d\n",sum);
//
//    return 0;
//}
// 使用函数：
//int Add(int x, int y) // 创建函数，参数为整型变量
//{
//    int z = 0; // 初始化z        // {函数体}：实现变量相加功能
//    z = x + y;
//    return z;         // ⭐返回值z为int型，函数类型要定义为int
//
//}
// 此函数也可以简化为：
//int Add_1(int x, int y) // 创建函数，参数为整型变量
//{
//    return (x+y);         // ⭐返回值z为int型，函数类型要定义为int
//}


// 结合数学概念，此函数是个“相加机器”
// 编程中函数存在的意义：函数封装好之后可以直接调用，
// 避免重复写代码来实现固定功能，当函数的代码体量很大时，可以提高效率
// ⭐使用不同函数实现不同功能，有利于程序模块化，方便调试。

//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d",&a,&b);
////    int sum = a+b;
//    int sum = Add(a,b); // ⭐使用定义好的函数:将x+y=z的值放入sum
//
//    // 遇到求和问题时，直接调用此函数即可：
//    int n1 = 2000;
//    int n2 = 1000;
//    int sum2 = Add(n1,n2);
//    printf("%d\n", sum2);
//
//    printf("%d\n",sum);
//
//    return 0;
//}

/**数组：存放相同类型的有序序列**/
//int main()
//{
//int arr[10] = {10,11,12,13,14,15,16,17};
// 创建其它类型的数组：
//double d[5] = {3.0,1.2,0.6};
//char ch[20] = {'a','b','c'};
//// C语言还规定了数组元组的下标：0，1，2，3，4,n-1
//// 通过下标访问元素：arr[2]:访问元素12、arr[8]:访问第九个元素。
//
////    printf("%d\n",arr[6]);
//// 16
//
//// 遍历数组元素：
//// 从下标0开始访问
//int i = 0;
//    // while循环遍历
//    while (i<10)
//    {
//        printf("数组的第%d个元素为%d\n",i+1,i);
//        // 访问完一个元素i自增1
//        i = i + 1;
//    }
//    return 0;
//}
//数组的第1个元素为0
//数组的第2个元素为1
//数组的第3个元素为2
//数组的第4个元素为3
//数组的第5个元素为4
//...
//数组的第10个元素为9

/**C语言中的操作符：**/
// ①算术操作符：+、-、*、/、取模（余数）%。
//int main()
//{
//    int a = 7;
//    int b = 3;
//    printf("%d\n",a/b); // 7/3:商2余1，结果为2
//    printf("%d\n",a%b); // 7%3:商2余1，结果为1
//    ps:当除号两端都为整数时，执行的是整数除法，只要有一个浮点数，执行的是浮点数除法
//       取模只能是整数。
//    return 0;
//}
// 2
// 1

// ②移位操作符：二进制右移一位：>>、二进制右移一位：<<
// 规则：左移：左边舍弃，右边补零；
// 右移：右移运算分两种：
//1. 逻辑移位：左边用0填充，右边丢弃
//2. ==算术移位==：左边用原该值的符号位填充，右边丢弃
//   大多数编译器使用的是==算术移位==
// 参考链接：https://zhuanlan.zhihu.com/p/608346456

// ③位操作符：与&、异或^、或|
// ④赋值操作符：+=、-=、*=、/=、&=、^=、|=、右移等>>=、<<=

/*单目操作符：*/
//双目操作符：需要有两个操作数，如：a+b、a-b、a*b；
//单目操作符：只有一个操作数，如：!逻辑反操作、-负值、+正值、&取地址、
//          sizeof操作数的类型长度（单位为字节）、~二进制按位取反、--前置、
//          后置--、++前置、后置++、*间接访问操作符号、(类型)强制类型转换。

// PS：C语言中，0表示假，非0表示真：
//int main()
//{
//    int flag = 0;
//    if (!flag) // 对假取反，表示真
//    {
//        printf("这是真的！");
//    }
//
//    return 0;
//}
//这是真的！
//int main()
//{
//    int arr[] = {0, 1, 1, 1, 3, 4, 5};
//    printf("%d\n", sizeof(arr));
//
//    return 0;
//}
// 28
/*如果你的目标是计算整个数组占用的字节数，那么这段代码是没有问题的。
User
那为什么编译器会提示我将%d改为%lu
ChatGPT
如果你的编译器提示你将 %d 改为 %lu，那是因为 %d 用于打印有符号整数，
 而 sizeof 返回的是无符号整数类型 size_t。在一些平台上，size_t 的大小可能
 与 int 不同，因此编译器为了避免潜在的错误或警告，建议你使用 %lu
 来匹配 size_t 的类型。

因此，你可以修改代码如下：*/
//#include <stdio.h>
//
//int main() {
//    int arr[] = {0, 1, 1, 1, 3, 4, 5};
//    printf("%lu\n", sizeof(arr));
//
//    return 0;
//}
/*`%lu` 是用来输出无符号长整型（unsigned long）的数据。
 * 在 `printf` 函数中，格式说明符用于指定输出的数据类型。下面是一些常见的格式说明符：

- `%d`: 用于有符号整数（int）
- `%u`: 用于无符号整数（unsigned int）
- `%ld`: 用于有符号长整数（long）
- `%lu`: 用于无符号长整数（unsigned long）

在你的代码中，`sizeof(arr)` 返回的是 `size_t` 类型，它是无符号长整数。
 因此，正确的格式说明符是 `%lu`。*/

/*前置++、后置++、--：*/
//int main()
//{
//    int a = 10;
//    int b = a++; // 先使用a,后++,即：int b = a,a=a+1
//    int c = ++a; // 先++，后使用，即：int a=a+1, c = a
//
//    printf("%d,%d,%d",a,b,c);
//
//    return 0;
//}
// 结果：
// 12,10,12
// 程序执行过程：
// a初始值为10，执行b=a++后，b=10、a = a+1;
// 此时a=11,b=10
// 执行c=++a后，即执行：a+1,c=11+1;
// 此时a=12，b=10,c=12
// 输出abc；
// return 0;程序执行完毕。

// 文章3
// 强制类型转换：
//int main(){
//
//    int a = (int)3.14; // 将3.14强制转换为整型
//    printf("%d",a);
//
//    return 0;
//}
//// 结果：
//// 3

// 赋值运算符和相等的区别：
//int main(){
//
//    int a = 10;
//    if (a = 3)
//    {
//        printf("这是赋值\n");
//    }
//    if (a == 3)
//    {
//        printf("这是相等\n");
//    }
//    return 0;
//}

// 逻辑与与逻辑或：&&:“并且”、||：“或者”

//int main(){
//
//    int a = 0,b = 1; // 0为假，非0为真
//    if(a && b)
//    {
//        printf("条件不成立，必须都为真！\n");
//    }
//    if(a || b)
//    {
//        printf("条件成立，有真就行！");
//    }
//
//    return 0;
//}
////条件成立，有真就行！

// 三目操作符：有三个操作数（类似于python中的三目运算符）

//int main(){
//
//    int a = 10,b = 20;
//    int r = a > b ? a : b; // 如果a大于b：是，则为a,否，则为b
//
//    printf("%d\n",r); // a>b为否，应该输出b
//
//    return 0;
//}
//// 结果符合预期：
//// 20

// 常见关键字：
//auto: 自动创建变量、自动销毁变量,默认省略

//int main(){
//
//    auto int a = 10,b = 20; // 自动创建变量ab(auto默认省略)
//    return 0;
//} // 销毁变量ab

// break: 跳出循环，和py一样，常和for、while、do while搭配

// case：和switch搭配，switch语句是一种常用的流程控制语句。
// 它的作用是根据一个表达式的值，判断其是否等于一系列常量值中的任意一个，
// 并执行相应的代码块，需要注意的是，在每个case关键字的语句序列中必须包含break语句。
// break语句用于跳出switch语句，使程序执行流程跳转到switch语句后面的下一条语句。
// 如果不加break语句，程序将继续执行下一个case语句，直到遇到break语句
// 或switch语句结束为止。
// 参考链接：https://baijiahao.baidu.com/s?id=1760498396078786457&wfr=spider&for=pc

//当你学习C语言的switch语句时，你实际上是在学习一种用于多分支条件控制的结构。
//switch语句允许你基于一个表达式的值来选择执行不同的代码块。
//以下是switch语句的基本结构：
//switch (expression) {
//    case constant1:
//        // 代码块1
//        break;
//    case constant2:
//        // 代码块2
//        break;
//       // 更多的case语句
//    default:
//    // 如果expression的值不匹配任何一个case时执行的代码
//}

//这里是一些关于switch语句的重要点：
//表达式（expression）：
// switch语句中的表达式是一个整数表达式（可以是变量或常量）。
// switch将会比较这个表达式的值与case语句中的常量值。
//case语句：
// 每个case标签后面跟着一个常量值。如果表达式的值等于某个case的常量值，程序将会执行对应的代码块。
//
//break语句：
// 在每个case的代码块末尾都有一个break语句，它用于终止switch语句。
// 如果忘记写break，程序将会继续执行下一个case中的代码，
// 直到遇到break或switch语句结束。
//
//default语句： default标签是可选的，用于处理switch表达式的值与
// 任何case都不匹配的情况。它类似于else语句中的内容。
//
//下面是一个简单的例子，演示了switch语句的基本用法：
//#include <stdio.h>

//int main() {
//    int choice; // 创建一个接收用户输入的变量choice（选则）
//
//    printf("Enter a number (1-3): ");
//    scanf("%d", &choice);
//
//    switch (choice) { // 跟据输入使用switch case语句执行不同的代码块
//        case 1:
//            printf("You chose One.\n");
//            break;
//        case 2:
//            printf("You chose Two.\n");
//            break;
//        case 3:
//            printf("You chose Three.\n");
//            break;
//        default:
//            printf("Invalid choice.\n"); // 输入的内容非1-3
//    }
//
//    return 0;
//}
// 这个例子中，用户输入一个数字，程序根据输入的数字输出相应的信息。
// 如果输入的数字不是1、2或3，则输出"无效的选则"。

// 下面自己尝试：

//int main(){
//
//    int choice; // 创建一个变量接受用户输入，申请内存存放输入
//
//    // 使用printf提示用户进行输入
//    printf("请输入你的年龄：(1-100)");
//
//    // 使用scanf()扫描，告知内存地址
//    scanf("%d",&choice);
//
//    // 使用switch case表达式输出不同信息
//    switch (choice) { // choice接收输入，表达式就是choice
//        case 1: // 输入的内容就是case的表达式
//            printf("太棒啦，1岁就会玩电脑啦！");
//            break; // 使用break关键字退出代码块
//
//        case 100:
//            printf("太棒啦，100岁了还能玩电脑！");
//            break;
//
//        case 23:
//            printf("真垃圾，23岁了编程技术还这么菜！");
//            break;
//
//        default: // 使用default输出默认信息
//            printf("不行啊，多大了还不会编程！");
//    }
//
//    return 0;
//}
// 测试用例：结果符合预期
//23
//真垃圾，23岁了编程技术还这么菜！

// 关键字：typedef:类型定义:声明一个别名的类型：“给太长的类型名取别名，
// 类似于py的as”

//typedef unsigned int uint; // ②使用typedef给unsigned int取个别名叫uint吧！
//
//int main(){
//
//    unsigned int num = 0; // ①不使用typedef，unsigned int这个类型太长啦
//    uint num2 = 1; // 这样就可以直接使用uint来定义 unsigned int类型啦！
//
//    return 0;
//}

// 在数据将结构中常常见到typedef来定义结构体类型：

// ①数据结构中定义一个链表的节点：
//struct Node // 1.创建结构体类型的变量
//typedef struct Node // ②使用类型定义给struct Node取别名叫Node
//{
//    int data;
//    struct Node* next;
//}Node; // 使用类型定义给struct Node取别名叫Node
//
//
//int main(){
//
//    struct Node n; // 2.使用结构体类型变量创建n
//    Node n2; // 3.取别名为Node后，直接使用别名即可创建结构体变量n2
//
//    return 0;
//}

// 关键字static：修饰局部变量、全局变量、函数

//int count = 0; // 增加一个计数器来统计函数被调用的次数
//void test() // 定义一个无返回值的函数test()
//{
//    static int a = 1; // ⭐② 使用关键字static修饰后，局部变量的作用域变为
//                      // 整个源文件，除了作用域也不会被销毁，
//                     // 此时a的值可以被保留而随着循环调用自增至11
//                     // 参考链接：https://baijiahao.baidu.com/s?id=1761862740466600473&wfr=spider&for=pc
//                    // ps：static本质上改变了变量的存储位置，将变量由栈区挪到了静态区，
//                    // 所以变量不会被销毁，从而影响了其作用域
//    a++;
//    count++; // 累加器统计test被调用次数
//    printf("a的值为：%d\n",a);
//    printf("test函数被调用的第：%d次\n",count);
//
//}
//
//int main(){
//
//    int i = 0;
//    while (i < 10)
//    {
//        test(); // 调用函数test()
//        i++;
//    }
//
//    return 0;
//}
// 结果：结合debug可知，由于主函数中，循环体每执行一次就调用一次test函数，
//      调用完之后⭐a就被销毁了（局部变量出了作用域），下一次调用时a是重新创建的，
//      因此a每次只能自增一次，所以每次a的值为2，
//      共循环十次，调用十次test，输出十次2
//a的值为：2
//test函数被调用的第：1次
//a的值为：2
//... ...
//test函数被调用的第：9次
//a的值为：2
//test函数被调用的第：10次

// 使用static修饰后：
/*a的值为：2
test函数被调用的第：1次
a的值为：3
test函数被调用的第：2次
a的值为：4
... ...
a的值为：11
test函数被调用的第：10次*/

// 使用关键字void创建无返回值的函数：
//void test(){
//    printf("no return\n");
//}

// static关键字修饰全局变量：”全局变量的作用域被限制在定义它们的文件中“
// ”全局变量被static修饰后无法被其它文件引用“
// 使用extern声明（引入）工程内的其它变量：
//extern int g_val;
//
//int main(){
//
//    printf("%d\n",g_val);
////    printf("%d\n",g_val_2); // 报错：变量未定义
//
//    return 0;
//}
//// 2023

// static修饰函数：(函数也具有外部链接属性)

//int Add(int x, int y)  // 定义求和函数，把求和函数放到add.c中引用过来
//{
//    return x + y;
//}

//extern int Add(int x, int y); // 引用Add（参数也要写）
//
//int main()
//{
//    int a = 1, b = 2;
//    int c = Add(a,b);
//
//    printf("%d\n", c);
//
//    return 0;
//}

// register寄存器关键字："建议把某变量放入寄存器中，这样取数据更快"
//int main()
//{
//    register int num =3; // 建议把3放入寄存器中存储
////    只是建议，放到哪里最终由编译器决定。
//
//    return 0;
//}

// 文章4

//#define 定义标识符常量·：
////#define NUM 100 // 符号常量NUM代表100，在编译阶段NUM会被替换为100
//
////#define 定义宏：（宏是有参数的）：
////在C语言中，`#define`是用来定义宏的预处理指令。宏是一种代码替换的技术，
//// 通过定义宏，你可以在程序中使用简单的标识符来表示一组代码，这组代码会在
//// 预处理阶段被替换成相应的内容。`#define`的基本语法如下：
//
////#define 标识符 替换文本
//
////例如，下面是一个简单的宏定义示例：
////#define PI 3.14159
////在这个例子中，`PI`是一个标识符，它被定义为`3.14159`。
//// 在程序中，每次出现`PI`时，都会被替换为`3.14159`。
//
////宏的作用有以下几个方面：
//1. **符号常量定义：** 通过宏定义可以创建符号常量，这样可以在程序中使用
// 有意义的标识符来代替一些常量值，使代码更易读，也更容易维护。

//#define MAX_SIZE 100
//这里，`MAX_SIZE`就代表了一个常量值100，方便在程序中使用。

//2. **代码替换：** 宏定义还可以用于替换一段代码。例如，你可以定义
// 一个简单的宏来交换两个变量的值：

//#define SWAP(x, y) { int temp = x; x = y; y = temp; }
//在程序中使用这个宏可以实现变量交换的功能。
//int a = 5, b = 10;
//SWAP(a, b);
//上述代码在预处理阶段会被替换为：
//{ int temp = a; a = b; b = temp; }

//3. **条件编译：** 宏定义也经常用于条件编译，通过在编译时根据条件
// 选择性地包含或排除某些代码块，可以实现不同平台或配置下的代码控制。

//#define DEBUG
//在调试阶段使用上述宏定义，然后可以通过条件编译选择是否包含调试代码。
//这只是宏的一些基础用法，宏在C语言中有更广泛的应用，但也需要注意一些潜
// 在的问题，比如宏的副作用和作用域等。

// 自己尝试使用宏定义：
//#define ADD(x,y) ((x)+(y)) // 宏定义ADD(x,y),宏体为(x)+(y)
//
//int main()
//{
//    int x = 0, y = 0;
//    printf("请输入要求和的数：\n");
//    scanf("%d %d",&x,&y);
//    int z = ADD(x,y); // 定义变量z来接收结果，使用宏定义替换(x)+(y)
//    printf("求和结果为:%d",z);
//
//    return 0;
//}
// 结果符合预期：
//请输入要求和的数：
//1 2
//求和结果为:3

// 指针：“内存单元中内存的编号，即地址，存放指针（地址）的变量：指针变量”
//int main()
//{
//    int a = 10; // 向内存申请4个字节，存储10
//    printf("这是变量a:%d",a);
//    scanf("%d",&a); // &a:取地址，按照地址在内存中找到a
//    int* p = &a; // 将a的地址指向指针变量p，p就是指针变量
//    // * 表示p是指针变量，int 说明指针p指向的对象是整型
//   //    “指针变量就是用来存放地址的”
//   // *：“解引用操作符，*p就是通过p中存放的地址找到所指向的对象，因此，
//   // *p就是p指向的对象。”
//  // 指针变量的大小取决于地址的大小
//
//    return 0;
//}

// 结构体：
//结构体是一种用户自定义的数据类型，用于“将不同类型的数据组合在一起，
//形成一个新的数据类型”。以下是关于C语言结构体的一些基本概念和用法：

// 定义结构体
//struct Student { // 结构体：学生
//    // 结构体成员：
//    int id;     // 学号
//    char name[50];
//    char sex[10]; // 性别
//    char tel[12]; // 电话
//};
//
//int main(){
//
//    // 使用结构体类型创建结构体变量s:（结构体类型不占空间，创建的变量才申请空间）
//   //    struct Student s
//  // 给创建的结构体变量赋值（初始化）：
//    struct Student s = {2023001,"张三","男","10086"};
//    // 通过“结构体对象.成员名”访问结构体成员：
//    printf("%d %s %s %s\n",s.id,s.name,s.sex,s.tel);
//
//    return 0;
//}
////2023001 张三 男 10086
//
//// 使用结构体指针访问结构体成员：
//void print(struct Student* ps){ // 定义结构体类型指针ps
//
//    // 使用“(*指针名).成员名访问结构体成员：
//    printf("%d %s %s %s\n",(*ps).id,(*ps).name,(*ps).sex,(*ps).tel);
//    // 使用“->”表示ps指向的对象（Student）的成员：
//    printf("%d %s %s %s\n",ps->id,ps->name,ps->sex,ps->tel);
//}


// GPT:
//// 使用上面定义好的的结构体“类型”创建结构体变量
//struct Student student1;
//
//// 初始化结构体变量
//student1.id = 1;
//strcpy(student1.name, "John Doe");
//student1.gpa = 3.8;
//
//// 结构体作为函数参数
//void printStudent(struct Student s) {
//    printf("ID: %d\n", s.id);
//    printf("Name: %s\n", s.name);
//    printf("GPA: %.2f\n", s.gpa);
//}
//
//// 调用函数
//printStudent(student1);
//
//// 结构体指针
//struct Student *ptrStudent = &student1;
//
//// 通过指针访问结构体成员
//printf("ID: %d\n", ptrStudent->id);
//printf("Name: %s\n", ptrStudent->name);
//printf("GPA: %.2f\n", ptrStudent->gpa);
//
//// 嵌套结构体
//struct Address {
//    char street[50];
//    char city[50];
//    int zipCode;
//};
//
//struct Person {
//    char name[50];
//    int age;
//    struct Address address;
//};
//
//// 结构体数组
//struct Student class[5];
//
//// 初始化结构体数组
//class[0].id = 1;
//strcpy(class[0].name, "Alice");
//class[0].gpa = 3.5;
//// 同样的方式初始化其他数组元素
//
//// 使用 typedef 简化结构体声明（结构体关键字）
//typedef struct {
//    int hours;
//    int minutes;
//    int seconds;
//} Time;

// 分支语句（选择结构）：
//int main(){
//
//    int grade = 0; // 初始化初试成绩
//    int grade_t = 0; // 初始化复试成绩
//    int Grade_threshold = 388; //  初始化分数线
//    int Line_for_re_examinatio = 399; // 初始化复试线
//
//    printf("考生您好，欢迎来到长安大学研究生录取系统！\n请按照提示输入您的成绩！");
//    printf("请输入您的初试成绩：");
//    scanf("%d",&grade);
//
//    if (grade >= Grade_threshold)
//    {
//        printf("恭喜你成功进入复试！");
//    }
//    else
//    {
//        printf("很遗憾，您未进入复试。");
//    }
//
//    printf("请输入您的总成绩：\n");
//    scanf("%d",&grade_t);
//
//    if (grade_t >= Line_for_re_examinatio)
//    {
//        printf("恭喜你已被长安大学录取！");
//    }
//    else
//    {
//        printf("很遗憾，您未被录取。");
//    }
//
//    return 0;
//}
// 结果符合预期：
//考生您好，欢迎来到长安大学研究生录取系统！
//请按照提示输入您的成绩！请输入您的初试成绩：401
//恭喜你成功进入复试！请输入您的总成绩：
//421
//恭喜你已被长安大学录取！

// 选择结构2：else if:多分支：“可以实现多条件判断”

//int main()
//{
//    int grade = 0;
//    printf("请输入您的成绩：");
//    scanf("%d",&grade);
//
//    if (grade > 380)
//        printf("苍天不负有心人，恭喜你上岸啦！");
//    else if (grade < 380 && grade > 370)
//        printf("加油，还有机会！");
//    else if (grade < 370 && grade > 360)
//        printf("希望还是有的。");
//    else if (grade < 360)
//        printf("莫等闲，白了少年头，空悲切！");
//    else
//        printf("请反省自己，是不是努力了！");
//
//    return 0;
//}

// else 只跟最近的if匹配成对，不是按照缩进匹配：

//int main()
//{
//    int a = 0, b = 1;
//    if (a == 1) // 条件不满足，下面的代码块不执行，直接结束
//    {     if (b == 2)
//            printf("hell0\n");
//          else // 这个else是跟 if (a == 1)匹配的
//            printf("hi\n");
//    }
//    return 0;
//}

// 奇数判断：
//int main()
//{
//    int num = 0;
//    printf("请输入您要判断的整数：");
//    scanf("%d",&num);
//    if (num % 2 == 1) // num对2取模，商x余y，若余1，则模为1，则为奇数
//    // 易错：(num % 2 = 1)：把等与写成赋值
//        printf("这是个奇数");
//    else
//        printf("这是个偶数");
//
//    return 0;
//}

// 输出1-100之间的奇数：
//int main()
//{
//    int num = 0; // 初始化num
//    for (num = 0; num <= 100; num++) // 生成1-100之间的数
//    {
//        if (num % 2 == 1)
//            printf("%d\n",num);
//    }
//    return 0;
//}

// while循环版本：
int main()
{
    int i = 1; // 初始化变量i
    while (i <= 100) // 循环条件
    {
        if (i % 2 == 1) // 判断奇数
            printf("%d",i); // 输出奇数
        i++; // 一轮判断结束，继续判断下一个数，若不自增，i不会>100，循环无法结束
             // 将会一直打印1
    }

    return 0;
}


