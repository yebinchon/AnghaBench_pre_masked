
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int scroll_direction; int print_direction; } ;
struct TYPE_8__ {TYPE_1__ style; int col; int row; int i_row_count; int i_col_count; } ;
typedef TYPE_2__ cea708_window_t ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3( cea708_window_t *VAR_2 )
{
    switch( VAR_2->style.scroll_direction )
    {
        case 130:
            if( VAR_2->col > 0 &&
                FUNC_0( VAR_2 ) < VAR_2->i_col_count )
                VAR_2->col--;
            else
                FUNC_2( VAR_2 );
            VAR_2->row = (VAR_2->style.print_direction == 128) ?
                       0 : VAR_1 - 1;
            break;
        case 129:
            if( VAR_2->col + 1 < VAR_0 &&
                FUNC_0( VAR_2 ) < VAR_2->i_col_count )
                VAR_2->col++;
            else
                FUNC_2( VAR_2 );
            VAR_2->row = (VAR_2->style.print_direction == 128) ?
                       0 : VAR_1 - 1;
            break;
        case 128:
            if( VAR_2->row > 0 &&
                FUNC_1( VAR_2 ) < VAR_2->i_row_count )
                VAR_2->row--;
            else
                FUNC_2( VAR_2 );
            VAR_2->col = (VAR_2->style.print_direction == 130) ?
                       0 : VAR_0 - 1;
            break;
        case 131:
            if( VAR_2->row + 1 < VAR_2->i_row_count )
                VAR_2->row++;
            else
                FUNC_2( VAR_2 );
            VAR_2->col = (VAR_2->style.print_direction == 130) ?
                       0 : VAR_0 - 1;
            break;
    }
}
