基本思想：如果你调用一个函数得到了预期的结果，那么我们就说这个测试通过

我们决定每个测试就是一个函数

那么，一个测试需要什么信息呢？
1. 首先，我们希望每个测试都有自己的名称， 返回值暂时不需要（void）
2. tdd，仅考虑你当前需要的事情，同样目前我们也不需要参数
3. 为了避免手动调用测试，我们需要将测试**注册**在某个地方

测试1： 我们能通过不同的方式创建测试