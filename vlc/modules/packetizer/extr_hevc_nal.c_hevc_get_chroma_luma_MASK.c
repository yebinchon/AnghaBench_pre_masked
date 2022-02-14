
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_3__ {scalar_t__ bit_depth_chroma_minus8; scalar_t__ chroma_format_idc; } ;
typedef TYPE_1__ hevc_sequence_parameter_set_t ;



bool FUNC_0( const hevc_sequence_parameter_set_t *VAR_0, uint8_t *VAR_1,
                           uint8_t *VAR_2, uint8_t *VAR_3 )
{
    *VAR_1 = VAR_0->chroma_format_idc;
    *VAR_2 = VAR_0->bit_depth_chroma_minus8 + 8;
    *VAR_3 = VAR_0->bit_depth_chroma_minus8 + 8;
    return 1;
}
