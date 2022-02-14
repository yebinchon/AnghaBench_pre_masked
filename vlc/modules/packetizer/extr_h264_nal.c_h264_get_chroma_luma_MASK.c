
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int i_bit_depth_chroma; int i_bit_depth_luma; int i_chroma_idc; } ;
typedef TYPE_1__ h264_sequence_parameter_set_t ;



bool FUNC_0( const h264_sequence_parameter_set_t *VAR_0, uint8_t *VAR_1,
                           uint8_t *VAR_2, uint8_t *VAR_3 )
{
    *VAR_1 = VAR_0->i_chroma_idc;
    *VAR_2 = VAR_0->i_bit_depth_luma;
    *VAR_3 = VAR_0->i_bit_depth_chroma;
    return 1;
}
