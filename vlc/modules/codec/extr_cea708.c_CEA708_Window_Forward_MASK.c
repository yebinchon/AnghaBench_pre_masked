
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int print_direction; } ;
struct TYPE_6__ {int row; int col; TYPE_1__ style; } ;
typedef TYPE_2__ cea708_window_t ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1( cea708_window_t *VAR_2 )
{
    switch( VAR_2->style.print_direction )
    {
        case 130:
            if( VAR_2->col + 1 < VAR_0 )
                VAR_2->col++;
            else
                FUNC_0( VAR_2 );
            break;
        case 129:
            if( VAR_2->col > 0 )
                VAR_2->col--;
            else
                FUNC_0( VAR_2 );
            break;
        case 128:
            if( VAR_2->row + 1 < VAR_1 )
                VAR_2->row++;
            else
                FUNC_0( VAR_2 );
            break;
        case 131:
            if( VAR_2->row > 0 )
                VAR_2->row--;
            else
                FUNC_0( VAR_2 );
            break;
    }
}
