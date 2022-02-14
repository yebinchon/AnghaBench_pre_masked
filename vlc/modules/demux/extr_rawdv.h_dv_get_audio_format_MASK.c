
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int i_bitspersample; int i_channels; int i_rate; } ;
struct TYPE_6__ {TYPE_1__ audio; } ;
typedef TYPE_2__ es_format_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static inline void FUNC_1( es_format_t *VAR_2,
                                        const uint8_t *VAR_3 )
{

    FUNC_0( VAR_2, VAR_0, VAR_1 );

    VAR_2->audio.i_bitspersample = 16;
    VAR_2->audio.i_channels = 2;
    switch( (VAR_3[4-1] >> 3) & 0x07 )
    {
    case 0:
        VAR_2->audio.i_rate = 48000;
        break;
    case 1:
        VAR_2->audio.i_rate = 44100;
        break;
    case 2:
    default:
        VAR_2->audio.i_rate = 32000;
        break;
    }
}
