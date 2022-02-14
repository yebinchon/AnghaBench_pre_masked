
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
typedef int uint8_t ;
typedef int subpicture_t ;
typedef int eia608_status_t ;
struct TYPE_6__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ decoder_t ;
struct TYPE_7__ {int const i_field; int p_dtvcc; scalar_t__ p_cea708; scalar_t__ p_eia608; int i_channel; } ;
typedef TYPE_2__ decoder_sys_t ;


 int FUNC_0 (int ,scalar_t__ const,int const*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__,int ,int const*) ;
 int * FUNC_3 (TYPE_1__*,scalar_t__,scalar_t__ const) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (unsigned int,int) ;

__attribute__((used)) static void FUNC_7( decoder_t *VAR_2, vlc_tick_t VAR_3,
                     const uint8_t *VAR_4, size_t VAR_5 )
{
    decoder_sys_t *VAR_6 = VAR_2->p_sys;

    unsigned VAR_7 = 0;
    while( VAR_5 >= 3 )
    {
        if( (VAR_4[0] & 0x04) )
        {
            const vlc_tick_t VAR_8 = VAR_3 + FUNC_6(VAR_7, 1200/3);

            if ( VAR_6->p_eia608 &&
                (VAR_4[0] & 0x03) == VAR_6->i_field )
            {
                eia608_status_t VAR_9 = FUNC_2( VAR_6->p_eia608,
                                                        VAR_6->i_channel, &VAR_4[1] );
                if( VAR_9 & (VAR_1 | VAR_0) )
                {
                    FUNC_1(FUNC_5("\n"));
                    subpicture_t *VAR_10 = FUNC_3( VAR_2, VAR_6->p_eia608, VAR_8 );
                    if( VAR_10 )
                        FUNC_4( VAR_2, VAR_10 );
                }
            }
            else if( VAR_6->p_cea708 && (VAR_4[0] & 0x03) >= 2 )
            {
                FUNC_0( VAR_6->p_dtvcc, VAR_8, VAR_4 );
            }
        }

        VAR_7++;

        VAR_5 -= 3;
        VAR_4 += 3;
    }
}
