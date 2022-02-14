
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int max_frame_height_minus_1; unsigned int max_frame_width_minus_1; } ;
typedef TYPE_1__ av1_OBU_sequence_header_t ;



void FUNC_0(const av1_OBU_sequence_header_t *VAR_0, unsigned *VAR_1, unsigned *VAR_2)
{
    *VAR_2 = 1 + VAR_0->max_frame_height_minus_1;
    *VAR_1 = 1 + VAR_0->max_frame_width_minus_1;
}
