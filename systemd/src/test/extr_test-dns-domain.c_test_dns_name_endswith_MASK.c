
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static void FUNC_1(void) {
        FUNC_0("", "", 1);
        FUNC_0("", "xxx", 0);
        FUNC_0("xxx", "", 1);
        FUNC_0("x", "x", 1);
        FUNC_0("x", "y", 0);
        FUNC_0("x.y", "y", 1);
        FUNC_0("x.y", "Y", 1);
        FUNC_0("x.y", "x", 0);
        FUNC_0("x.y.z", "Z", 1);
        FUNC_0("x.y.z", "y.Z", 1);
        FUNC_0("x.y.z", "x.y.Z", 1);
        FUNC_0("x.y.z", "waldo", 0);
        FUNC_0("x.y.z.u.v.w", "y.z", 0);
        FUNC_0("x.y.z.u.v.w", "u.v.w", 1);
        FUNC_0("x.y\001.z", "waldo", -VAR_0);
}
