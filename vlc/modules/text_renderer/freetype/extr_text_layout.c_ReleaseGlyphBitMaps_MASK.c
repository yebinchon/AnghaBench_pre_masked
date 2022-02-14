
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ p_outline; scalar_t__ p_glyph; } ;
typedef TYPE_1__ glyph_bitmaps_t ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(glyph_bitmaps_t *VAR_0)
{
    if( VAR_0->p_glyph )
        FUNC_0( VAR_0->p_glyph );
    if( VAR_0->p_outline )
        FUNC_0( VAR_0->p_outline );
}
