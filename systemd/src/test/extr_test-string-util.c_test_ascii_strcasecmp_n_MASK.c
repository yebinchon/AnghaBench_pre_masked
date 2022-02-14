
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(void) {

        FUNC_1(FUNC_0("", "", 0) == 0);
        FUNC_1(FUNC_0("", "", 1) == 0);
        FUNC_1(FUNC_0("", "a", 1) < 0);
        FUNC_1(FUNC_0("", "a", 2) < 0);
        FUNC_1(FUNC_0("a", "", 1) > 0);
        FUNC_1(FUNC_0("a", "", 2) > 0);
        FUNC_1(FUNC_0("a", "a", 1) == 0);
        FUNC_1(FUNC_0("a", "a", 2) == 0);
        FUNC_1(FUNC_0("a", "b", 1) < 0);
        FUNC_1(FUNC_0("a", "b", 2) < 0);
        FUNC_1(FUNC_0("b", "a", 1) > 0);
        FUNC_1(FUNC_0("b", "a", 2) > 0);
        FUNC_1(FUNC_0("xxxxyxxxx", "xxxxYxxxx", 9) == 0);
        FUNC_1(FUNC_0("xxxxxxxxx", "xxxxyxxxx", 9) < 0);
        FUNC_1(FUNC_0("xxxxXxxxx", "xxxxyxxxx", 9) < 0);
        FUNC_1(FUNC_0("xxxxxxxxx", "xxxxYxxxx", 9) < 0);
        FUNC_1(FUNC_0("xxxxXxxxx", "xxxxYxxxx", 9) < 0);

        FUNC_1(FUNC_0("xxxxYxxxx", "xxxxYxxxx", 9) == 0);
        FUNC_1(FUNC_0("xxxxyxxxx", "xxxxxxxxx", 9) > 0);
        FUNC_1(FUNC_0("xxxxyxxxx", "xxxxXxxxx", 9) > 0);
        FUNC_1(FUNC_0("xxxxYxxxx", "xxxxxxxxx", 9) > 0);
        FUNC_1(FUNC_0("xxxxYxxxx", "xxxxXxxxx", 9) > 0);
}
