
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int text_style_t ;
struct TYPE_5__ {struct TYPE_5__* p_next; int * style; } ;
typedef TYPE_1__ text_segment_t ;
typedef int style_stack_t ;


 int * FUNC_0 (int **) ;
 TYPE_1__* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static text_segment_t* FUNC_3( text_segment_t* VAR_0, style_stack_t** VAR_1 )
{
    text_segment_t* VAR_2 = FUNC_1( ((void*)0) );
    if ( FUNC_2( VAR_2 == ((void*)0) ) )
        return ((void*)0);
    text_style_t* VAR_3 = FUNC_0( VAR_1 );
    VAR_2->style = VAR_3;
    VAR_0->p_next = VAR_2;
    return VAR_2;
}
