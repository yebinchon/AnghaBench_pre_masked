
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int i_length; int i_flags; int i_pts; int i_dts; int i_nb_samples; int p_next; } ;
typedef TYPE_1__ block_t ;



__attribute__((used)) static void FUNC_0( block_t *restrict VAR_0, const block_t *VAR_1 )
{
    VAR_0->p_next = VAR_1->p_next;
    VAR_0->i_nb_samples = VAR_1->i_nb_samples;
    VAR_0->i_dts = VAR_1->i_dts;
    VAR_0->i_pts = VAR_1->i_pts;
    VAR_0->i_flags = VAR_1->i_flags;
    VAR_0->i_length = VAR_1->i_length;
}
