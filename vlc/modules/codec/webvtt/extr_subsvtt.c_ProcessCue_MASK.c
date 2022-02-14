
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* p_parent; struct TYPE_6__* p_next; } ;
typedef TYPE_1__ webvtt_dom_node_t ;
struct TYPE_7__ {TYPE_1__* p_child; int i_lines; } ;
typedef TYPE_2__ webvtt_dom_cue_t ;
typedef int decoder_t ;


 TYPE_1__* FUNC_0 (char const*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_3( decoder_t *VAR_0, const char *VAR_1, webvtt_dom_cue_t *VAR_2 )
{
    FUNC_1(VAR_0);

    if( VAR_2->p_child )
        return;
    VAR_2->p_child = FUNC_0( VAR_1, &VAR_2->i_lines );
    for( webvtt_dom_node_t *VAR_3 = VAR_2->p_child; VAR_3; VAR_3 = VAR_3->p_next )
        VAR_3->p_parent = (webvtt_dom_node_t *)VAR_2;



}
