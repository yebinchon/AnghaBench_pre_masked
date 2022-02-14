
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int i_row; int i_column; } ;
struct TYPE_8__ {scalar_t__ mode; int font; int color; TYPE_3__* screen; TYPE_1__ cursor; } ;
typedef TYPE_2__ eia608_t ;
struct TYPE_9__ {int* row_used; int ** fonts; int ** colors; int ** characters; } ;
typedef TYPE_3__ eia608_screen ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,int) ;
 size_t FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2( eia608_t *VAR_1, const uint8_t VAR_2 )
{
    const int VAR_3 = VAR_1->cursor.i_row;
    const int VAR_4 = VAR_1->cursor.i_column;
    eia608_screen *VAR_5;

    if( VAR_1->mode == VAR_0 )
        return;

    VAR_5 = &VAR_1->screen[FUNC_1( VAR_1 )];

    VAR_5->characters[VAR_3][VAR_4] = VAR_2;
    VAR_5->colors[VAR_3][VAR_4] = VAR_1->color;
    VAR_5->fonts[VAR_3][VAR_4] = VAR_1->font;
    VAR_5->row_used[VAR_3] = 1;
    FUNC_0( VAR_1, 1 );
}
