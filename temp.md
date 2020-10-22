# one talk

1. 应用：效率高，收益快

   研究：适合，内部原理并封装，e.g. zhang peng

2. 任务步骤，达到一个任务自己细分步骤目的

3. 学习时间安排

4. 自身优势：Java一大把，如何比其他人有优势，学得快？工作经验丰富？年轻？开发者的核心竞争力：算法？

5. 赶紧学习：东西就在那儿，学了就有，不学就没有；社会如同一个游戏，规则就放在那儿，看或不看。学有所成，凶我的人问我问题就可以凶回去了



# design pattern sharing

1. 思维方式：

   底层思维：语言转换，编译转换，内存模型，运行时机制

   抽象思维：面向对象，组件封装，设计模式，架构模式

   分解VS抽象

2. 设计原则：

   S.O.L.I.D，对象组合VS类继承，封装变化点，针对接口VS针对实现

3. 重构技法：迭代设计

   静态->动态，早绑定->晚绑定，继承->组合，编译时依赖->运行时依赖，紧耦合->松耦合

4. 模式分类：

   创建型，结构型，行为型

   封装变化角度：

   + 组件协作，**Template Method**, **Strategy**, **Observer**
   + 单一职责，**Decorator**, Bridge
   + 对象创建，**Factory Method, Abstract Factory**, Prototype, Builder
   + 对象性能，**Singleton**, Flyweight
   + 接口隔离，Facade, Proxy, Mediator, **Adapter**
   + 状态变化，Memento, State
   + 数据结构，Composite, Iterator, Chain of Responsibility
   + 行为变化，Command, Visitor
   + 领域问题，Interpreter

5. 对象模型：class A { B* pb; //... };

6. case: class diagram + codes

   e.g. Strategy+Factory

7. 审慎使用模式：

   when 代码可读性差，需求理解浅，变化没有显现，非系统关键依赖点，项目无复用价值或将要发布

   

