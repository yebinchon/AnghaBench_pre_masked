
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_4__ {int i_firstrow; int i_lastrow; size_t row; TYPE_2__** rows; } ;
typedef TYPE_1__ cea708_window_t ;
struct TYPE_5__ {scalar_t__ firstcol; } ;
typedef TYPE_2__ cea708_text_row_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static uint8_t FUNC_0( const cea708_window_t *VAR_1 )
{
    uint8_t VAR_2 = VAR_0;
    for( int VAR_3=VAR_1->i_firstrow; VAR_3 <= VAR_1->i_lastrow; VAR_3++ )
    {
        const cea708_text_row_t *VAR_4 = VAR_1->rows[VAR_1->row];
        if( VAR_4 && VAR_4->firstcol < VAR_2 )
            VAR_2 = VAR_4->firstcol;
    }
    return VAR_2;
}
