
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int webvtt_dom_node_t ;
typedef int text_style_t ;


 int FUNC_0 (int **) ;
 int ** FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3( webvtt_dom_node_t *VAR_0, text_style_t *VAR_1 )
{
    text_style_t **VAR_2 = FUNC_1( VAR_0 );
    if( !VAR_2 )
    {
        FUNC_0( VAR_2 );
        if( VAR_1 )
            FUNC_2( VAR_1 );
        return;
    }
    if( *VAR_2 )
        FUNC_2( *VAR_2 );
    *VAR_2 = VAR_1;
}
