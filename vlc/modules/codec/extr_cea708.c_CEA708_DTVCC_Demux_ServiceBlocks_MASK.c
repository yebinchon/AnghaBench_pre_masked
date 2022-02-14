
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int uint8_t ;
struct TYPE_3__ {int priv; int (* p_callback ) (int ,int,int ,int const*,int const) ;} ;
typedef TYPE_1__ cea708_demux_t ;


 int FUNC_0 (int ,int,int ,int const*,int const) ;

__attribute__((used)) static void FUNC_1( cea708_demux_t *VAR_0, vlc_tick_t VAR_1,
                                              const uint8_t *VAR_2, size_t VAR_3 )
{
    while( VAR_3 >= 2 )
    {
        uint8_t VAR_4 = VAR_2[0] >> 5;
        const uint8_t VAR_5 = VAR_2[0] & 0x1F;

        if( VAR_5 == 0 || VAR_5 > VAR_3 - 1 )
        {
            return;
        }
        else if( VAR_4 == 0x07 )
        {
            VAR_4 = VAR_2[1] & 0x3F;
            if( VAR_4 < 0x07 )
                return;
            VAR_2 += 1; VAR_3 -= 1;
        }
        VAR_2 += 1; VAR_3 -= 1;

        VAR_0->p_callback( VAR_0->priv, VAR_4, VAR_1, VAR_2, VAR_5 );

        VAR_2 += VAR_5;
        VAR_3 -= VAR_5;
    }
}
