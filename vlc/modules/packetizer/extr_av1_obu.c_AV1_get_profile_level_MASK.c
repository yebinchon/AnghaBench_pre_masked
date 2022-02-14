
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int seq_profile; TYPE_1__* operating_points; } ;
typedef TYPE_2__ av1_OBU_sequence_header_t ;
struct TYPE_4__ {int seq_level_idx; int seq_tier; } ;



void FUNC_0(const av1_OBU_sequence_header_t *VAR_0,
                           int *VAR_1, int *VAR_2, int *VAR_3)
{
    *VAR_1 = VAR_0->seq_profile;
    *VAR_2 = VAR_0->operating_points[0].seq_level_idx;
    *VAR_3 = VAR_0->operating_points[0].seq_tier;
}
