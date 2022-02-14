
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(void) {
        int VAR_1[3];
        char VAR_2[] = "/tmp/test-close-many.XXXXXX";
        char VAR_3[] = "/tmp/test-close-many.XXXXXX";
        char VAR_4[] = "/tmp/test-close-many.XXXXXX";

        VAR_1[0] = FUNC_3(VAR_2);
        VAR_1[1] = FUNC_3(VAR_3);
        VAR_1[2] = FUNC_3(VAR_4);

        FUNC_1(VAR_1, 2);

        FUNC_0(FUNC_2(VAR_1[0], VAR_0) == -1);
        FUNC_0(FUNC_2(VAR_1[1], VAR_0) == -1);
        FUNC_0(FUNC_2(VAR_1[2], VAR_0) >= 0);

        FUNC_4(VAR_1[2]);

        FUNC_5(VAR_2);
        FUNC_5(VAR_3);
        FUNC_5(VAR_4);
}
