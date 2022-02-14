
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* psz_monofontname; void* psz_fontname; } ;
typedef TYPE_1__ text_style_t ;


 void* FUNC_0 (void*) ;

text_style_t *FUNC_1( text_style_t *VAR_0, const text_style_t *VAR_1 )
{
    if( !VAR_1 )
        return VAR_0;


    *VAR_0 = *VAR_1;

    if( VAR_1->psz_fontname )
        VAR_0->psz_fontname = FUNC_0( VAR_1->psz_fontname );

    if( VAR_1->psz_monofontname )
        VAR_0->psz_monofontname = FUNC_0( VAR_1->psz_monofontname );

    return VAR_0;
}
