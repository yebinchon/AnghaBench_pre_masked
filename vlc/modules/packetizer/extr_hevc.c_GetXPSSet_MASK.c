
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int hevc_video_parameter_set_t ;
typedef int hevc_sequence_parameter_set_t ;
typedef int hevc_picture_parameter_set_t ;
struct TYPE_8__ {TYPE_1__* rg_vps; TYPE_3__* rg_sps; TYPE_2__* rg_pps; } ;
typedef TYPE_4__ decoder_sys_t ;
struct TYPE_7__ {int * p_decoded; } ;
struct TYPE_6__ {int * p_decoded; } ;
struct TYPE_5__ {int * p_decoded; } ;


 size_t FUNC_0 (int *) ;
 size_t FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(uint8_t VAR_0, void *VAR_1,
                      hevc_picture_parameter_set_t **VAR_2,
                      hevc_sequence_parameter_set_t **VAR_3,
                      hevc_video_parameter_set_t **VAR_4)
{
    decoder_sys_t *VAR_5 = VAR_1;
    *VAR_3 = ((void*)0);
    *VAR_4 = ((void*)0);
    if((*VAR_2 = VAR_5->rg_pps[VAR_0].p_decoded))
        if((*VAR_3 = VAR_5->rg_sps[FUNC_0(*VAR_2)].p_decoded))
            *VAR_4 = VAR_5->rg_vps[FUNC_1(*VAR_3)].p_decoded;
}
