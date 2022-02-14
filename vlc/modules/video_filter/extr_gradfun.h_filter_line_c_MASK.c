
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(uint8_t *VAR_0, uint8_t *VAR_1, uint16_t *VAR_2,
                          int VAR_3, int VAR_4, const uint16_t *VAR_5)
{
    for( int VAR_6 = 0; VAR_6 < VAR_3; VAR_6++, VAR_2 += VAR_6&1 ) {
        int VAR_7 = VAR_1[VAR_6]<<7;
        int VAR_8 = VAR_2[0] - VAR_7;
        int VAR_9 = FUNC_1(VAR_8) * VAR_4 >> 16;
        VAR_9 = FUNC_0(0, 127-VAR_9);
        VAR_9 = VAR_9*VAR_9*VAR_8 >> 14;
        VAR_7 += VAR_9 + VAR_5[VAR_6&7];
        VAR_0[VAR_6] = FUNC_2(VAR_7>>7);
    }
}
