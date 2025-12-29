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
//     // 策略4: 使用as.getGepObjAddrs
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
//   
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
//    
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
//  
    
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
 * CFLR.cpp
 * @author kisslune 
 */

#include "A4Header.h"

using namespace SVF;
using namespace llvm;
using namespace std;

int main(int argc, char **argv)
{
    auto moduleNameVec =
            OptionBase::parseOptions(argc, argv, "Whole Program Points-to Analysis",
                                     "[options] <input-bitcode...>");

    LLVMModuleSet::buildSVFModule(moduleNameVec);

    SVFIRBuilder builder;
    auto pag = builder.build();
    pag->dump("PAG");

    CFLR solver;
    solver.buildGraph(pag);
    solver.solve();
    solver.dumpResult();

    LLVMModuleSet::releaseLLVMModuleSet();
    return 0;
}

void CFLR::solve()
{
    std::unordered_set<unsigned> nodes;
    
    for (auto &p : graph->getSuccessorMap()) {
        nodes.insert(p.first);
        for (auto &q : p.second) {
            for (unsigned d : q.second) {
                nodes.insert(d);
                workList.push(CFLREdge(p.first, d, q.first));
            }
        }
    }
    
    auto tryAdd = [this](unsigned s, unsigned d, EdgeLabel l) {
        if (!graph->hasEdge(s, d, l)) {
            graph->addEdge(s, d, l);
            workList.push(CFLREdge(s, d, l));
        }
    };
    
    for (unsigned n : nodes) {
        tryAdd(n, n, VF);
        tryAdd(n, n, VFBar);
        tryAdd(n, n, VA);
    }
    
    while (!workList.empty()) {
        auto e = workList.pop();
        unsigned u = e.src, v = e.dst;
        EdgeLabel L = e.label;
        
        auto &S = graph->getSuccessorMap();
        auto &P = graph->getPredecessorMap();
        
        if (L == VFBar) {
            if (S.count(v) && S[v].count(AddrBar))
                for (unsigned t : S[v][AddrBar]) tryAdd(u, t, PT);
            if (S.count(v) && S[v].count(VA))
                for (unsigned t : S[v][VA]) tryAdd(u, t, VA);
            if (S.count(v) && S[v].count(VFBar))
                for (unsigned t : S[v][VFBar]) tryAdd(u, t, VFBar);
        }
        
        if (L == AddrBar && P.count(u) && P[u].count(VFBar))
            for (unsigned t : P[u][VFBar]) tryAdd(t, v, PT);
        
        if (L == Addr) {
            if (S.count(v) && S[v].count(VF))
                for (unsigned t : S[v][VF]) tryAdd(u, t, PTBar);
        }
        
        if (L == VF) {
            if (P.count(u) && P[u].count(Addr))
                for (unsigned t : P[u][Addr]) tryAdd(t, v, PTBar);
            if (S.count(v) && S[v].count(VF))
                for (unsigned t : S[v][VF]) tryAdd(u, t, VF);
            if (P.count(u) && P[u].count(VF))
                for (unsigned t : P[u][VF]) tryAdd(t, v, VF);
            if (P.count(u) && P[u].count(VA))
                for (unsigned t : P[u][VA]) tryAdd(t, v, VA);
        }
        
        if (L == Copy) tryAdd(u, v, VF);
        if (L == CopyBar) tryAdd(u, v, VFBar);
        
        if (L == SV && S.count(v) && S[v].count(Load))
            for (unsigned t : S[v][Load]) tryAdd(u, t, VF);
        if (L == PV && S.count(v) && S[v].count(Load))
            for (unsigned t : S[v][Load]) tryAdd(u, t, VF);
        if (L == Load) {
            if (P.count(u) && P[u].count(SV))
                for (unsigned t : P[u][SV]) tryAdd(t, v, VF);
            if (P.count(u) && P[u].count(PV))
                for (unsigned t : P[u][PV]) tryAdd(t, v, VF);
            if (P.count(u) && P[u].count(LV))
                for (unsigned t : P[u][LV]) tryAdd(t, v, VA);
        }
        
        if (L == Store) {
            if (S.count(v) && S[v].count(VP))
                for (unsigned t : S[v][VP]) tryAdd(u, t, VF);
            if (S.count(v) && S[v].count(VA))
                for (unsigned t : S[v][VA]) tryAdd(u, t, SV);
        }
        if (L == VP && P.count(u) && P[u].count(Store))
            for (unsigned t : P[u][Store]) tryAdd(t, v, VF);
        
        if (L == VFBar) {
            if (P.count(u) && P[u].count(VFBar))
                for (unsigned t : P[u][VFBar]) tryAdd(t, v, VFBar);
        }
        
        if (L == LoadBar) {
            if (S.count(v) && S[v].count(SVBar))
                for (unsigned t : S[v][SVBar]) tryAdd(u, t, VFBar);
            if (S.count(v) && S[v].count(VP))
                for (unsigned t : S[v][VP]) tryAdd(u, t, VFBar);
            if (S.count(v) && S[v].count(VA))
                for (unsigned t : S[v][VA]) tryAdd(u, t, LV);
        }
        if (L == SVBar && P.count(u) && P[u].count(LoadBar))
            for (unsigned t : P[u][LoadBar]) tryAdd(t, v, VFBar);
        if (L == VP && P.count(u) && P[u].count(LoadBar))
            for (unsigned t : P[u][LoadBar]) tryAdd(t, v, VFBar);
        
        if (L == PV && S.count(v) && S[v].count(StoreBar))
            for (unsigned t : S[v][StoreBar]) tryAdd(u, t, VFBar);
        if (L == StoreBar && P.count(u) && P[u].count(PV))
            for (unsigned t : P[u][PV]) tryAdd(t, v, VFBar);
        
        if (L == LV && S.count(v) && S[v].count(Load))
            for (unsigned t : S[v][Load]) tryAdd(u, t, VA);
        
        if (L == VA) {
            if (P.count(u) && P[u].count(VFBar))
                for (unsigned t : P[u][VFBar]) tryAdd(t, v, VA);
            if (S.count(v) && S[v].count(VF))
                for (unsigned t : S[v][VF]) tryAdd(u, t, VA);
            if (P.count(u) && P[u].count(Store))
                for (unsigned t : P[u][Store]) tryAdd(t, v, SV);
            if (S.count(v) && S[v].count(StoreBar))
                for (unsigned t : S[v][StoreBar]) tryAdd(u, t, SVBar);
            if (P.count(u) && P[u].count(PTBar))
                for (unsigned t : P[u][PTBar]) tryAdd(t, v, PV);
            if (S.count(v) && S[v].count(PT))
                for (unsigned t : S[v][PT]) tryAdd(u, t, VP);
            if (P.count(u) && P[u].count(LoadBar))
                for (unsigned t : P[u][LoadBar]) tryAdd(t, v, LV);
        }
        
        if (L == PTBar && S.count(v) && S[v].count(VA))
            for (unsigned t : S[v][VA]) tryAdd(u, t, PV);
        
        if (L == PT && P.count(u) && P[u].count(VA))
            for (unsigned t : P[u][VA]) tryAdd(t, v, VP);
    }
}
