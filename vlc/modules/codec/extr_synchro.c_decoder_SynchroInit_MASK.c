
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int decoder_t ;
struct TYPE_4__ {int b_no_skip; int current_pts; int i_frame_rate; scalar_t__ i_pic; scalar_t__ i_not_chosen_pic; scalar_t__ i_trashed_pic; scalar_t__ i_backward_period; scalar_t__ i_current_period; int backward_pts; scalar_t__ i_dec_nb_ref; scalar_t__ i_trash_nb_ref; scalar_t__ i_nb_ref; int pi_meaningful; int p_tau; int i_eta_b; int i_n_b; int i_eta_p; int i_n_p; scalar_t__ b_quiet; int * p_dec; } ;
typedef TYPE_1__ decoder_synchro_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (int *,char*) ;

decoder_synchro_t * FUNC_3( decoder_t *VAR_3, int VAR_4 )
{
    decoder_synchro_t * VAR_5 = FUNC_0( 1, sizeof(*VAR_5) );
    if( !VAR_5 )
        return ((void*)0);

    VAR_5->p_dec = VAR_3;
    VAR_5->b_no_skip = !FUNC_2( VAR_3, "skip-frames" );
    VAR_5->b_quiet = FUNC_2( VAR_3, "quiet-synchro" );


    VAR_5->i_n_p = VAR_5->i_eta_p = VAR_1;
    VAR_5->i_n_b = VAR_5->i_eta_b = VAR_0;
    FUNC_1( VAR_5->p_tau, 0, 4 * sizeof(vlc_tick_t) );
    FUNC_1( VAR_5->pi_meaningful, 0, 4 * sizeof(unsigned int) );
    VAR_5->i_nb_ref = 0;
    VAR_5->i_trash_nb_ref = VAR_5->i_dec_nb_ref = 0;
    VAR_5->current_pts = 1,
    VAR_5->backward_pts = VAR_2;
    VAR_5->i_current_period = VAR_5->i_backward_period = 0;
    VAR_5->i_trashed_pic = VAR_5->i_not_chosen_pic =
        VAR_5->i_pic = 0;

    VAR_5->i_frame_rate = VAR_4;

    return VAR_5;
}
