
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__* psz_text; TYPE_2__* p_ruby; } ;
typedef TYPE_1__ text_segment_t ;
struct TYPE_7__ {int psz_base; struct TYPE_7__* p_next; } ;
typedef TYPE_2__ text_segment_ruby_t ;


 scalar_t__* FUNC_0 (size_t) ;
 int FUNC_1 (scalar_t__*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int *) ;

text_segment_t *FUNC_4( text_segment_ruby_t *VAR_0 )
{
    text_segment_t *VAR_1 = FUNC_3( ((void*)0) );
    if( VAR_1 )
    {
        VAR_1->p_ruby = VAR_0;
        size_t VAR_2 = 1;
        for( text_segment_ruby_t *VAR_3 = VAR_0; VAR_3; VAR_3 = VAR_3->p_next )
            VAR_2 += FUNC_2( VAR_3->psz_base );
        VAR_1->psz_text = FUNC_0( VAR_2 );

        if( VAR_1->psz_text )
        {
            *VAR_1->psz_text = 0;
            for( text_segment_ruby_t *VAR_4 = VAR_0; VAR_4; VAR_4 = VAR_4->p_next )
                FUNC_1( VAR_1->psz_text, VAR_4->psz_base );
        }
    }
    return VAR_1;
}
