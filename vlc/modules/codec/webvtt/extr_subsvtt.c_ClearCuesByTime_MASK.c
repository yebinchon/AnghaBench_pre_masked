
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* p_child; } ;
typedef TYPE_1__ webvtt_region_t ;
struct TYPE_7__ {scalar_t__ type; struct TYPE_7__* p_next; } ;
typedef TYPE_2__ webvtt_dom_node_t ;
struct TYPE_8__ {scalar_t__ i_stop; } ;
typedef TYPE_3__ webvtt_dom_cue_t ;
typedef scalar_t__ vlc_tick_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_1( webvtt_dom_node_t **VAR_2, vlc_tick_t VAR_3 )
{
    while( *VAR_2 )
    {
        webvtt_dom_node_t *VAR_4 = *VAR_2;
        if( VAR_4 )
        {
            if( VAR_4->type == VAR_0 )
            {
                webvtt_dom_cue_t *VAR_5 = (webvtt_dom_cue_t *)VAR_4;
                if( VAR_5->i_stop <= VAR_3 )
                {
                    *VAR_2 = VAR_4->p_next;
                    VAR_4->p_next = ((void*)0);
                    FUNC_0( VAR_5 );
                    continue;
                }
            }
            else if( VAR_4->type == VAR_1 )
            {
                webvtt_region_t *VAR_6 = (webvtt_region_t *) VAR_4;
                FUNC_1( &VAR_6->p_child, VAR_3 );
            }
            VAR_2 = &VAR_4->p_next;
        }
    }
}
