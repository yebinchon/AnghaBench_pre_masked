
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static void FUNC_1(void) {
        FUNC_0("1", 1 * VAR_1);
        FUNC_0("1s", 1 * VAR_1);
        FUNC_0("100ms", 100 * VAR_0);
        FUNC_0("5min 20s", 5 * 60 * VAR_1 + 20 * VAR_1);

        FUNC_0("-1", 0);
        FUNC_0("10foo", 0);
        FUNC_0("garbage", 0);
}
