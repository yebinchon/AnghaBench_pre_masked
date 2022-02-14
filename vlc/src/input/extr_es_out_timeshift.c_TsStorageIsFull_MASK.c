
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ i_cmd_w; scalar_t__ i_file_size; scalar_t__ i_file_max; scalar_t__ i_cmd_max; } ;
typedef TYPE_4__ ts_storage_t ;
struct TYPE_9__ {TYPE_1__* p_block; } ;
struct TYPE_10__ {TYPE_2__ send; } ;
struct TYPE_12__ {scalar_t__ i_type; TYPE_3__ u; } ;
typedef TYPE_5__ ts_cmd_t ;
struct TYPE_8__ {int i_buffer; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0( ts_storage_t *VAR_1, const ts_cmd_t *VAR_2 )
{
    if( VAR_2 && VAR_2->i_type == VAR_0 && VAR_1->i_cmd_w > 0 )
    {
        size_t VAR_3 = sizeof(*VAR_2->u.send.p_block) + VAR_2->u.send.p_block->i_buffer;

        if( VAR_1->i_file_size + VAR_3 >= VAR_1->i_file_max )
            return 1;
    }
    return VAR_1->i_cmd_w >= VAR_1->i_cmd_max;
}
