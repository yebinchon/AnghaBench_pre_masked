
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int*) ;

__attribute__((used)) static void FUNC_2(void) {
        int VAR_2;

        FUNC_0(FUNC_1("0", &VAR_2) >= 0 && VAR_2 == 0);
        FUNC_0(FUNC_1("+0", &VAR_2) >= 0 && VAR_2 == 0);
        FUNC_0(FUNC_1("-1", &VAR_2) >= 0 && VAR_2 == -1);
        FUNC_0(FUNC_1("-2", &VAR_2) >= 0 && VAR_2 == -2);
        FUNC_0(FUNC_1("1", &VAR_2) >= 0 && VAR_2 == 1);
        FUNC_0(FUNC_1("2", &VAR_2) >= 0 && VAR_2 == 2);
        FUNC_0(FUNC_1("+1", &VAR_2) >= 0 && VAR_2 == 1);
        FUNC_0(FUNC_1("+2", &VAR_2) >= 0 && VAR_2 == 2);
        FUNC_0(FUNC_1("-20", &VAR_2) >= 0 && VAR_2 == -20);
        FUNC_0(FUNC_1("19", &VAR_2) >= 0 && VAR_2 == 19);
        FUNC_0(FUNC_1("+19", &VAR_2) >= 0 && VAR_2 == 19);

        FUNC_0(FUNC_1("", &VAR_2) == -VAR_0);
        FUNC_0(FUNC_1("-", &VAR_2) == -VAR_0);
        FUNC_0(FUNC_1("+", &VAR_2) == -VAR_0);
        FUNC_0(FUNC_1("xx", &VAR_2) == -VAR_0);
        FUNC_0(FUNC_1("-50", &VAR_2) == -VAR_1);
        FUNC_0(FUNC_1("50", &VAR_2) == -VAR_1);
        FUNC_0(FUNC_1("+50", &VAR_2) == -VAR_1);
        FUNC_0(FUNC_1("-21", &VAR_2) == -VAR_1);
        FUNC_0(FUNC_1("20", &VAR_2) == -VAR_1);
        FUNC_0(FUNC_1("+20", &VAR_2) == -VAR_1);
}
