
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* psz_monofontname; struct TYPE_4__* psz_fontname; } ;
typedef TYPE_1__ text_style_t ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1( text_style_t *VAR_0 )
{
    if( VAR_0 )
        FUNC_0( VAR_0->psz_fontname );
    if( VAR_0 )
        FUNC_0( VAR_0->psz_monofontname );
    FUNC_0( VAR_0 );
}
