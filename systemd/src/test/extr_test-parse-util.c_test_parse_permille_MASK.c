
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(void) {
        FUNC_0(FUNC_1("") == -VAR_0);
        FUNC_0(FUNC_1("foo") == -VAR_0);
        FUNC_0(FUNC_1("0") == -VAR_0);
        FUNC_0(FUNC_1("50") == -VAR_0);
        FUNC_0(FUNC_1("100") == -VAR_0);
        FUNC_0(FUNC_1("-1") == -VAR_0);

        FUNC_0(FUNC_1("0‰") == 0);
        FUNC_0(FUNC_1("555‰") == 555);
        FUNC_0(FUNC_1("1000‰") == 1000);
        FUNC_0(FUNC_1("-7‰") == -VAR_1);
        FUNC_0(FUNC_1("1007‰") == -VAR_1);
        FUNC_0(FUNC_1("‰") == -VAR_0);
        FUNC_0(FUNC_1("‰‰") == -VAR_0);
        FUNC_0(FUNC_1("‰1") == -VAR_0);
        FUNC_0(FUNC_1("1‰‰") == -VAR_0);
        FUNC_0(FUNC_1("3.2‰") == -VAR_0);

        FUNC_0(FUNC_1("0%") == 0);
        FUNC_0(FUNC_1("55%") == 550);
        FUNC_0(FUNC_1("55.5%") == 555);
        FUNC_0(FUNC_1("100%") == 1000);
        FUNC_0(FUNC_1("-7%") == -VAR_1);
        FUNC_0(FUNC_1("107%") == -VAR_1);
        FUNC_0(FUNC_1("%") == -VAR_0);
        FUNC_0(FUNC_1("%%") == -VAR_0);
        FUNC_0(FUNC_1("%1") == -VAR_0);
        FUNC_0(FUNC_1("1%%") == -VAR_0);
        FUNC_0(FUNC_1("3.21%") == -VAR_0);
}
