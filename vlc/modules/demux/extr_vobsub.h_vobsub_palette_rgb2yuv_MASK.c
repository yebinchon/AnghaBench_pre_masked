
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline void FUNC_2( const uint32_t *VAR_0, uint32_t *VAR_1 )
{
    int VAR_2;
    for( VAR_2 = 0; VAR_2 < 16; VAR_2++ )
    {
        uint8_t VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
        VAR_3 = (VAR_0[VAR_2] >> 16) & 0xff;
        VAR_4 = (VAR_0[VAR_2] >> 8) & 0xff;
        VAR_5 = (VAR_0[VAR_2] >> 0) & 0xff;
        VAR_6 = (uint8_t) FUNC_0(FUNC_1(VAR_3 * 2104 + VAR_4 * 4130 + VAR_5 * 802 + 4096 + 131072) >> 13, 235);
        VAR_7 = (uint8_t) FUNC_0(FUNC_1(VAR_3 * -1214 + VAR_4 * -2384 + VAR_5 * 3598 + 4096 + 1048576) >> 13, 240);
        VAR_8 = (uint8_t) FUNC_0(FUNC_1(VAR_3 * 3598 + VAR_4 * -3013 + VAR_5 * -585 + 4096 + 1048576) >> 13, 240);
        VAR_1[VAR_2] = (VAR_6&0xff)<<16 | (VAR_8&0xff)<<8 | (VAR_7&0xff);
    }
}
