
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;





 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(uint8_t *VAR_0, int *VAR_1, int *VAR_2) {
        FUNC_0(*VAR_1 >= 0);

        while (*VAR_1 < *VAR_2) {
                switch(VAR_0[*VAR_1]) {
                case 128:
                        *VAR_1 += 1;
                        break;

                case 130:
                case 129:
                        *VAR_1 += 3;
                        break;

                default:
                        return;
                }
        }
}
