
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int pi_group_description_index; int pi_sample_count; } ;
struct TYPE_9__ {TYPE_2__ entries; } ;
struct TYPE_6__ {TYPE_4__* p_sbgp; } ;
struct TYPE_8__ {TYPE_1__ data; } ;
typedef TYPE_3__ MP4_Box_t ;
typedef TYPE_4__ MP4_Box_data_sbgp_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1( MP4_Box_t *VAR_0 )
{
    MP4_Box_data_sbgp_t *VAR_1 = VAR_0->data.p_sbgp;
    FUNC_0( VAR_1->entries.pi_sample_count );
    FUNC_0( VAR_1->entries.pi_group_description_index );
}
