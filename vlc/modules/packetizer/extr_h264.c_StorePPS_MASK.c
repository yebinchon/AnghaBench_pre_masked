
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int h264_picture_parameter_set_t ;
struct TYPE_5__ {TYPE_1__* pps; int * p_active_pps; } ;
typedef TYPE_2__ decoder_sys_t ;
typedef int block_t ;
struct TYPE_4__ {int * p_pps; int * p_block; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2( decoder_sys_t *VAR_0, uint8_t VAR_1,
                      block_t *VAR_2, h264_picture_parameter_set_t *VAR_3 )
{
    if( VAR_0->pps[VAR_1].p_block )
        FUNC_0( VAR_0->pps[VAR_1].p_block );
    if( VAR_0->pps[VAR_1].p_pps )
        FUNC_1( VAR_0->pps[VAR_1].p_pps );
    if( VAR_0->pps[VAR_1].p_pps == VAR_0->p_active_pps )
        VAR_0->p_active_pps = ((void*)0);
    VAR_0->pps[VAR_1].p_block = VAR_2;
    VAR_0->pps[VAR_1].p_pps = VAR_3;
}
