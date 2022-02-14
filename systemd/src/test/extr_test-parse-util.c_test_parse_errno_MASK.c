
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(void) {
        FUNC_0(FUNC_1("EILSEQ") == VAR_0);
        FUNC_0(FUNC_1("EINVAL") == VAR_1);
        FUNC_0(FUNC_1("0") == 0);
        FUNC_0(FUNC_1("1") == 1);
        FUNC_0(FUNC_1("4095") == 4095);

        FUNC_0(FUNC_1("-1") == -VAR_2);
        FUNC_0(FUNC_1("-3") == -VAR_2);
        FUNC_0(FUNC_1("4096") == -VAR_2);

        FUNC_0(FUNC_1("") == -VAR_1);
        FUNC_0(FUNC_1("12.3") == -VAR_1);
        FUNC_0(FUNC_1("123junk") == -VAR_1);
        FUNC_0(FUNC_1("junk123") == -VAR_1);
        FUNC_0(FUNC_1("255EILSEQ") == -VAR_1);
        FUNC_0(FUNC_1("EINVAL12") == -VAR_1);
        FUNC_0(FUNC_1("-EINVAL") == -VAR_1);
        FUNC_0(FUNC_1("EINVALaaa") == -VAR_1);
}
