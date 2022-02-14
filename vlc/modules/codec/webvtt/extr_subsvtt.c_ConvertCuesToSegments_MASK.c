
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; scalar_t__ i_start; scalar_t__ i_stop; scalar_t__ p_next; } ;
typedef TYPE_1__ webvtt_dom_cue_t ;
typedef scalar_t__ vlc_tick_t ;
typedef int text_segment_t ;
struct render_variables_s {int dummy; } ;
typedef int decoder_t ;


 int FUNC_0 (TYPE_1__ const*,int *,int **) ;
 int * FUNC_1 (int *,struct render_variables_s*,TYPE_1__ const*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static text_segment_t * FUNC_3( decoder_t *VAR_1, vlc_tick_t VAR_2, vlc_tick_t VAR_3,
                                               struct render_variables_s *VAR_4,
                                               const webvtt_dom_cue_t *VAR_5 )
{
    text_segment_t *VAR_6 = ((void*)0);
    text_segment_t **VAR_7 = &VAR_6;
    FUNC_2(VAR_3);

    for( ; VAR_5; VAR_5 = (const webvtt_dom_cue_t *) VAR_5->p_next )
    {
        if( VAR_5->type != VAR_0 )
            continue;

        if( VAR_5->i_start > VAR_2 || VAR_5->i_stop <= VAR_2 )
            continue;

        text_segment_t *VAR_8 = FUNC_1( VAR_1, VAR_4, VAR_5 );
        FUNC_0( VAR_5, VAR_8, VAR_7 );
    }
    return VAR_6;
}
