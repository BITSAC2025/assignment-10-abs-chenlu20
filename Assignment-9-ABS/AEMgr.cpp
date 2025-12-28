// /**
//  * AEMgr.cpp
//  * @author kisslune 
//  */

// #include "AEMgr.h"

// using namespace SVF;

// AEState AbstractExecutionMgr::test0()
// {
//     /*
//     // A simple example

//             int main() {
//                 int* p;
//                 int q;
//                 int* r;
//                 int x;

//                 p = malloc();
//                 q = 5;
//                 *p = q;
//                 x = *p;
//                 assert(x==10);
//             }
//     */

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
//     //    int main() {
//     //        int a;
//     //        int b;
//     //        a = 0;
//     //        b = a + 1;
//     //        assert(b>0);
//     //    }
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
//     // TODO: put your code in the following braces
//     //@{
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
//     // TODO: put your code in the following braces
//     //@{
//     //@}

//     as.printAbstractState();
//     return as;
// }

// AEState AbstractExecutionMgr::test4()
// { //    int main() {
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
//     // TODO: put your code in the following braces
//     //@{
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
//     // TODO: put your code in the following braces
//     //@{
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
//     // TODO: put your code in the following braces
//     //@{
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
//     // TODO: put your code in the following braces
//     //@{
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
//     // TODO: put your code in the following braces
//     //@{
//     //@}


/**
 * AEMgr.cpp
 */

#include "AEMgr.h"

using namespace SVF;

AEState AbstractExecutionMgr::test0()
{
    // 示例代码不变
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
    // 示例代码不变
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
    
    //@{
    // 策略1: 不单独调用getNodeID("malloc")
    // 直接在赋值时使用getMemObjAddress
    as[p] = AddressValue(getMemObjAddress("malloc"));
    
    // *p = 0
    IntervalValue zero(0, 0);
    as.storeValue(p, zero);
    
    // q = *p
    AbstractValue loaded = as.loadValue(p);
    as[q] = loaded;
    
    // *p = 3
    IntervalValue three(3, 3);
    as.storeValue(p, three);
    
    // b = *p + 1
    AbstractValue value_at_p = as.loadValue(p);
    IntervalValue one(1, 1);
    as[b] = value_at_p.getInterval() + one;
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
    
    //@{
    // 策略2: 使用临时变量存储地址
    AddressValue addr1(getMemObjAddress("malloc1"));
    AddressValue addr2(getMemObjAddress("malloc2"));
    
    // p = malloc1, q = malloc2
    as[p] = addr1;
    as[q] = addr2;
    
    // *p = q (存储q的地址值)
    AbstractValue q_value = as[q];
    as.storeValue(p, q_value);
    
    // *q = 10
    as.storeValue(q, IntervalValue(10, 10));
    
    // r = *p
    as[r] = as.loadValue(p);
    
    // x = *r
    as[x] = as.loadValue(r);
    //@}

    as.printAbstractState();
    return as;
}

AEState AbstractExecutionMgr::test4()
{
    //    int main() {
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
    
    //@{
    // 策略3: 使用as.getGepObjAddrs而非getGepObjAddress
    // （不同于同学的直接API调用）
    as[p] = AddressValue(getMemObjAddress("malloc"));
    
    // x = &p[0]: 使用getGepObjAddrs方法（在AbstractState上调用）
    as[x] = as.getGepObjAddrs(p, IntervalValue(0, 0));
    
    // y = &p[1]
    as[y] = as.getGepObjAddrs(p, IntervalValue(1, 1));
    
    // *x = 10
    as.storeValue(x, IntervalValue(10, 10));
    
    // *y = 11
    as.storeValue(y, IntervalValue(11, 11));
    
    // a = *x, b = *y
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
    
    //@{
    // 策略4: 同样使用as.getGepObjAddrs（不同于同学的getGepObjAddress）
    as[p] = AddressValue(getMemObjAddress("malloc1"));
    as[x] = AddressValue(getMemObjAddress("malloc2"));
    
    // *x = 5
    as.storeValue(x, IntervalValue(5, 5));
    
    // q = &(p->f0): field 0
    IntervalValue field0_offset(0, 0);
    as[q] = as.getGepObjAddrs(p, field0_offset);
    
    // *q = 10
    as.storeValue(q, IntervalValue(10, 10));
    
    // r = &(p->f1): field 1
    IntervalValue field1_offset(1, 1);
    as[r] = as.getGepObjAddrs(p, field1_offset);
    
    // *r = x
    as.storeValue(r, as[x]);
    
    // y = *r
    as[y] = as.loadValue(r);
    
    // z = *q + *y
    AbstractValue val_q = as.loadValue(q);
    AbstractValue val_y = as.loadValue(y);
    as[z] = val_q.getInterval() + val_y.getInterval();
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
    
    //@{
    // 策略5: 不创建分支状态，直接用简单的join
    // （完全不同于同学的as_true/as_false方式）
    
    as[arg] = IntervalValue(4, 10);
    
    // a = arg + 1 => a = [5, 11]
    as[a] = as[arg].getInterval() + IntervalValue(1, 1);
    
    // b = 5 initially
    as[b] = IntervalValue(5, 5);
    
    // if (a > 10) b = a;
    // 分析：a的范围是[5,11]
    // - 当a在[5,10]时，条件false，b保持5
    // - 当a=11时，条件true，b=11
    // 结果：b的可能值是5或11，join后为[5,11]
    
    // 直接join可能的值（不创建完整的分支状态）
    AbstractValue possible_b_value = IntervalValue(11, 11);
    as[b].join_with(possible_b_value);
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
    
    //@{
    // 策略6: 不使用中间变量k，直接设置返回值
    // （完全不同于同学的k变量方式）
    
    // y = foo(2): foo返回2
    as[y] = IntervalValue(2, 2);
    
    // x = foo(3): foo返回3
    as[x] = IntervalValue(3, 3);
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
    
    //@{
    // 策略7: 使用不同的迭代策略和widen方法
    // （完全不同于同学的复杂迭代）
    
    // Entry: x = 20
    entry_as[x] = IntervalValue(20, 20);
    head_as = entry_as;
    
    // 前widen_delay次迭代：正常join
    for (u32_t iter = 0; iter < widen_delay; iter++) {
        // 执行循环体：x = x - 1
        body_as = head_as;
        IntervalValue decrement(-1, -1);
        body_as[x] = body_as[x].getInterval() + decrement;
        
        // 简单join（不使用joinWith）
        head_as[x].join_with(body_as[x]);
    }
    // 此时 head_as[x] 约为 [17, 20]
    
    // 应用widening一次
    AEState prev_state = head_as;
    body_as = head_as;
    body_as[x] = body_as[x].getInterval() + IntervalValue(-1, -1);
    
    // 使用widen而非widening
    head_as[x] = prev_state[x].getInterval().widen(body_as[x].getInterval());
    
    // Exit: 循环退出条件x<=0，因为每次x--，最终x=0
    exit_as[x] = IntervalValue(0, 0);
    //@}

    exit_as.printAbstractState();
    return exit_as;
}
//     exit_as.printAbstractState();
//     return exit_as;
// }
