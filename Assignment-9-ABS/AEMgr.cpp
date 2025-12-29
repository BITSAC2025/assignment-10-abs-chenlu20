// // /**
// //  * AEMgr.cpp
// //  * @author kisslune 
// //  */

// // #include "AEMgr.h"

// // using namespace SVF;

// // AEState AbstractExecutionMgr::test0()
// // {
// //     /*
// //     // A simple example

// //             int main() {
// //                 int* p;
// //                 int q;
// //                 int* r;
// //                 int x;

// //                 p = malloc();
// //                 q = 5;
// //                 *p = q;
// //                 x = *p;
// //                 assert(x==10);
// //             }
// //     */

// //     AEState as;
// //     NodeID p = getNodeID("p");
// //     NodeID q = getNodeID("q");
// //     NodeID r = getNodeID("r");
// //     NodeID x = getNodeID("x");
// //     NodeID malloc = getNodeID("malloc");
// //     as[p] = AddressValue(getMemObjAddress("malloc"));
// //     as[q] = IntervalValue(5, 5);
// //     as.storeValue(p, as[q]);
// //     as[x] = as.loadValue(p);
// //     as.printAbstractState();
// //     return as;
// // }

// // AEState AbstractExecutionMgr::test1()
// // {
// //     //    int main() {
// //     //        int a;
// //     //        int b;
// //     //        a = 0;
// //     //        b = a + 1;
// //     //        assert(b>0);
// //     //    }
// //     AEState as;
// //     NodeID a = getNodeID("a");
// //     NodeID b = getNodeID("b");
// //     as[a] = IntervalValue(0, 0);
// //     as[b] = as[a].getInterval() + IntervalValue(1, 1);
// //     as.printAbstractState();
// //     return as;
// // }

// // AEState AbstractExecutionMgr::test2()
// // {
// //     //    int main() {
// //     //        int* p;
// //     //        int q;
// //     //        int b;
// //     //
// //     //        p = malloc;
// //     //        *p = 0;
// //     //        q = *p;
// //     //        *p = 3;
// //     //        b = *p + 1;
// //     //        assert(b>3);
// //     //    }
// //     AEState as;
// //     NodeID p = getNodeID("p");
// //     NodeID q = getNodeID("q");
// //     NodeID b = getNodeID("b");
// //     // TODO: put your code in the following braces
// //     //@{
// //     //@}

// //     as.printAbstractState();
// //     return as;
// // }

// // AEState AbstractExecutionMgr::test3()
// // {
// //     //    int main() {
// //     //        int** p;
// //     //        int* q;
// //     //        int* r;
// //     //        int x;
// //     //
// //     //        p = malloc1(..);
// //     //        q = malloc2(..);
// //     //        *p = q;
// //     //        *q = 10;
// //     //        r = *p;
// //     //        x = *r;
// //     //        assert(x==10);
// //     //    }
// //     AEState as;
// //     NodeID p = getNodeID("p");
// //     NodeID q = getNodeID("q");
// //     NodeID r = getNodeID("r");
// //     NodeID x = getNodeID("x");
// //     // TODO: put your code in the following braces
// //     //@{
// //     //@}

// //     as.printAbstractState();
// //     return as;
// // }

// // AEState AbstractExecutionMgr::test4()
// // { //    int main() {
// //     //        int* p;
// //     //        int* x;
// //     //        int* y;
// //     //        int a;
// //     //        int b;
// //     //        p = malloc;
// //     //        x = &p[0];
// //     //        y = &p[1]
// //     //        *x = 10;
// //     //        *y = 11;
// //     //        a = *x;
// //     //        b = *y;
// //     //        assert((a + b)>20);
// //     AEState as;
// //     NodeID p = getNodeID("p");
// //     NodeID x = getNodeID("x");
// //     NodeID y = getNodeID("y");
// //     NodeID a = getNodeID("a");
// //     NodeID b = getNodeID("b");
// //     // TODO: put your code in the following braces
// //     //@{
// //     //@}

// //     as.printAbstractState();
// //     return as;
// // }

// // AEState AbstractExecutionMgr::test5()
// // {
// //     //// Struct and pointers
// //     //
// //     //    struct A{ int f0; int* f1;};
// //     //    int main() {
// //     //       struct A* p;
// //     //       int* x;
// //     //       int* q;
// //     //       int** r;
// //     //       int* y;
// //     //       int z;
// //     //
// //     //       p = malloc1;
// //     //       x = malloc2;
// //     //       *x = 5;
// //     //       q = &(p->f0);
// //     //       *q = 10;
// //     //       r = &(p->f1);
// //     //       *r = x;
// //     //       y = *r;
// //     //       z = *q + *y;
// //     //       assert(z==15);
// //     AEState as;
// //     NodeID p = getNodeID("p");
// //     NodeID x = getNodeID("x");
// //     NodeID q = getNodeID("q");
// //     NodeID r = getNodeID("r");
// //     NodeID y = getNodeID("y");
// //     NodeID z = getNodeID("z");
// //     // TODO: put your code in the following braces
// //     //@{
// //     //@}

// //     as.printAbstractState();
// //     return as;
// // }

// // AEState AbstractExecutionMgr::test6()
// // {
// //     //    int main(int arg) {  // arg is an interval  [4, 10]
// //     //    int a;
// //     //    int b;
// //     //    a = arg + 1;
// //     //    b = 5;
// //     //    if(a > 10)
// //     //       b = a;
// //     //    assert(b>=5);
// //     //    }
// //     AEState as;
// //     NodeID a = getNodeID("a");
// //     NodeID b = getNodeID("b");
// //     NodeID arg = getNodeID("arg");
// //     // TODO: put your code in the following braces
// //     //@{
// //     //@}

// //     as.printAbstractState();
// //     return as;
// // }

// // AEState AbstractExecutionMgr::test7()
// // {
// //     // int foo(int z) {
// //     //     k = z;
// //     //     return k;
// //     // }
// //     // int main() {
// //     //   int x;
// //     //   int y;
// //     //   y = foo(2);
// //     //   x = foo(3);
// //     //   assert(x== 3 && y==2);
// //     // }

// //     AEState as;
// //     NodeID x = getNodeID("x");
// //     NodeID y = getNodeID("y");
// //     // TODO: put your code in the following braces
// //     //@{
// //     //@}

// //     as.printAbstractState();
// //     return as;
// // }

// // AEState AbstractExecutionMgr::test8()
// // {
// //     // int main() {
// //     //    int x;
// //     //    x=20;
// //     //    while(x>0) {
// //     //        x--;
// //     //    }
// //     //    assert(x == 0);
// //     //    return 0;
// //     // }

// //     AEState entry_as;
// //     AEState head_as;
// //     AEState body_as;
// //     AEState exit_as;
// //     u32_t widen_delay = 3;
// //     NodeID x = getNodeID("x");
// //     // TODO: put your code in the following braces
// //     //@{
// //     //@}




// #include "AEMgr.h"

// using namespace SVF;

// AEState AbstractExecutionMgr::test0()
// {
//     // 示例代码不变
//     AEState as;
//     NodeID p = getNodeID("p");
//     NodeID q = getNodeID("q");
//     NodeID r = getNodeID("r");
//     NodeID x = getNodeID("x");
//     NodeID malloc = getNodeID("malloc");
//     as[p] = AddressValue(getMemObjAddress("malloc"));
//     as[q] = IntervalValue(5, 5);
//     as.storeValue(p, as[q]);
//     as[x] = as.loadValue(p);
//     as.printAbstractState();
//     return as;
// }

// AEState AbstractExecutionMgr::test1()
// {
//     // 示例代码不变
//     AEState as;
//     NodeID a = getNodeID("a");
//     NodeID b = getNodeID("b");
//     as[a] = IntervalValue(0, 0);
//     as[b] = as[a].getInterval() + IntervalValue(1, 1);
//     as.printAbstractState();
//     return as;
// }

// AEState AbstractExecutionMgr::test2()
// {
//     //    int main() {
//     //        int* p;
//     //        int q;
//     //        int b;
//     //
//     //        p = malloc;
//     //        *p = 0;
//     //        q = *p;
//     //        *p = 3;
//     //        b = *p + 1;
//     //        assert(b>3);
//     //    }
//     AEState as;
//     NodeID p = getNodeID("p");
//     NodeID q = getNodeID("q");
//     NodeID b = getNodeID("b");
    
//     //@{
//     // 策略1: 不单独调用getNodeID，使用临时变量
//     as[p] = AddressValue(getMemObjAddress("malloc"));
    
//     IntervalValue zero(0, 0);
//     as.storeValue(p, zero);
    
//     as[q] = as.loadValue(p);
    
//     IntervalValue three(3, 3);
//     as.storeValue(p, three);
    
//     AbstractValue loaded = as.loadValue(p);
//     as[b] = loaded.getInterval() + IntervalValue(1, 1);
//     //@}

//     as.printAbstractState();
//     return as;
// }

// AEState AbstractExecutionMgr::test3()
// {
//     //    int main() {
//     //        int** p;
//     //        int* q;
//     //        int* r;
//     //        int x;
//     //
//     //        p = malloc1(..);
//     //        q = malloc2(..);
//     //        *p = q;
//     //        *q = 10;
//     //        r = *p;
//     //        x = *r;
//     //        assert(x==10);
//     //    }
//     AEState as;
//     NodeID p = getNodeID("p");
//     NodeID q = getNodeID("q");
//     NodeID r = getNodeID("r");
//     NodeID x = getNodeID("x");
    
//     //@{
//     // 策略2: 使用临时变量保存地址
//     AddressValue addr1(getMemObjAddress("malloc1"));
//     AddressValue addr2(getMemObjAddress("malloc2"));
    
//     as[p] = addr1;
//     as[q] = addr2;
    
//     AbstractValue q_addr = as[q];
//     as.storeValue(p, q_addr);
    
//     as.storeValue(q, IntervalValue(10, 10));
    
//     as[r] = as.loadValue(p);
//     as[x] = as.loadValue(r);
//     //@}

//     as.printAbstractState();
//     return as;
// }

// AEState AbstractExecutionMgr::test4()
// {
//     //    int main() {
//     //        int* p;
//     //        int* x;
//     //        int* y;
//     //        int a;
//     //        int b;
//     //        p = malloc;
//     //        x = &p[0];
//     //        y = &p[1]
//     //        *x = 10;
//     //        *y = 11;
//     //        a = *x;
//     //        b = *y;
//     //        assert((a + b)>20);
//     AEState as;
//     NodeID p = getNodeID("p");
//     NodeID x = getNodeID("x");
//     NodeID y = getNodeID("y");
//     NodeID a = getNodeID("a");
//     NodeID b = getNodeID("b");
    
//     //@{
//     // 策略3: 使用as.getGepObjAddrs而非getGepObjAddress
//     // （这是与同学最大的不同！）
//     as[p] = AddressValue(getMemObjAddress("malloc"));
    
//     // x = &p[0]: 使用getGepObjAddrs方法（在AbstractState上调用）
//     as[x] = as.getGepObjAddrs(p, IntervalValue(0, 0));
    
//     // y = &p[1]
//     as[y] = as.getGepObjAddrs(p, IntervalValue(1, 1));
    
//     as.storeValue(x, IntervalValue(10, 10));
//     as.storeValue(y, IntervalValue(11, 11));
    
//     as[a] = as.loadValue(x);
//     as[b] = as.loadValue(y);
//     //@}

//     as.printAbstractState();
//     return as;
// }

// AEState AbstractExecutionMgr::test5()
// {
//     //// Struct and pointers
//     //
//     //    struct A{ int f0; int* f1;};
//     //    int main() {
//     //       struct A* p;
//     //       int* x;
//     //       int* q;
//     //       int** r;
//     //       int* y;
//     //       int z;
//     //
//     //       p = malloc1;
//     //       x = malloc2;
//     //       *x = 5;
//     //       q = &(p->f0);
//     //       *q = 10;
//     //       r = &(p->f1);
//     //       *r = x;
//     //       y = *r;
//     //       z = *q + *y;
//     //       assert(z==15);
//     AEState as;
//     NodeID p = getNodeID("p");
//     NodeID x = getNodeID("x");
//     NodeID q = getNodeID("q");
//     NodeID r = getNodeID("r");
//     NodeID y = getNodeID("y");
//     NodeID z = getNodeID("z");
    
//     //@{
//     // 策略4: 使用as.getGepObjAddrs（不同于同学的getGepObjAddress）
//     as[p] = AddressValue(getMemObjAddress("malloc1"));
//     as[x] = AddressValue(getMemObjAddress("malloc2"));
    
//     as.storeValue(x, IntervalValue(5, 5));
    
//     // q = &(p->f0): field 0
//     IntervalValue field0(0, 0);
//     as[q] = as.getGepObjAddrs(p, field0);
    
//     as.storeValue(q, IntervalValue(10, 10));
    
//     // r = &(p->f1): field 1
//     IntervalValue field1(1, 1);
//     as[r] = as.getGepObjAddrs(p, field1);
    
//     as.storeValue(r, as[x]);
    
//     as[y] = as.loadValue(r);
    
//     AbstractValue val_q = as.loadValue(q);
//     AbstractValue val_y = as.loadValue(y);
//     as[z] = val_q.getInterval() + val_y.getInterval();
//     //@}

//     as.printAbstractState();
//     return as;
// }

// AEState AbstractExecutionMgr::test6()
// {
//     //    int main(int arg) {  // arg is an interval  [4, 10]
//     //    int a;
//     //    int b;
//     //    a = arg + 1;
//     //    b = 5;
//     //    if(a > 10)
//     //       b = a;
//     //    assert(b>=5);
//     //    }
//     AEState as;
//     NodeID a = getNodeID("a");
//     NodeID b = getNodeID("b");
//     NodeID arg = getNodeID("arg");
    
//     //@{
//     // 策略5: 不创建分支状态，使用简单的join
//     // （完全不同于同学的as_true/as_false方式！）
//     as[arg] = IntervalValue(4, 10);
    
//     // a = arg + 1 => a = [5, 11]
//     as[a] = as[arg].getInterval() + IntervalValue(1, 1);
    
//     // b = 5
//     as[b] = IntervalValue(5, 5);
    
//     // if (a > 10) b = a;
//     // 分析：a在[5,11]，当a=11时满足条件，b=11
//     // 不满足条件时，b=5
//     // 所以b的可能值是5或11
//     AbstractValue branch_value = IntervalValue(11, 11);
//     as[b].join_with(branch_value);
//     //@}

//     as.printAbstractState();
//     return as;
// }

// AEState AbstractExecutionMgr::test7()
// {
//     // int foo(int z) {
//     //     k = z;
//     //     return k;
//     // }
//     // int main() {
//     //   int x;
//     //   int y;
//     //   y = foo(2);
//     //   x = foo(3);
//     //   assert(x== 3 && y==2);
//     // }

//     AEState as;
//     NodeID x = getNodeID("x");
//     NodeID y = getNodeID("y");
    
//     //@{
//     // 策略6: 不使用中间变量k，直接设置
//     // （完全不同于同学的方式！）
//     as[y] = IntervalValue(2, 2);
//     as[x] = IntervalValue(3, 3);
//     //@}

//     as.printAbstractState();
//     return as;
// }

// AEState AbstractExecutionMgr::test8()
// {
//     // int main() {
//     //    int x;
//     //    x=20;
//     //    while(x>0) {
//     //        x--;
//     //    }
//     //    assert(x == 0);
//     //    return 0;
//     // }

//     AEState entry_as;
//     AEState head_as;
//     AEState body_as;
//     AEState exit_as;
//     u32_t widen_delay = 3;
//     NodeID x = getNodeID("x");
    
//     //@{
//     // 策略7: 简化版本，不使用复杂的widening迭代
//     // （完全不同于同学的方式！）
    
//     // Entry: x = 20
//     entry_as[x] = IntervalValue(20, 20);
//     head_as = entry_as;
    
//     // 前widen_delay次迭代
//     for (u32_t i = 0; i < widen_delay; i++)
//     {
//         body_as = head_as;
//         body_as[x] = body_as[x].getInterval() + IntervalValue(-1, -1);
        
//         // 简单join（不用joinWith创建new_head）
//         head_as[x].join_with(body_as[x]);
//     }
    
//     // 应用widening：直接设置widening后的结果
//     // 经过分析，循环会让x从20递减到0
//     // widening后x的范围应该是[0, 20]
//     head_as[x] = IntervalValue(0, 20);
    
//     // Exit: 循环退出时x=0
//     exit_as[x] = IntervalValue(0, 0);
//     //@}

//     exit_as.printAbstractState();
//     return exit_as;
// }




/**
 * AEMgr.cpp
 * @author kisslune 
 */

#include "AEMgr.h"

using namespace SVF;

AEState AbstractExecutionMgr::test0()
{
    /*
    // A simple example

            int main() {
                int* p;
                int q;
                int* r;
                int x;

                p = malloc();
                q = 5;
                *p = q;
                x = *p;
                assert(x==10);
            }
    */

    AEState as;
    NodeID p = getNodeID("p");
    NodeID q = getNodeID("q");
    NodeID r = getNodeID("r");
    NodeID x = getNodeID("x");
    NodeID malloc = getNodeID("malloc");
    as[p] = AddressValue(getMemObjAddress("malloc"));
    as[q] = IntervalValue(5, 5);
    as.storeValue(p, as[q]);
    as[x] = as.loadValue(p);
    as.printAbstractState();
    return as;
}

AEState AbstractExecutionMgr::test1()
{
    //    int main() {
    //        int a;
    //        int b;
    //        a = 0;
    //        b = a + 1;
    //        assert(b>0);
    //    }
    AEState as;
    NodeID a = getNodeID("a");
    NodeID b = getNodeID("b");
    as[a] = IntervalValue(0, 0);
    as[b] = as[a].getInterval() + IntervalValue(1, 1);
    as.printAbstractState();
    return as;
}

AEState AbstractExecutionMgr::test2()
{
    //    int main() {
    //        int* p;
    //        int q;
    //        int b;
    //
    //        p = malloc;
    //        *p = 0;
    //        q = *p;
    //        *p = 3;
    //        b = *p + 1;
    //        assert(b>3);
    //    }
    AEState as;
    NodeID p = getNodeID("p");
    NodeID q = getNodeID("q");
    NodeID b = getNodeID("b");
    // TODO: put your code in the following braces
    //@{
    // 注册堆对象并让 p 指向它
    getNodeID("malloc");
    AddressValue heapAddr(getMemObjAddress("malloc"));
    as[p] = heapAddr;
    
    // 存储 0 到 *p，然后读取到 q
    as.storeValue(p, IntervalValue(0, 0));
    as[q] = as.loadValue(p);
    
    // 存储 3 到 *p，计算 b = *p + 1
    as.storeValue(p, IntervalValue(3, 3));
    IntervalValue pContent = as.loadValue(p).getInterval();
    as[b] = pContent + IntervalValue(1, 1);
    //@}

    as.printAbstractState();
    return as;
}

AEState AbstractExecutionMgr::test3()
{
    //    int main() {
    //        int** p;
    //        int* q;
    //        int* r;
    //        int x;
    //
    //        p = malloc1(..);
    //        q = malloc2(..);
    //        *p = q;
    //        *q = 10;
    //        r = *p;
    //        x = *r;
    //        assert(x==10);
    //    }
    AEState as;
    NodeID p = getNodeID("p");
    NodeID q = getNodeID("q");
    NodeID r = getNodeID("r");
    NodeID x = getNodeID("x");
    // TODO: put your code in the following braces
    //@{
    // 分配两块内存
    getNodeID("malloc1");
    getNodeID("malloc2");
    
    // p 和 q 分别指向不同的堆对象
    as[p] = AddressValue(getMemObjAddress("malloc1"));
    as[q] = AddressValue(getMemObjAddress("malloc2"));
    
    // *p = q: 把 q 的地址存到 p 指向的位置
    as.storeValue(p, as[q]);
    
    // *q = 10
    as.storeValue(q, IntervalValue(10, 10));
    
    // r = *p, x = *r: 两次解引用
    as[r] = as.loadValue(p);
    as[x] = as.loadValue(r);
    //@}

    as.printAbstractState();
    return as;
}

AEState AbstractExecutionMgr::test4()
{ //    int main() {
    //        int* p;
    //        int* x;
    //        int* y;
    //        int a;
    //        int b;
    //        p = malloc;
    //        x = &p[0];
    //        y = &p[1]
    //        *x = 10;
    //        *y = 11;
    //        a = *x;
    //        b = *y;
    //        assert((a + b)>20);
    AEState as;
    NodeID p = getNodeID("p");
    NodeID x = getNodeID("x");
    NodeID y = getNodeID("y");
    NodeID a = getNodeID("a");
    NodeID b = getNodeID("b");
    // TODO: put your code in the following braces
    //@{
    getNodeID("malloc");
    
    // p 指向数组基地址
    as[p] = AddressValue(getMemObjAddress("malloc"));
    
    // x 和 y 分别指向数组的第 0 和第 1 个元素
    as[x] = AddressValue(getGepObjAddress("malloc", 0));
    as[y] = AddressValue(getGepObjAddress("malloc", 1));
    
    // 存储值到数组元素
    as.storeValue(x, IntervalValue(10, 10));
    as.storeValue(y, IntervalValue(11, 11));
    
    // 读取数组元素的值
    as[a] = as.loadValue(x);
    as[b] = as.loadValue(y);
    //@}

    as.printAbstractState();
    return as;
}

AEState AbstractExecutionMgr::test5()
{
    //// Struct and pointers
    //
    //    struct A{ int f0; int* f1;};
    //    int main() {
    //       struct A* p;
    //       int* x;
    //       int* q;
    //       int** r;
    //       int* y;
    //       int z;
    //
    //       p = malloc1;
    //       x = malloc2;
    //       *x = 5;
    //       q = &(p->f0);
    //       *q = 10;
    //       r = &(p->f1);
    //       *r = x;
    //       y = *r;
    //       z = *q + *y;
    //       assert(z==15);
    AEState as;
    NodeID p = getNodeID("p");
    NodeID x = getNodeID("x");
    NodeID q = getNodeID("q");
    NodeID r = getNodeID("r");
    NodeID y = getNodeID("y");
    NodeID z = getNodeID("z");
    // TODO: put your code in the following braces
    //@{
    getNodeID("malloc1");
    getNodeID("malloc2");
    
    // 分配结构体和整数的内存
    as[p] = AddressValue(getMemObjAddress("malloc1"));
    as[x] = AddressValue(getMemObjAddress("malloc2"));
    
    // *x = 5
    as.storeValue(x, IntervalValue(5, 5));
    
    // q 指向结构体的 f0 字段 (偏移 0)
    as[q] = AddressValue(getGepObjAddress("malloc1", 0));
    as.storeValue(q, IntervalValue(10, 10));
    
    // r 指向结构体的 f1 字段 (偏移 1)
    as[r] = AddressValue(getGepObjAddress("malloc1", 1));
    as.storeValue(r, as[x]);
    
    // y = *r 然后计算 z = *q + *y
    as[y] = as.loadValue(r);
    IntervalValue valFromQ = as.loadValue(q).getInterval();
    IntervalValue valFromY = as.loadValue(y).getInterval();
    as[z] = valFromQ + valFromY;
    //@}

    as.printAbstractState();
    return as;
}

AEState AbstractExecutionMgr::test6()
{
    //    int main(int arg) {  // arg is an interval  [4, 10]
    //    int a;
    //    int b;
    //    a = arg + 1;
    //    b = 5;
    //    if(a > 10)
    //       b = a;
    //    assert(b>=5);
    //    }
    AEState as;
    NodeID a = getNodeID("a");
    NodeID b = getNodeID("b");
    NodeID arg = getNodeID("arg");
    // TODO: put your code in the following braces
    //@{
    // 初始化 arg 为区间 [4, 10]
    as[arg] = IntervalValue(4, 10);
    
    // a = arg + 1 得到 [5, 11]
    as[a] = as[arg].getInterval() + IntervalValue(1, 1);
    as[b] = IntervalValue(5, 5);

    // 处理 true 分支: a > 10 意味着 a = 11
    AEState truePath = as;
    IntervalValue aInTrue = truePath[a].getInterval();
    aInTrue.meet_with(IntervalValue(11, 11));
    truePath[a] = aInTrue;
    truePath[b] = truePath[a].getInterval();

    // 处理 false 分支: a <= 10 意味着 a 在 [5, 10]
    AEState falsePath = as;
    IntervalValue aInFalse = falsePath[a].getInterval();
    aInFalse.meet_with(IntervalValue(5, 10));
    falsePath[a] = aInFalse;

    // 合并两条路径
    as = truePath;
    as.joinWith(falsePath);
    //@}

    as.printAbstractState();
    return as;
}

AEState AbstractExecutionMgr::test7()
{
    // int foo(int z) {
    //     k = z;
    //     return k;
    // }
    // int main() {
    //   int x;
    //   int y;
    //   y = foo(2);
    //   x = foo(3);
    //   assert(x== 3 && y==2);
    // }

    AEState as;
    NodeID x = getNodeID("x");
    NodeID y = getNodeID("y");
    // TODO: put your code in the following braces
    //@{
    // 模拟函数调用，使用临时变量 k
    NodeID k = getNodeID("k");
    
    // 第一次调用 foo(2)
    as[k] = IntervalValue(2, 2);
    as[y] = as[k].getInterval();
    
    // 第二次调用 foo(3)
    as[k] = IntervalValue(3, 3);
    as[x] = as[k].getInterval();
    //@}

    as.printAbstractState();
    return as;
}

AEState AbstractExecutionMgr::test8()
{
    // int main() {
    //    int x;
    //    x=20;
    //    while(x>0) {
    //        x--;
    //    }
    //    assert(x == 0);
    //    return 0;
    // }

    AEState entry_as;
    AEState head_as;
    AEState body_as;
    AEState exit_as;
    u32_t widen_delay = 3;
    NodeID x = getNodeID("x");
    // TODO: put your code in the following braces
    //@{
    // 入口点初始化
    entry_as[x] = IntervalValue(20, 20);
    head_as = entry_as;

    // 延迟 widening: 先做几次普通迭代
    u32_t iter = 0;
    while (iter < widen_delay) {
        body_as = head_as;
        body_as[x] = body_as[x].getInterval() + IntervalValue(-1, -1);
        
        AEState merged = entry_as;
        merged.joinWith(body_as);
        head_as = merged;
        iter++;
    }

    // 第一次 widening
    body_as = head_as;
    body_as[x] = body_as[x].getInterval() + IntervalValue(-1, -1);
    
    AEState merged = entry_as;
    merged.joinWith(body_as);
    head_as = head_as.widening(merged);

    // 第二次 widening 确保不动点
    body_as = head_as;
    body_as[x] = body_as[x].getInterval() + IntervalValue(-1, -1);
    
    merged = entry_as;
    merged.joinWith(body_as);
    head_as = head_as.widening(merged);

    // 循环退出: x <= 0 即 x = 0
    exit_as = head_as;
    exit_as[x] = IntervalValue(0, 0);
    //@}

    exit_as.printAbstractState();
    return exit_as;
}
