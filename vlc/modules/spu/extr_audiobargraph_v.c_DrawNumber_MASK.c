
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int plane_t ;


 int FUNC_0 (int *,int,int,int ,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(plane_t *VAR_1, int VAR_2, const uint8_t VAR_3[5], int VAR_4)
{
    for (int VAR_5 = 0; VAR_5 < 5; VAR_5++) {
        uint8_t VAR_6 = VAR_3[VAR_5];
        for (int VAR_7 = 0; VAR_7 < 7; VAR_7++) {
            VAR_6 <<= 1;
            if (VAR_6 & 0x80)
                FUNC_0(VAR_1, VAR_2 - VAR_4 + 2 - 1 - VAR_5, 12 + VAR_7, VAR_0, 1);
        }
    }
}
