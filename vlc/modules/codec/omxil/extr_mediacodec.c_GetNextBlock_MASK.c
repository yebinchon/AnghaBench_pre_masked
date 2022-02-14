
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ i_csd_send; scalar_t__ i_csd_count; int ** pp_csd; } ;
typedef TYPE_1__ decoder_sys_t ;
typedef int block_t ;



__attribute__((used)) static block_t *FUNC_0(decoder_sys_t *VAR_0, block_t *VAR_1)
{
    if (VAR_0->i_csd_send < VAR_0->i_csd_count)
        return VAR_0->pp_csd[VAR_0->i_csd_send++];
    else
        return VAR_1;
}
