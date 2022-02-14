
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;

__attribute__((used)) static bool FUNC_3(void) {
        static int VAR_0 = -1;





        if (VAR_0 < 0) {
                int VAR_1;

                VAR_1 = FUNC_1("SYSTEMD_URLIFY");
                if (VAR_1 >= 0)
                        VAR_0 = VAR_1;
                else
                        VAR_0 = FUNC_0() && !FUNC_2();
        }

        return VAR_0;
}
