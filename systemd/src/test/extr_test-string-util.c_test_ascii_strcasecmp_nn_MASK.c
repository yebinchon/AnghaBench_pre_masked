
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,int,char*,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(void) {
        FUNC_1(FUNC_0("", 0, "", 0) == 0);
        FUNC_1(FUNC_0("", 0, "", 1) < 0);
        FUNC_1(FUNC_0("", 1, "", 0) > 0);
        FUNC_1(FUNC_0("", 1, "", 1) == 0);

        FUNC_1(FUNC_0("aaaa", 4, "aaAa", 4) == 0);
        FUNC_1(FUNC_0("aaa", 3, "aaAa", 4) < 0);
        FUNC_1(FUNC_0("aaa", 4, "aaAa", 4) < 0);
        FUNC_1(FUNC_0("aaaa", 4, "aaA", 3) > 0);
        FUNC_1(FUNC_0("aaaa", 4, "AAA", 4) > 0);

        FUNC_1(FUNC_0("aaaa", 4, "bbbb", 4) < 0);
        FUNC_1(FUNC_0("aaAA", 4, "BBbb", 4) < 0);
        FUNC_1(FUNC_0("BBbb", 4, "aaaa", 4) > 0);
}
