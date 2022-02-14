
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ int16_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__ const) ;

__attribute__((used)) static void FUNC_1(uint8_t *VAR_1, size_t VAR_2,
                       const uint8_t *VAR_3, size_t VAR_4,
                       const int16_t *VAR_5,
                       int VAR_6, int VAR_7)
{
    for (int VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
        for (int VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
            VAR_1[VAR_8 * VAR_2 + VAR_9] =
                FUNC_0(VAR_3[VAR_8 * VAR_4 + VAR_9] + VAR_5[VAR_8 * VAR_0 +VAR_9]);
        }
    }
}
