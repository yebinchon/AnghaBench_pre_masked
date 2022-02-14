
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_journal ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static void FUNC_4 (sd_journal *VAR_0, int VAR_1) {
        for (int VAR_2 = VAR_1; VAR_2 >= 1; VAR_2--) {
                int VAR_3;
                FUNC_3(VAR_0, VAR_2);
                FUNC_0(VAR_3 = FUNC_2(VAR_0));
                if (VAR_2 == 1)
                        FUNC_1(VAR_3 == 0);
                else
                        FUNC_1(VAR_3 == 1);
        }

}
