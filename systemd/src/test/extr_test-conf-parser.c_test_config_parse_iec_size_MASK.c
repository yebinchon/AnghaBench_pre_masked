
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static void FUNC_1(void) {
        FUNC_0("1024", 1024);
        FUNC_0("2K", 2048);
        FUNC_0("10M", 10 * 1024 * 1024);
        FUNC_0("1G", 1 * 1024 * 1024 * 1024);
        FUNC_0("0G", 0);
        FUNC_0("0", 0);

        FUNC_0("-982", 0);
        FUNC_0("49874444198739873000000G", 0);
        FUNC_0("garbage", 0);
}
