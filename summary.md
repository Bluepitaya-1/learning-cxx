## 4. 
static关键字，静态全局变量，局部变量，成员变量，成员函数（不实例化就可以调用，但是不能访问非静态成员变量或成员函数），类（不可被实例化，成员只能是静态的），初始化（程序启动时进行且只执行一次），常量，模板，断言（最后两个不常用）

## 5.
constexprc常量表达式，编译器在编译时就计算表达式的值。

## 6.


# 12.
int *a=new int[LENGTH]
delete[] a;

# 13.
类的函数声明的后面加 = delete，显式地删除该函数的定义，可以用来禁止某些函数的调用

# 14.

# 16. 
virture 关键字，允许多态性，多态性允许基类接口和派生类的实现进行交互。  
简单来说，基类的指针或引用，接收一个派生类的赋值，则调用的虚函数是派生类的虚函数，非虚函数是基类的非虚函数  
基类中标定虚函数，则派生类调用的一定是override或者final覆盖的虚函数

# 24.
vector<bool>a 比较特殊，比如auto t=a[8]，则t不是值而是一个代理对象，对代理对象赋值同样改变vector内的值  
sizeof(a)=32,其他类型的vector一般是24（3*8）

# 25.
通过计算strides，可以使用一维vector模拟多维tensor

# 26.
decltype() 可以获取一个变量或者函数的类型，其返回值是一个类型，可以用来类型判断或声明  
例如：decltype(value) v2=value*2;

is_same_v(T,U)用来判断是否是同一个类型

字符串初始化中   "..."s是std::string，"..."是const char*

# 27.
map:  存在key：map.find(key)!=map.end()

# 28.
std::transform 的用法：  
std::transform(val.begin(),val.end(),
                std::back_inserter(ans),
                [](int x){return std::to_string(x*2);});

# 29.
std::accumulate 的用法：  第三个参数是结果的初始值，不传入第四个参数则默认为求和
int size = std::accumulate(shape,shape+3,1,std::multiplies<int>());

