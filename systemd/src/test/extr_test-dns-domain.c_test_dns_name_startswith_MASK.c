
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static void FUNC_1(void) {
        FUNC_0("", "", 1);
        FUNC_0("", "xxx", 0);
        FUNC_0("xxx", "", 1);
        FUNC_0("x", "x", 1);
        FUNC_0("x", "y", 0);
        FUNC_0("x.y", "x.y", 1);
        FUNC_0("x.y", "y.x", 0);
        FUNC_0("x.y", "x", 1);
        FUNC_0("x.y", "X", 1);
        FUNC_0("x.y", "y", 0);
        FUNC_0("x.y", "", 1);
        FUNC_0("x.y", "X", 1);
}
