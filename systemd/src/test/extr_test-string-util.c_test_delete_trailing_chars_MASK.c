
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static void FUNC_3(void) {

        char *VAR_1,
                VAR_2[] = " \n \r k \n \r ",
                VAR_3[] = "kkkkthiskkkiskkkaktestkkk",
                VAR_4[] = "abcdef";

        VAR_1 = FUNC_1(VAR_2, VAR_0);
        FUNC_0(FUNC_2(VAR_1, " \n \r k"));
        FUNC_0(VAR_1 == VAR_2);

        VAR_1 = FUNC_1(VAR_3, "kt");
        FUNC_0(FUNC_2(VAR_1, "kkkkthiskkkiskkkaktes"));
        FUNC_0(VAR_1 == VAR_3);

        VAR_1 = FUNC_1(VAR_4, VAR_0);
        FUNC_0(FUNC_2(VAR_1, "abcdef"));
        FUNC_0(VAR_1 == VAR_4);

        VAR_1 = FUNC_1(VAR_4, "fe");
        FUNC_0(FUNC_2(VAR_1, "abcd"));
        FUNC_0(VAR_1 == VAR_4);
}
