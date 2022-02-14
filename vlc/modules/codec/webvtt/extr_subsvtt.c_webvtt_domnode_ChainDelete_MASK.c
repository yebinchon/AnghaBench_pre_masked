
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int webvtt_region_t ;
typedef int webvtt_dom_text_t ;
typedef int webvtt_dom_tag_t ;
struct TYPE_3__ {scalar_t__ type; struct TYPE_3__* p_next; } ;
typedef TYPE_1__ webvtt_dom_node_t ;
typedef int webvtt_dom_cue_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4( webvtt_dom_node_t *VAR_4 )
{
    while( VAR_4 )
    {
        webvtt_dom_node_t *VAR_5 = VAR_4->p_next;

        if( VAR_4->type == VAR_2 )
            FUNC_1( (webvtt_dom_tag_t *) VAR_4 );
        else if( VAR_4->type == VAR_3 )
            FUNC_2( (webvtt_dom_text_t *) VAR_4 );
        else if( VAR_4->type == VAR_0 )
            FUNC_0( (webvtt_dom_cue_t *) VAR_4 );
        else if( VAR_4->type == VAR_1 )
            FUNC_3( (webvtt_region_t *) VAR_4 );

        VAR_4 = VAR_5;
    }
}
