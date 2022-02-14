
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int pic_height_in_map_units_minus1; int frame_mbs_only_flag; int pic_width_in_mbs_minus1; } ;
typedef TYPE_1__ h264_sequence_parameter_set_t ;
struct TYPE_7__ {unsigned int i_max_dpb_mbs; } ;
typedef TYPE_2__ h264_level_limits_t ;


 TYPE_2__* FUNC_0 (TYPE_1__ const*) ;

__attribute__((used)) static uint8_t FUNC_1( const h264_sequence_parameter_set_t *VAR_0 )
{
    const h264_level_limits_t *VAR_1 = FUNC_0( VAR_0 );
    if( VAR_1 )
    {
        unsigned VAR_2 = ( VAR_0->pic_height_in_map_units_minus1 + 1 ) *
                                         ( 2 - VAR_0->frame_mbs_only_flag );
        unsigned VAR_3 = ( VAR_0->pic_width_in_mbs_minus1 + 1 ) * VAR_2;
        uint8_t VAR_4 = VAR_1->i_max_dpb_mbs / VAR_3;
        if( VAR_4 < 16 )
            return VAR_4;
    }
    return 16;
}
