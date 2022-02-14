
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int target ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;
 size_t FUNC_2 (char**,int,char*,...) ;

__attribute__((used)) static void FUNC_3(void) {
        char VAR_0[25];
        char *VAR_1 = VAR_0;
        size_t VAR_2;

        VAR_2 = sizeof(VAR_0);
        VAR_2 = FUNC_2(&VAR_1, VAR_2, "space left: %zu. ", VAR_2);
        VAR_2 = FUNC_2(&VAR_1, VAR_2, "foo%s", "bar");

        FUNC_0(FUNC_1(VAR_0, "space left: 25. foobar"));
        FUNC_0(VAR_2 == 3);


        VAR_1 = VAR_0;
        VAR_2 = FUNC_2(&VAR_1, 12, "00 left: %i. ", 999);
        FUNC_0(FUNC_1(VAR_0, "00 left: 99"));
        FUNC_0(VAR_2 == 0);
        FUNC_0(VAR_0[12] == '2');
}
