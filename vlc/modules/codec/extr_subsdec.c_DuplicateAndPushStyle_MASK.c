
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int text_style_t ;
struct TYPE_4__ {struct TYPE_4__* p_next; int * p_style; } ;
typedef TYPE_1__ style_stack_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static text_style_t* FUNC_5(style_stack_t** VAR_1)
{
    text_style_t* VAR_2 = ( *VAR_1 ) ? FUNC_3( (*VAR_1)->p_style ) : FUNC_1( VAR_0 );
    if ( FUNC_4( !VAR_2 ) )
        return ((void*)0);
    style_stack_t* VAR_3 = FUNC_0( sizeof( *VAR_3 ) );
    if ( FUNC_4( !VAR_3 ) )
    {
        FUNC_2( VAR_2 );
        return ((void*)0);
    }

    VAR_3->p_style = VAR_2;
    VAR_3->p_next = *VAR_1;
    *VAR_1 = VAR_3;
    return VAR_2;
}
