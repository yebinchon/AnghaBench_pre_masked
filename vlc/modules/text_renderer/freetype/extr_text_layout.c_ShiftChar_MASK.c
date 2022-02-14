
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int yMin; int yMax; int xMin; int xMax; } ;
struct TYPE_5__ {TYPE_1__ bbox; int p_outline; int p_shadow; int p_glyph; } ;
typedef TYPE_2__ line_character_t ;


 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static void FUNC_1( line_character_t *VAR_0, int VAR_1, int VAR_2 )
{
    FUNC_0( VAR_0->p_glyph, VAR_1, VAR_2 );
    FUNC_0( VAR_0->p_shadow, VAR_1, VAR_2 );
    FUNC_0( VAR_0->p_outline, VAR_1, VAR_2 );
    VAR_0->bbox.yMin += VAR_2;
    VAR_0->bbox.yMax += VAR_2;
    VAR_0->bbox.xMin += VAR_1;
    VAR_0->bbox.xMax += VAR_1;
}
