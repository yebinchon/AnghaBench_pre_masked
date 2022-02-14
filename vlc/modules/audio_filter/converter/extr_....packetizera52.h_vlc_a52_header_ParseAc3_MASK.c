
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int i_dsurmod; } ;
struct vlc_a52_bitstream_info {size_t i_acmod; int i_frmsizcod; size_t i_fscod; int i_bsid; scalar_t__ i_lfeon; TYPE_1__ ac3; } ;
struct TYPE_5__ {int i_bitrate; unsigned int i_rate; int i_size; int i_blocks_per_sync_frame; int i_samples; int b_eac3; int i_channels_conf; int i_channels; int i_chan_mode; struct vlc_a52_bitstream_info bs; } ;
typedef TYPE_2__ vlc_a52_header_t ;
typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int,int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (struct vlc_a52_bitstream_info*,int const*,scalar_t__) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline int FUNC_3( vlc_a52_header_t *VAR_6,
                                           const uint8_t *VAR_7,
                                           const uint32_t *VAR_8,
                                           const unsigned *VAR_9 )
{
    if( FUNC_1( &VAR_6->bs,
                                       &VAR_7[4],
                                       VAR_3 - 4 ) != VAR_5 )
        return VAR_4;


    static const uint16_t VAR_10[][3] = {

        { 96, 69, 64 },
        { 96, 70, 64 },
        { 120, 87, 80 },
        { 120, 88, 80 },
        { 144, 104, 96 },
        { 144, 105, 96 },
        { 168, 121, 112 },
        { 168, 122, 112 },
        { 192, 139, 128 },
        { 192, 140, 128 },
        { 240, 174, 160 },
        { 240, 175, 160 },
        { 288, 208, 192 },
        { 288, 209, 192 },
        { 336, 243, 224 },
        { 336, 244, 224 },
        { 384, 278, 256 },
        { 384, 279, 256 },
        { 480, 348, 320 },
        { 480, 349, 320 },
        { 576, 417, 384 },
        { 576, 418, 384 },
        { 672, 487, 448 },
        { 672, 488, 448 },
        { 768, 557, 512 },
        { 768, 558, 512 },
        { 960, 696, 640 },
        { 960, 697, 640 },
        { 1152, 835, 768 },
        { 1152, 836, 768 },
        { 1344, 975, 896 },
        { 1344, 976, 896 },
        { 1536, 1114, 1024 },
        { 1536, 1115, 1024 },
        { 1728, 1253, 1152 },
        { 1728, 1254, 1152 },
        { 1920, 1393, 1280 },
        { 1920, 1394, 1280 }
    };
    static const uint16_t VAR_11[] = {
        32, 40, 48, 56,
        64, 80, 96, 112,
        128, 160, 192, 224,
        256, 320, 384, 448,
        512, 576, 640
    };

    const struct vlc_a52_bitstream_info *VAR_12 = &VAR_6->bs;

    VAR_6->i_channels_conf = VAR_8[VAR_12->i_acmod];
    VAR_6->i_chan_mode = 0;
    if( VAR_12->ac3.i_dsurmod == 2 )
        VAR_6->i_chan_mode |= VAR_0;
    if( VAR_12->i_acmod == 0 )
        VAR_6->i_chan_mode |= VAR_1;

    if( VAR_12->i_lfeon )
        VAR_6->i_channels_conf |= VAR_2;

    VAR_6->i_channels = FUNC_2(VAR_6->i_channels_conf);

    const unsigned VAR_13 = FUNC_0(VAR_12->i_bsid, 8, 11) - 8;
    VAR_6->i_bitrate = (VAR_11[VAR_12->i_frmsizcod >> 1] * 1000)
                        >> VAR_13;
    VAR_6->i_rate = VAR_9[VAR_12->i_fscod] >> VAR_13;

    VAR_6->i_size = VAR_10[VAR_12->i_frmsizcod]
                                                [2 - VAR_12->i_fscod] * 2;
    VAR_6->i_blocks_per_sync_frame = 6;
    VAR_6->i_samples = VAR_6->i_blocks_per_sync_frame * 256;

    VAR_6->b_eac3 = 0;
    return VAR_5;
}
