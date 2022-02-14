
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
__attribute__((used)) static uint8_t FUNC_0( uint16_t VAR_0,
                                     uint16_t *VAR_1 )
{
    uint16_t VAR_2 = 0;
    uint8_t VAR_3 = 0;

    static const struct
    {
        int phy;
        uint8_t nb;
    } VAR_4[16] = {

        { 130, 1 },
        { 133, 2 },
        { 132, 2 },
        { 129, 1 },
        { 128, 1 },
        { 0, 2 },
        { 131, 2 },
        { 0, 1 },
        { 0, 1 },
        { 0, 2 },
        { 133, 2 },
        { 132, 2 },
        { 0, 1 },
        { 0, 2 },
        { 0, 1 },
        { 0, 2 },
    };

    for( int VAR_5=0 ; VAR_0; VAR_0 >>= 1 )
    {
        if( VAR_0 & 1 )
        {
            VAR_2 |= VAR_4[VAR_5].phy;
            VAR_3 += VAR_4[VAR_5].nb;
        }
        ++VAR_5;
    }
    *VAR_1 = VAR_2;
    return VAR_3;
}
