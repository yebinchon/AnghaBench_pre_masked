
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int i_channels; } ;
struct TYPE_10__ {TYPE_1__ audio; } ;
struct TYPE_11__ {TYPE_2__ fmt_in; TYPE_4__* p_sys; } ;
typedef TYPE_3__ filter_t ;
struct TYPE_12__ {int coeffs; int p_state; } ;
typedef TYPE_4__ filter_sys_t ;
struct TYPE_13__ {int i_nb_samples; scalar_t__ p_buffer; } ;
typedef TYPE_5__ block_t ;


 int FUNC_0 (float*,float*,int ,int ,int ,int ,int) ;

__attribute__((used)) static block_t *FUNC_1( filter_t * VAR_0, block_t * VAR_1 )
{
    filter_sys_t *VAR_2 = VAR_0->p_sys;
    FUNC_0( (float*)VAR_1->p_buffer, (float*)VAR_1->p_buffer,
               VAR_2->p_state,
               VAR_0->fmt_in.audio.i_channels, VAR_1->i_nb_samples,
               VAR_2->coeffs, 5 );
    return VAR_1;
}
