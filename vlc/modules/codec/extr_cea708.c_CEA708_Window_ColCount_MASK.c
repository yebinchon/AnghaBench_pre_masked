
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_4__ {size_t row; TYPE_2__** rows; } ;
typedef TYPE_1__ cea708_window_t ;
struct TYPE_5__ {scalar_t__ firstcol; scalar_t__ lastcol; } ;
typedef TYPE_2__ cea708_text_row_t ;



__attribute__((used)) static uint8_t FUNC_0( const cea708_window_t *VAR_0 )
{
    const cea708_text_row_t *VAR_1 = VAR_0->rows[VAR_0->row];
    if( !VAR_1 || VAR_1->firstcol > VAR_1->lastcol )
        return 0;
    return 1 + VAR_1->lastcol - VAR_1->firstcol;
}
