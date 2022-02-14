
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int text_style_t ;
struct TYPE_5__ {int style; } ;
typedef TYPE_1__ text_segment_t ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int) ;

text_segment_t *FUNC_4( const text_style_t* VAR_0 )
{
    if ( !VAR_0 )
        return ((void*)0);
    text_segment_t* VAR_1 = FUNC_1( ((void*)0) );
    if ( FUNC_3( !VAR_1 ) )
        return ((void*)0);
    VAR_1->style = FUNC_2( VAR_0 );
    if ( FUNC_3( !VAR_1->style ) )
    {
        FUNC_0( VAR_1 );
        return ((void*)0);
    }
    return VAR_1;
}
