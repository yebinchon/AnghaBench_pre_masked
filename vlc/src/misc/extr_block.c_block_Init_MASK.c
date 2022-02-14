
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct vlc_block_callbacks {int dummy; } ;
struct TYPE_4__ {size_t i_buffer; size_t i_size; struct vlc_block_callbacks const* cbs; scalar_t__ i_length; int i_dts; int i_pts; scalar_t__ i_nb_samples; scalar_t__ i_flags; void* p_start; void* p_buffer; int * p_next; } ;
typedef TYPE_1__ block_t ;


 int VAR_0 ;

block_t *FUNC_0(block_t *restrict VAR_1, const struct vlc_block_callbacks *VAR_2,
                    void *VAR_3, size_t VAR_4)
{

    VAR_1->p_next = ((void*)0);
    VAR_1->p_buffer = VAR_3;
    VAR_1->i_buffer = VAR_4;
    VAR_1->p_start = VAR_3;
    VAR_1->i_size = VAR_4;
    VAR_1->i_flags = 0;
    VAR_1->i_nb_samples = 0;
    VAR_1->i_pts =
    VAR_1->i_dts = VAR_0;
    VAR_1->i_length = 0;
    VAR_1->cbs = VAR_2;
    return VAR_1;
}
