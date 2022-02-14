
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ i_dec_nb_ref; scalar_t__ i_trash_nb_ref; scalar_t__ i_nb_ref; } ;
typedef TYPE_1__ decoder_synchro_t ;



void FUNC_0( decoder_synchro_t * VAR_0 )
{
    VAR_0->i_nb_ref = 0;
    VAR_0->i_trash_nb_ref = VAR_0->i_dec_nb_ref = 0;
}
