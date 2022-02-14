
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int font_style; } ;
typedef TYPE_1__ ttml_style_t ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 () ;

__attribute__((used)) static ttml_style_t * FUNC_2( const ttml_style_t *VAR_0 )
{
    ttml_style_t *VAR_1 = FUNC_1( );
    if( VAR_1 )
    {
        *VAR_1 = *VAR_0;
        VAR_1->font_style = FUNC_0( VAR_0->font_style );
    }
    return VAR_1;
}
