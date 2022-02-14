
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(void) {
        int VAR_4;

        VAR_4 = FUNC_3("/sys/fs/cgroup", VAR_3|VAR_1|VAR_0|VAR_2);
        FUNC_0(VAR_4 >= 0);
        if (FUNC_2(VAR_4)) {
                VAR_4 = FUNC_4(VAR_4);
                VAR_4 = FUNC_3("/sys/fs/cgroup/systemd", VAR_3|VAR_1|VAR_0|VAR_2);
                FUNC_0(VAR_4 >= 0);
        }
        FUNC_0(FUNC_1(VAR_4));
        VAR_4 = FUNC_4(VAR_4);
}
