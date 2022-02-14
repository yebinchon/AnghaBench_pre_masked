
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int i_column; } ;
struct TYPE_5__ {TYPE_1__ cursor; } ;
typedef TYPE_2__ eia608_t ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0( eia608_t *VAR_1, int VAR_2 )
{
    VAR_1->cursor.i_column += VAR_2;
    if( VAR_1->cursor.i_column < 0 )
        VAR_1->cursor.i_column = 0;
    else if( VAR_1->cursor.i_column > VAR_0-1 )
        VAR_1->cursor.i_column = VAR_0-1;
}
