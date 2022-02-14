
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct av1_timing_info_s {int num_ticks_per_picture_minus_1; scalar_t__ equal_picture_interval; void* time_scale; void* num_units_in_display_tick; } ;
typedef int bs_t ;


 void* FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static bool FUNC_3(bs_t *VAR_0, struct av1_timing_info_s *VAR_1)
{
    VAR_1->num_units_in_display_tick = FUNC_0(VAR_0, 32);
    VAR_1->time_scale = FUNC_0(VAR_0, 32);
    VAR_1->equal_picture_interval = FUNC_1(VAR_0);
    if(VAR_1->equal_picture_interval)
        VAR_1->num_ticks_per_picture_minus_1 = FUNC_2(VAR_0);
    return 1;
}
