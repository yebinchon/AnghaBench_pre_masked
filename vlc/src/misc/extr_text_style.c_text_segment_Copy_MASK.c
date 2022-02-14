
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* p_next; int p_ruby; int style; int psz_text; } ;
typedef TYPE_1__ text_segment_t ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;

text_segment_t *FUNC_4( text_segment_t *VAR_0 )
{
    text_segment_t *VAR_1 = ((void*)0), *VAR_2 = ((void*)0);

    while( VAR_0 ) {
        text_segment_t *VAR_3 = FUNC_0( VAR_0->psz_text );

        if( FUNC_3( !VAR_3 ) )
            break;

        VAR_3->style = FUNC_2( VAR_0->style );
        VAR_3->p_ruby = FUNC_1( VAR_0->p_ruby );

        if( VAR_1 == ((void*)0) )
        {
            VAR_1 = VAR_2 = VAR_3;
        }
        else
        {
            VAR_1->p_next = VAR_3;
            VAR_1 = VAR_1->p_next;
        }

        VAR_0 = VAR_0->p_next;
    }

    return VAR_2;
}
