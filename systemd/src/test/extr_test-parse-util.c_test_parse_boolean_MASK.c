
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(void) {
        FUNC_0(FUNC_1("1") == 1);
        FUNC_0(FUNC_1("y") == 1);
        FUNC_0(FUNC_1("Y") == 1);
        FUNC_0(FUNC_1("yes") == 1);
        FUNC_0(FUNC_1("YES") == 1);
        FUNC_0(FUNC_1("true") == 1);
        FUNC_0(FUNC_1("TRUE") == 1);
        FUNC_0(FUNC_1("on") == 1);
        FUNC_0(FUNC_1("ON") == 1);

        FUNC_0(FUNC_1("0") == 0);
        FUNC_0(FUNC_1("n") == 0);
        FUNC_0(FUNC_1("N") == 0);
        FUNC_0(FUNC_1("no") == 0);
        FUNC_0(FUNC_1("NO") == 0);
        FUNC_0(FUNC_1("false") == 0);
        FUNC_0(FUNC_1("FALSE") == 0);
        FUNC_0(FUNC_1("off") == 0);
        FUNC_0(FUNC_1("OFF") == 0);

        FUNC_0(FUNC_1("garbage") < 0);
        FUNC_0(FUNC_1("") < 0);
        FUNC_0(FUNC_1("full") < 0);
}
