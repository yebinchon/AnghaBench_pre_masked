
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int*) ;

__attribute__((used)) static void FUNC_2(void) {
        int VAR_0 = -1;

        FUNC_0(FUNC_1("pri", &VAR_0) == 0);
        FUNC_0(VAR_0 == -1);

        FUNC_0(FUNC_1("pri=11", &VAR_0) == 1);
        FUNC_0(VAR_0 == 11);

        FUNC_0(FUNC_1("opt,pri=12,opt", &VAR_0) == 1);
        FUNC_0(VAR_0 == 12);

        FUNC_0(FUNC_1("opt,opt,pri=12,pri=13", &VAR_0) == 1);
        FUNC_0(VAR_0 == 13);
}
