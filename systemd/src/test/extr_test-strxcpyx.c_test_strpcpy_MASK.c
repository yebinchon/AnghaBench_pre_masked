
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int target ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;
 size_t FUNC_2 (char**,size_t,char*) ;

__attribute__((used)) static void FUNC_3(void) {
        char VAR_0[25];
        char *VAR_1 = VAR_0;
        size_t VAR_2;

        VAR_2 = sizeof(VAR_0);
        VAR_2 = FUNC_2(&VAR_1, VAR_2, "12345");
        VAR_2 = FUNC_2(&VAR_1, VAR_2, "hey hey hey");
        VAR_2 = FUNC_2(&VAR_1, VAR_2, "waldo");
        VAR_2 = FUNC_2(&VAR_1, VAR_2, "ba");
        VAR_2 = FUNC_2(&VAR_1, VAR_2, "r");
        VAR_2 = FUNC_2(&VAR_1, VAR_2, "foo");

        FUNC_0(FUNC_1(VAR_0, "12345hey hey heywaldobar"));
        FUNC_0(VAR_2 == 0);
}
