
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {double i_font_size; double f_font_relsize; } ;
typedef TYPE_1__ text_style_t ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1( const text_style_t *VAR_0, text_style_t *VAR_1 )
{
    if( FUNC_0(!VAR_1) )
    {
        return;
    }
    else if( FUNC_0(!VAR_0) || VAR_0->i_font_size == 0 )
    {
        VAR_1->i_font_size = 0;
        VAR_1->f_font_relsize = 5.0;
    }
    else
    {
        VAR_1->f_font_relsize = 5.0 * (float) VAR_1->i_font_size / VAR_0->i_font_size;
        VAR_1->i_font_size = 0;
    }
}
