
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,unsigned long) ;
 int FUNC_2 (unsigned long*) ;

__attribute__((used)) static void FUNC_3(void) {
        int VAR_0, VAR_1;

        for (VAR_1 = 0; VAR_1 < 10; VAR_1++) {
                unsigned long VAR_2 = 0;

                VAR_0 = FUNC_2(&VAR_2);
                if (VAR_0 < 0) {
                        FUNC_0(VAR_0, "RDRAND failed: %m");
                        return;
                }

                FUNC_1("%lx\n", VAR_2);
        }
}
