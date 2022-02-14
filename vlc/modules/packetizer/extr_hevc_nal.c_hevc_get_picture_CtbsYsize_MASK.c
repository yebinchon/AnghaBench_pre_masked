
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int log2_min_luma_coding_block_size_minus3; unsigned int const log2_diff_max_min_luma_coding_block_size; int pic_width_in_luma_samples; int pic_height_in_luma_samples; } ;
typedef TYPE_1__ hevc_sequence_parameter_set_t ;



__attribute__((used)) static bool FUNC_0( const hevc_sequence_parameter_set_t *VAR_0, unsigned *VAR_1, unsigned *VAR_2 )
{
    const unsigned int VAR_3 = VAR_0->log2_min_luma_coding_block_size_minus3 + 3;
    const unsigned int VAR_4 = VAR_3 + VAR_0->log2_diff_max_min_luma_coding_block_size;
    if( VAR_4 > 31 )
        return 0;
    const unsigned int VAR_5 = 1 << VAR_4;
    *VAR_1 = (VAR_0->pic_width_in_luma_samples - 1) / VAR_5 + 1;
    *VAR_2 = (VAR_0->pic_height_in_luma_samples - 1) / VAR_5 + 1;
    return 1;
}
