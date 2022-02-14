
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* p_next; } ;
typedef TYPE_1__ webvtt_dom_node_t ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3( webvtt_dom_node_t *VAR_0 )
{
    if( FUNC_2( VAR_0 ) )
        FUNC_1( VAR_0, ((void*)0) );
    webvtt_dom_node_t *VAR_1 = FUNC_0( VAR_0 );
    for ( ; VAR_1 ; VAR_1 = VAR_1->p_next )
        FUNC_3( VAR_1 );
}
