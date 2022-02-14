
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(int16_t *VAR_1, int16_t *VAR_2, int VAR_3)
{
    const int VAR_4 = VAR_0;
    const int VAR_5 = 7 + 8;

    for (int VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
        for (int VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
            const int VAR_8 = VAR_2[VAR_6 * VAR_4 + VAR_7];
            int VAR_9;
            if (VAR_8 >= 0)
                VAR_9 = ( VAR_8 * VAR_3 + (1 << (VAR_5-1)) - 1) >> VAR_5;
            else
                VAR_9 = -((-VAR_8 * VAR_3 + (1 << (VAR_5-1)) - 1) >> VAR_5);
            VAR_1[VAR_6 * VAR_4 + VAR_7] = VAR_9;
        }
    }
}
