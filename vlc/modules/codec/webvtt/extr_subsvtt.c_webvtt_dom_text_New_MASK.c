
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * p_parent; int type; } ;
typedef TYPE_1__ webvtt_dom_text_t ;
typedef int webvtt_dom_node_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int,int) ;

__attribute__((used)) static webvtt_dom_text_t * FUNC_1( webvtt_dom_node_t *VAR_1 )
{
    webvtt_dom_text_t *VAR_2 = FUNC_0( 1, sizeof(*VAR_2) );
    if( VAR_2 )
    {
        VAR_2->type = VAR_0;
        VAR_2->p_parent = VAR_1;
    }
    return VAR_2;
}
