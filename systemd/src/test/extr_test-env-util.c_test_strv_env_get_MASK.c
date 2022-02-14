
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** FUNC_0 (char*,char*,char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char**,char*) ;

__attribute__((used)) static void FUNC_4(void) {
        char **VAR_0;

        VAR_0 = FUNC_0("ONE_OR_TWO=1", "THREE=3", "ONE_OR_TWO=2", "FOUR=4");

        FUNC_1(FUNC_2(FUNC_3(VAR_0, "ONE_OR_TWO"), "2"));
        FUNC_1(FUNC_2(FUNC_3(VAR_0, "THREE"), "3"));
        FUNC_1(FUNC_2(FUNC_3(VAR_0, "FOUR"), "4"));
}
