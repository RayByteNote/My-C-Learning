#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <assert.h>
#include <stdlib.h>
using namespace std;

// ===================== 1. 命名空间 namespace =====================
namespace bit
{
    int rand = 10;
    int Add(int left, int right) {
        return left + right;
    }
    // 嵌套命名空间
    namespace pg {
        int rand = 1;
    }
}

void test_namespace()
{
    printf("全局rand：%p\n", rand);
    printf("bit::rand：%d\n", bit::rand);
    printf("bit::pg::rand：%d\n", bit::pg::rand);
}

// ===================== 2. C++输入输出 cin/cout =====================
void test_io()
{
    // 提升IO效率
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a = 0;
    double b = 0.1;
    char c = 'x';
    cout << a << " " << b << " " << c << endl;

    cin >> a >> b >> c;
    cout << "输入后：" << a << " " << b << " " << c << endl;
}

// ===================== 3. 缺省参数 =====================
// 全缺省
void Func1(int a = 10, int b = 20, int c = 30) {
    cout << "a=" << a << " b=" << b << " c=" << c << endl;
}
// 半缺省（必须从右往左）
void Func2(int a, int b = 10, int c = 20) {
    cout << "a=" << a << " b=" << b << " c=" << c << endl;
}

void test_default_param()
{
    Func1();
    Func1(1);
    Func1(1, 2);
    Func2(100);
    Func2(100, 200);
}

// ===================== 4. 函数重载 =====================
int Add(int left, int right) {
    cout << "int Add" << endl;
    return left + right;
}
double Add(double left, double right) {
    cout << "double Add" << endl;
    return left + right;
}
void f() { cout << "f()" << endl; }
void f(int a) { cout << "f(int)" << endl; }
void f(int a, char b) { cout << "f(int,char)" << endl; }
void f(char b, int a) { cout << "f(char,int)" << endl; }

void test_overload()
{
    Add(10, 20);
    Add(10.1, 20.2);
    f();
    f(10);
    f(10, 'a');
    f('a', 10);
}

// ===================== 5. 引用 & =====================
void Swap(int& rx, int& ry) {
    int tmp = rx;
    rx = ry;
    ry = tmp;
}

void test_reference()
{
    int a = 10;
    int& b = a; // 别名
    b = 20;
    cout << "a=" << a << " &a=" << &a << " &b=" << &b << endl;

    int x = 1, y = 2;
    Swap(x, y);
    cout << "Swap后：x=" << x << " y=" << y << endl;
}

// ===================== 6. const 引用 =====================
void test_const_ref()
{
    const int a = 10;
    const int& ra = a; // 必须const

    int b = 20;
    const int& rb = b; // 权限缩小

    // 临时对象必须const引用
    const int& tmp = 10 + 20;
    cout << tmp << endl;
}

// ===================== 7. 内联函数 inline =====================
inline int AddInline(int x, int y) {
    return x + y;
}

void test_inline()
{
    cout << AddInline(1, 2) << endl;
}

// ===================== 8. nullptr =====================
void f(int x) { cout << "f(int)" << endl; }
void f(int* ptr) { cout << "f(int*)" << endl; }

void test_nullptr()
{
    f(0);
    f(NULL);    // 调用f(int)
    f(nullptr); // 调用f(int*)
}

// ===================== 主函数 =====================
int main()
{
    cout << "===== 1. 命名空间 =====" << endl;
    test_namespace();

    cout << "\n===== 2. 输入输出 =====" << endl;
    test_io();

    cout << "\n===== 3. 缺省参数 =====" << endl;
    test_default_param();

    cout << "\n===== 4. 函数重载 =====" << endl;
    test_overload();

    cout << "\n===== 5. 引用 =====" << endl;
    test_reference();

    cout << "\n===== 6. const引用 =====" << endl;
    test_const_ref();

    cout << "\n===== 7. inline =====" << endl;
    test_inline();

    cout << "\n===== 8. nullptr =====" << endl;
    test_nullptr();

    return 0;
}