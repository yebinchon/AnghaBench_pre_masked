
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int i_frame_size; scalar_t__ syncword; int i_frame_length; int i_physical_channels; int i_rate; int i_chan_mode; int i_bitrate; } ;
typedef TYPE_1__ vlc_dts_header_t ;
typedef int uint8_t ;
typedef int uint16_t ;
typedef int bs_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,void const*,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int,int *) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6( vlc_dts_header_t *VAR_5,
                                 const void *VAR_6)
{
    bs_t VAR_7;
    FUNC_0( &VAR_7, VAR_6, VAR_2 );
    FUNC_2( &VAR_7, 32 + 1 + 5 + 1 );
    uint8_t VAR_8 = FUNC_1( &VAR_7, 7 );
    if( VAR_8 < 5 )
        return VAR_3;
    uint16_t VAR_9 = FUNC_1( &VAR_7, 14 );
    if( VAR_9 < 95 )
        return VAR_3;
    uint8_t VAR_10 = FUNC_1( &VAR_7, 6 );
    uint8_t VAR_11 = FUNC_1( &VAR_7, 4 );
    uint8_t VAR_12 = FUNC_1( &VAR_7, 5 );
    FUNC_2( &VAR_7, 1 + 1 + 1 + 1 +
             1 + 3 + 1 + 1 );
    uint8_t VAR_13 = FUNC_1( &VAR_7, 2 );

    bool VAR_14 = VAR_13 == 1 || VAR_13 == 2;

    VAR_5->i_rate = FUNC_5( VAR_11 );
    VAR_5->i_bitrate = FUNC_3( VAR_12 );
    VAR_5->i_frame_size = VAR_9 + 1;
    if( VAR_5->syncword == VAR_1 ||
        VAR_5->syncword == VAR_0 )
        VAR_5->i_frame_size = VAR_5->i_frame_size * 16 / 14;

    VAR_5->i_frame_length = (VAR_8 + 1) * 32;
    VAR_5->i_chan_mode = 0;
    VAR_5->i_physical_channels =
        FUNC_4( VAR_10, VAR_14, &VAR_5->i_chan_mode );

    if( !VAR_5->i_rate || !VAR_5->i_frame_size ||
        !VAR_5->i_frame_length || !VAR_5->i_physical_channels )
        return VAR_3;

    return VAR_4;
}
