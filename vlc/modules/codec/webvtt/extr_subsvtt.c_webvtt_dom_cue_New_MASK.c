
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int settings; int * p_cssstyle; scalar_t__ i_lines; int * p_child; void* i_stop; void* i_start; int * psz_id; int type; } ;
typedef TYPE_1__ webvtt_dom_cue_t ;
typedef void* vlc_tick_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static webvtt_dom_cue_t * FUNC_2( vlc_tick_t VAR_1, vlc_tick_t VAR_2 )
{
    webvtt_dom_cue_t *VAR_3 = FUNC_0( 1, sizeof(*VAR_3) );
    if( VAR_3 )
    {
        VAR_3->type = VAR_0;
        VAR_3->psz_id = ((void*)0);
        VAR_3->i_start = VAR_1;
        VAR_3->i_stop = VAR_2;
        VAR_3->p_child = ((void*)0);
        VAR_3->i_lines = 0;
        VAR_3->p_cssstyle = ((void*)0);
        FUNC_1( &VAR_3->settings );
    }
    return VAR_3;
}
