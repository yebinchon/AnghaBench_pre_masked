
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int i_frmsiz; size_t i_fscod2; size_t i_numblkscod; } ;
struct vlc_a52_bitstream_info {int i_fscod; size_t i_acmod; scalar_t__ i_lfeon; TYPE_1__ eac3; } ;
struct TYPE_5__ {int i_size; unsigned int i_rate; int i_blocks_per_sync_frame; int i_bitrate; int i_samples; int b_eac3; int i_channels_conf; int i_channels; int i_chan_mode; struct vlc_a52_bitstream_info bs; } ;
typedef TYPE_2__ vlc_a52_header_t ;
typedef int uint8_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (struct vlc_a52_bitstream_info*,int const*,scalar_t__) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2( vlc_a52_header_t *VAR_5,
                                            const uint8_t *VAR_6,
                                            const uint32_t *VAR_7,
                                            const unsigned *VAR_8 )
{
    if( FUNC_0( &VAR_5->bs,
                                        &VAR_6[2],
                                        VAR_2 - 2 ) != VAR_4 )
        return VAR_3;

    const struct vlc_a52_bitstream_info *VAR_9 = &VAR_5->bs;

    VAR_5->i_size = 2 * (VAR_9->eac3.i_frmsiz + 1 );

    if( VAR_9->i_fscod == 0x03 )
    {
        VAR_5->i_rate = VAR_8[VAR_9->eac3.i_fscod2] / 2;
        VAR_5->i_blocks_per_sync_frame = 6;
    }
    else
    {
        static const int VAR_10 [4] = { 1, 2, 3, 6 };
        VAR_5->i_rate = VAR_8[VAR_9->i_fscod];
        VAR_5->i_blocks_per_sync_frame = VAR_10[VAR_9->eac3.i_numblkscod];
    }

    VAR_5->i_channels_conf = VAR_7[VAR_9->i_acmod];
    VAR_5->i_chan_mode = 0;
    if( VAR_9->i_acmod == 0 )
        VAR_5->i_chan_mode |= VAR_0;
    if( VAR_9->i_lfeon )
        VAR_5->i_channels_conf |= VAR_1;
    VAR_5->i_channels = FUNC_1( VAR_5->i_channels_conf );
    VAR_5->i_bitrate = 8 * VAR_5->i_size * VAR_5->i_rate
                        / (VAR_5->i_blocks_per_sync_frame * 256);
    VAR_5->i_samples = VAR_5->i_blocks_per_sync_frame * 256;

    VAR_5->b_eac3 = 1;
    return VAR_4;
}
