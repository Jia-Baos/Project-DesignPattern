# 流程简介

1. 通过类 AllyCenterController 的指针 AllyCenterController* controller 指向 AllyCenterController；

2. 通过类 Player 的指针 Player* Jungle 指向 Player 新建对象 Jungle、Single、Jianmengtu、SillyDog；

3. 通过 controller->join() 向类 AllyCenterController 的成员变量 std::vector<Observer*> playerList 中添加 Player 对象 Jungle、Single、Jianmengtu、SillyDog；

4. 通过 Jungle->call(RESOURCE, controller) 传递消息，同时传入类 AllyCenter 的指针 AllyCenter* controller 指向 AllyCenterController；

5. 在 Jungle->call(RESOURCE, controller) 的最后，通过 controller->notify() 调用 AllyCenterController->notify()，通过多态实现；