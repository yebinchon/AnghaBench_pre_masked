
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 unsigned long FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,unsigned long) ;

__attribute__((used)) static void FUNC_3(void) {
        unsigned long VAR_2 = (unsigned long)VAR_0;

        if (FUNC_2(VAR_1, VAR_2) < 0) {
                for (VAR_2--; VAR_2 > 0; VAR_2 --)
                        if (FUNC_2(VAR_1, VAR_2) >= 0)
                                break;
        } else {
                for (;; VAR_2++)
                        if (FUNC_2(VAR_1, VAR_2+1) < 0)
                                break;
        }

        FUNC_0(VAR_2 != 0);
        FUNC_0(VAR_2 == FUNC_1());
}
