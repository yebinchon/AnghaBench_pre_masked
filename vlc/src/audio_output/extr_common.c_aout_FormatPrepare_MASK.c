
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int i_channels; int i_bitspersample; int i_bytes_per_frame; int i_frame_length; int i_format; } ;
typedef TYPE_1__ audio_sample_format_t ;


 int FUNC_0 (int ) ;
 unsigned int FUNC_1 (TYPE_1__*) ;

void FUNC_2( audio_sample_format_t * VAR_0 )
{

    unsigned VAR_1 = FUNC_1( VAR_0 );
    if( VAR_1 > 0 )
        VAR_0->i_channels = VAR_1;
    VAR_0->i_bitspersample = FUNC_0( VAR_0->i_format );
    if( VAR_0->i_bitspersample > 0 )
    {
        VAR_0->i_bytes_per_frame = ( VAR_0->i_bitspersample / 8 )
                                    * VAR_0->i_channels;
        VAR_0->i_frame_length = 1;
    }
}
