
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(void) {
        char VAR_0[] = "/tmp/test-test-close_nointr.XXXXXX";
        int VAR_1;

        VAR_1 = FUNC_2(VAR_0);
        FUNC_0(VAR_1 >= 0);
        FUNC_0(FUNC_1(VAR_1) >= 0);
        FUNC_0(FUNC_1(VAR_1) < 0);

        FUNC_3(VAR_0);
}
