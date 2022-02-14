
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int i_row; int i_column; } ;
struct TYPE_6__ {scalar_t__ mode; int i_row_rollup; int font; int color; TYPE_1__ cursor; } ;
typedef TYPE_2__ eia608_t ;
struct TYPE_7__ {int i_font; int i_color; int i_column; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 TYPE_3__* VAR_1 ;
 int FUNC_2 (char*,int const) ;

__attribute__((used)) static bool FUNC_3( eia608_t *VAR_2, uint8_t VAR_3, uint8_t VAR_4 )
{
    static const int VAR_5[] = {
        11, -1, 1, 2, 3, 4, 12, 13, 14, 15, 5, 6, 7, 8, 9, 10
    };
    const int VAR_6 = ( (VAR_3<<1) & 0x0e) | ( (VAR_4>>5) & 0x01 );

    FUNC_0(FUNC_2("[PAC,%d]", VAR_6));
    FUNC_1( VAR_4 >= 0x40 && VAR_4 <= 0x7f );

    if( VAR_5[VAR_6] <= 0 )
        return 0;


    if( VAR_2->mode != VAR_0 )
        VAR_2->cursor.i_row = VAR_5[VAR_6] - 1;
    VAR_2->i_row_rollup = VAR_5[VAR_6] - 1;

    if( VAR_4 >= 0x60 )
        VAR_4 -= 0x60;
    else if( VAR_4 >= 0x40 )
        VAR_4 -= 0x40;
    VAR_2->cursor.i_column = VAR_1[VAR_4].i_column;
    VAR_2->color = VAR_1[VAR_4].i_color;
    VAR_2->font = VAR_1[VAR_4].i_font;

    return 0;
}
