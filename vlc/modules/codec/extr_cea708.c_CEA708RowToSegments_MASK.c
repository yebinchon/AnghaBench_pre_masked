
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_7__ {struct TYPE_7__* p_next; } ;
typedef TYPE_1__ text_segment_t ;
struct TYPE_8__ {size_t firstcol; size_t lastcol; int * styles; } ;
typedef TYPE_2__ cea708_text_row_t ;
typedef int cea708_pen_style_t ;


 TYPE_1__* FUNC_0 (TYPE_2__ const*,size_t,size_t,int) ;
 scalar_t__ FUNC_1 (int *,int *,int) ;

__attribute__((used)) static text_segment_t * FUNC_2( const cea708_text_row_t *VAR_0,
                                             bool VAR_1 )
{
    text_segment_t *VAR_2 = ((void*)0);
    text_segment_t **VAR_3 = &VAR_2;

    uint8_t VAR_4 = VAR_0->firstcol;
    for( uint8_t VAR_5=VAR_4; VAR_5<=VAR_0->lastcol; VAR_5++ )
    {
        if( VAR_5 == VAR_0->lastcol ||
            FUNC_1( &VAR_0->styles[VAR_5], &VAR_0->styles[VAR_5+1], sizeof(cea708_pen_style_t) ) )
        {
            *VAR_3 = FUNC_0( VAR_0, VAR_4, VAR_5,
                                             VAR_1 && (VAR_5 == VAR_0->lastcol) );
            if( *VAR_3 )
                VAR_3 = &((*VAR_3)->p_next);
            VAR_4 = VAR_5+1;
        }
    }

    return VAR_2;
}
