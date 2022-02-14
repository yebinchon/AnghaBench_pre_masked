
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (char*,int *,int ) ;

__attribute__((used)) static void FUNC_3(void) {

        if (FUNC_2("/run", ((void*)0), VAR_0) > 0) {
                FUNC_0(FUNC_1("/run", VAR_4) > 0);
                FUNC_0(FUNC_1("/run", VAR_1) == 0);
        }
        FUNC_0(FUNC_1("/proc", VAR_3) > 0);
        FUNC_0(FUNC_1("/proc", VAR_1) == 0);
        FUNC_0(FUNC_1("/i-dont-exist", VAR_1) == -VAR_2);
}
