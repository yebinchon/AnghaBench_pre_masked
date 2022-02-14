
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int text_style_t ;
struct TYPE_8__ {struct TYPE_8__* p_next; int * style; } ;
typedef TYPE_1__ text_segment_t ;
struct TYPE_9__ {int p_style; } ;
typedef TYPE_2__ style_stack_t ;


 int FUNC_0 (TYPE_2__**) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int * FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static text_segment_t* FUNC_5( text_segment_t* VAR_1, style_stack_t** VAR_2 )
{
    text_segment_t* VAR_3 = FUNC_1( ((void*)0) );
    if ( FUNC_4( VAR_3 == ((void*)0) ) )
        return ((void*)0);


    FUNC_0( VAR_2 );
    text_style_t* VAR_4 = ( *VAR_2 ) ? FUNC_3( (*VAR_2)->p_style ) : FUNC_2( VAR_0 );
    VAR_3->style = VAR_4;
    VAR_1->p_next = VAR_3;
    return VAR_3;
}
