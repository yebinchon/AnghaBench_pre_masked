
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int i_rate; int i_frame_length; int i_bitrate; int i_physical_channels; } ;
typedef TYPE_1__ vlc_dts_header_t ;
typedef int uint8_t ;
typedef int uint16_t ;
typedef int bs_t ;


 unsigned int FUNC_0 (unsigned int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,void const*,int ) ;
 void* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int,int *) ;

__attribute__((used)) static int FUNC_5( vlc_dts_header_t *VAR_3,
                                             const void *VAR_4 )
{
    bs_t VAR_5;
    FUNC_1( &VAR_5, VAR_4, VAR_0 );
    FUNC_3( &VAR_5, 32 );
    uint8_t VAR_6 = FUNC_2( &VAR_5, 8 );
    if( VAR_6 != 0x02 )
        return VAR_1;
    VAR_3->i_rate = FUNC_2( &VAR_5, 8 );

    const unsigned int VAR_7[] = {
        8000, 16000, 32000,
        0, 0,
        22050, 44100,
        0, 0, 0,
        12000, 24000, 48000,
    };
    if(VAR_3->i_rate >= FUNC_0(VAR_7))
        return VAR_1;
    VAR_3->i_rate = VAR_7[VAR_3->i_rate];
    if( VAR_3->i_rate < 16000 )
        VAR_3->i_frame_length = 1024;
    else if( VAR_3->i_rate < 32000 )
        VAR_3->i_frame_length = 2048;
    else
        VAR_3->i_frame_length = 4096;

    uint16_t VAR_8 = FUNC_2( &VAR_5, 16 );
    FUNC_4( VAR_8, &VAR_3->i_physical_channels );
    FUNC_3( &VAR_5, 16 );
    FUNC_3( &VAR_5, 8 );
    uint16_t VAR_9 = FUNC_2( &VAR_5, 8 );
    FUNC_3( &VAR_5, 16 );
    uint16_t VAR_10 = FUNC_2( &VAR_5, 16 );
    VAR_3->i_bitrate = VAR_10 | ((VAR_9 & 0xF0) << 12);
    return VAR_2;
}
