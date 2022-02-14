
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int i_trash_nb_ref; int i_nb_ref; int i_trashed_pic; } ;
typedef TYPE_1__ decoder_synchro_t ;



void FUNC_0( decoder_synchro_t * VAR_0 )
{
    VAR_0->i_trashed_pic++;
    VAR_0->i_nb_ref = VAR_0->i_trash_nb_ref;
}
