
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static void FUNC_1(void) {
        FUNC_0("1024", 1024);
        FUNC_0("-1024", -1024);
        FUNC_0("0", 0);

        FUNC_0("99999999999999999999999999999999999999999999999999999999", -1);
        FUNC_0("-99999999999999999999999999999999999999999999999999999999", -1);
        FUNC_0("1G", -1);
        FUNC_0("garbage", -1);
}
