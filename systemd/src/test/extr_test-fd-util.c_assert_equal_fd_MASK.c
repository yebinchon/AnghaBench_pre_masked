
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ ssize_t ;
typedef int b ;
typedef int a ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int,int *,int) ;

__attribute__((used)) static void FUNC_3(int VAR_0, int VAR_1) {

        for (;;) {
                uint8_t VAR_2[4096], VAR_3[4096];
                ssize_t VAR_4, VAR_5;

                VAR_4 = FUNC_2(VAR_0, VAR_2, sizeof(VAR_2));
                FUNC_0(VAR_4 >= 0);

                VAR_5 = FUNC_2(VAR_1, VAR_3, sizeof(VAR_3));
                FUNC_0(VAR_5 >= 0);

                FUNC_0(VAR_4 == VAR_5);

                if (VAR_4 == 0)
                        break;

                FUNC_0(FUNC_1(VAR_2, VAR_3, VAR_4) == 0);
        }
}
