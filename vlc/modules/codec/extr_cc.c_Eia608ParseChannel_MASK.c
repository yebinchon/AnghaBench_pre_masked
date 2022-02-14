
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int i_channel; } ;
typedef TYPE_1__ eia608_t ;



__attribute__((used)) static void FUNC_0( eia608_t *VAR_0, const uint8_t VAR_1[2] )
{

    static const int VAR_2[16] = {
        0, 1, 1, 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0
    };
    if( VAR_2[VAR_1[0] & 0xf] == VAR_2[VAR_1[0] >> 4] ||
        VAR_2[VAR_1[1] & 0xf] == VAR_2[ VAR_1[1] >> 4] )
    {
        VAR_0->i_channel = -1;
        return;
    }


    const int VAR_3 = VAR_1[0] & 0x7f;
    if( VAR_3 >= 0x10 && VAR_3 <= 0x1f )
        VAR_0->i_channel = 1 + ((VAR_3 & 0x08) != 0);
    else if( VAR_3 < 0x10 )
        VAR_0->i_channel = 3;
}
