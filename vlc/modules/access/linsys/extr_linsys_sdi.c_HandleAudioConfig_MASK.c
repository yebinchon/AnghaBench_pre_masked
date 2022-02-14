
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_8__ {int i_group; int i_pair; int i_delay; int i_rate; int * p_es; } ;
typedef TYPE_1__ sdi_audio_t ;
struct TYPE_9__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_10__ {TYPE_1__* p_audios; } ;
typedef TYPE_3__ demux_sys_t ;


 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_2__*,char*,...) ;

__attribute__((used)) static void FUNC_2( demux_t *VAR_2, const uint16_t *VAR_3,
                               uint8_t VAR_4, uint8_t VAR_5 )
{
    demux_sys_t *VAR_6 = VAR_2->p_sys;

    if ( VAR_4 != 18 )
    {
        FUNC_1( VAR_2, "malformed audio config for group %u", VAR_5 );
        return;
    }

    for ( int VAR_7 = 0; VAR_7 < VAR_0; VAR_7++ )
    {
        sdi_audio_t *VAR_8 = &VAR_6->p_audios[VAR_7];
        if ( VAR_8->i_group == VAR_5 && VAR_8->p_es == ((void*)0) )
        {
            unsigned int VAR_9;

            if ( VAR_8->i_pair == 2 )
            {
                VAR_9 = (VAR_3[2] & 0xe0) >> 5;
                if ( VAR_3[7] & 0x1 )
                {
                    uint32_t VAR_10 = ((VAR_3[7] & 0x1fe) >> 1)
                                       | ((VAR_3[8] & 0x1ff) << 8)
                                       | ((VAR_3[9] & 0x1ff) << 17);
                    if ( VAR_3[9] & 0x80 )
                        VAR_8->i_delay = VAR_10 | 0xfc000000;
                    else
                        VAR_8->i_delay = VAR_10;
                }
                if ( VAR_3[13] & 0x1 )
                    FUNC_1( VAR_2, "asymetric audio is not supported" );
            }
            else
            {
                VAR_9 = (VAR_3[2] & 0xe) >> 1;
                if ( VAR_3[4] & 0x1 )
                {
                    uint32_t VAR_11 = ((VAR_3[4] & 0x1fe) >> 1)
                                       | ((VAR_3[5] & 0x1ff) << 8)
                                       | ((VAR_3[6] & 0x1ff) << 17);
                    if ( VAR_3[6] & 0x80 )
                        VAR_8->i_delay = VAR_11 | 0xfc000000;
                    else
                        VAR_8->i_delay = VAR_11;
                }
                if ( VAR_3[10] & 0x1 )
                    FUNC_1( VAR_2, "asymetric audio is not supported" );
            }

            switch ( VAR_9 )
            {
            case 0: VAR_8->i_rate = 48000; break;
            case 1: VAR_8->i_rate = 44100; break;
            case 2: VAR_8->i_rate = 32000; break;
            default:
                FUNC_1( VAR_2, "unknown rate for audio %u/%u (%u)",
                          VAR_5, VAR_6->p_audios[VAR_7].i_pair, VAR_9 );
                continue;
            }

            if( FUNC_0( VAR_2, VAR_8 ) != VAR_1 )
                return;
        }
    }
}
