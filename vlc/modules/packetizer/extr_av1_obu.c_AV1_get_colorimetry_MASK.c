
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int video_transfer_func_t ;
typedef int video_color_space_t ;
typedef int video_color_range_t ;
typedef int video_color_primaries_t ;
struct TYPE_4__ {scalar_t__ color_range; int matrix_coefficients; int transfer_characteristics; int color_primaries; int color_description_present_flag; } ;
struct TYPE_5__ {TYPE_1__ color_config; } ;
typedef TYPE_2__ av1_OBU_sequence_header_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

bool FUNC_3(const av1_OBU_sequence_header_t *VAR_2,
                         video_color_primaries_t *VAR_3,
                         video_transfer_func_t *VAR_4,
                         video_color_space_t *VAR_5,
                         video_color_range_t *VAR_6)
{
    if(!VAR_2->color_config.color_description_present_flag)
        return 0;
    *VAR_3 = FUNC_0(VAR_2->color_config.color_primaries);
    *VAR_4 = FUNC_2(VAR_2->color_config.transfer_characteristics);
    *VAR_5 = FUNC_1(VAR_2->color_config.matrix_coefficients);
    *VAR_6 = VAR_2->color_config.color_range ? VAR_0 : VAR_1;
    return 1;
}
