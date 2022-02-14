
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int h264_sequence_parameter_set_t ;
struct TYPE_8__ {size_t i_sps_id; } ;
typedef TYPE_3__ h264_picture_parameter_set_t ;
struct TYPE_9__ {TYPE_2__* sps; TYPE_1__* pps; } ;
typedef TYPE_4__ decoder_sys_t ;
struct TYPE_7__ {int * p_sps; } ;
struct TYPE_6__ {TYPE_3__* p_pps; } ;



__attribute__((used)) static void FUNC_0( uint8_t VAR_0, void *VAR_1,
                       const h264_sequence_parameter_set_t **VAR_2,
                       const h264_picture_parameter_set_t **VAR_3 )
{
    decoder_sys_t *VAR_4 = VAR_1;

    *VAR_3 = VAR_4->pps[VAR_0].p_pps;
    if( *VAR_3 == ((void*)0) )
        *VAR_2 = ((void*)0);
    else
        *VAR_2 = VAR_4->sps[(*VAR_3)->i_sps_id].p_sps;
}
