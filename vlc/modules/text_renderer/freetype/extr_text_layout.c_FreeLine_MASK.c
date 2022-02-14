
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int i_character_count; struct TYPE_5__* p_character; scalar_t__ p_shadow; scalar_t__ p_outline; scalar_t__ p_glyph; } ;
typedef TYPE_1__ line_desc_t ;
typedef TYPE_1__ line_character_t ;
typedef int FT_Glyph ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2( line_desc_t *VAR_0 )
{
    for( int VAR_1 = 0; VAR_1 < VAR_0->i_character_count; VAR_1++ )
    {
        line_character_t *VAR_2 = &VAR_0->p_character[VAR_1];
        FUNC_0( (FT_Glyph)VAR_2->p_glyph );
        if( VAR_2->p_outline )
            FUNC_0( (FT_Glyph)VAR_2->p_outline );
        if( VAR_2->p_shadow )
            FUNC_0( (FT_Glyph)VAR_2->p_shadow );
    }




    FUNC_1( VAR_0->p_character );
    FUNC_1( VAR_0 );
}
