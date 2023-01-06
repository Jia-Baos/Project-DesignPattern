# 流程简介

1. 通过类 Context 的指针 Context* ctx 指向 Context；

2. 通过 ctx->setSortStrategy(new BubbleSort()) 将类 Content 中的成员变量 Strategy* sortStrategy 指向 Strategy 的子类 BubbleSort；

3. 通过 ctx->sort() 调用成员变量 Strategy* sortStrategy 的 sort(int arr[], int N) 函数（多态，调用 Strategy 子类 BubbleSort 的 sort(int arr[], int N) 函数）