
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num_ticks_per_picture_minus_1; int num_units_in_display_tick; unsigned int time_scale; int equal_picture_interval; } ;
struct TYPE_5__ {TYPE_1__ timing_info; int timing_info_present_flag; } ;
typedef TYPE_2__ av1_OBU_sequence_header_t ;



bool FUNC_0(const av1_OBU_sequence_header_t *VAR_0,
                        unsigned *VAR_1, unsigned *VAR_2)
{
    if(!VAR_0->timing_info_present_flag ||
       !VAR_0->timing_info.equal_picture_interval)
        return 0;
    *VAR_1 = (1 + VAR_0->timing_info.num_ticks_per_picture_minus_1) *
           VAR_0->timing_info.num_units_in_display_tick;
    *VAR_2 = VAR_0->timing_info.time_scale;
    return 1;
}
