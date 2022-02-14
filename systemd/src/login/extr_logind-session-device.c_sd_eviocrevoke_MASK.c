
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int,int ,int *) ;
 int FUNC_2 (scalar_t__,char*) ;

__attribute__((used)) static void FUNC_3(int VAR_3) {
        static bool VAR_4 = 0;

        FUNC_0(VAR_3 >= 0);

        if (FUNC_1(VAR_3, VAR_1, ((void*)0)) < 0) {

                if (VAR_2 == VAR_0 && !VAR_4) {
                        FUNC_2(VAR_2, "Kernel does not support evdev-revocation: %m");
                        VAR_4 = 1;
                }
        }
}
