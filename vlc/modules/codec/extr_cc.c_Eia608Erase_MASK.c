
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int i_row; int i_column; } ;
struct TYPE_8__ {scalar_t__ mode; TYPE_3__* screen; TYPE_1__ cursor; } ;
typedef TYPE_2__ eia608_t ;
struct TYPE_9__ {char** characters; } ;
typedef TYPE_3__ eia608_screen ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,int) ;
 size_t FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2( eia608_t *VAR_1 )
{
    const int VAR_2 = VAR_1->cursor.i_row;
    const int VAR_3 = VAR_1->cursor.i_column - 1;
    eia608_screen *VAR_4;

    if( VAR_1->mode == VAR_0 )
        return;
    if( VAR_3 < 0 )
        return;

    VAR_4 = &VAR_1->screen[FUNC_1( VAR_1 )];


    VAR_4->characters[VAR_2][VAR_3] = ' ';
    FUNC_0( VAR_1, -1 );
}
