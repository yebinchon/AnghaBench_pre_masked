
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int scroll_direction; } ;
struct TYPE_10__ {int i_firstrow; int i_lastrow; TYPE_3__** rows; TYPE_1__ style; } ;
typedef TYPE_2__ cea708_window_t ;
struct TYPE_11__ {size_t lastcol; size_t firstcol; int * styles; int * characters; } ;
typedef TYPE_3__ cea708_text_row_t ;
typedef int cea708_pen_style_t ;






 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int const) ;
 int FUNC_4 (int *,int *,int) ;

__attribute__((used)) static void FUNC_5( cea708_window_t *VAR_1 )
{
    if( FUNC_2( VAR_1 ) == 0 )
        return;

    switch( VAR_1->style.scroll_direction )
    {
        case 130:

            if( FUNC_0( VAR_1 ) == VAR_0 - 1 )
                FUNC_3( VAR_1, 130 );
            for( int VAR_2=VAR_1->i_firstrow; VAR_2 <= VAR_1->i_lastrow; VAR_2++ )
            {
                cea708_text_row_t *VAR_3 = VAR_1->rows[VAR_2];
                if( VAR_3->lastcol < VAR_3->firstcol )
                    continue;
                FUNC_4( &VAR_3->characters[VAR_3->firstcol + 1], &VAR_3->characters[VAR_3->firstcol],
                         (VAR_3->lastcol - VAR_3->firstcol + 1) * 4U );
                FUNC_4( &VAR_3->styles[VAR_3->firstcol + 1], &VAR_3->styles[VAR_3->firstcol],
                         (VAR_3->lastcol - VAR_3->firstcol + 1) * sizeof(cea708_pen_style_t) );
                VAR_3->firstcol++;
                VAR_3->lastcol++;
            }
            break;
        case 129:

            if( FUNC_1( VAR_1 ) == 0 )
                FUNC_3( VAR_1, 129 );
            for( int VAR_4=VAR_1->i_firstrow; VAR_4 <= VAR_1->i_lastrow; VAR_4++ )
            {
                cea708_text_row_t *VAR_5 = VAR_1->rows[VAR_4];
                if( VAR_5->lastcol < VAR_5->firstcol )
                    continue;
                FUNC_4( &VAR_5->characters[VAR_5->firstcol - 1], &VAR_5->characters[VAR_5->firstcol],
                         (VAR_5->lastcol - VAR_5->firstcol + 1) * 4U );
                FUNC_4( &VAR_5->styles[VAR_5->firstcol - 1], &VAR_5->styles[VAR_5->firstcol],
                         (VAR_5->lastcol - VAR_5->firstcol + 1) * sizeof(cea708_pen_style_t) );
                VAR_5->firstcol--;
                VAR_5->lastcol--;
            }
            break;
        case 128:

            if( VAR_1->i_lastrow == VAR_0 - 1 )
                FUNC_3( VAR_1, 128 );
            for( int VAR_6=VAR_1->i_lastrow; VAR_6 >= VAR_1->i_firstrow; VAR_6-- )
                VAR_1->rows[VAR_6+1] = VAR_1->rows[VAR_6];
            VAR_1->rows[VAR_1->i_firstrow] = ((void*)0);
            VAR_1->i_firstrow++;
            VAR_1->i_lastrow++;
            break;
        case 131:

            if( VAR_1->i_firstrow == 0 )
                FUNC_3( VAR_1, 131 );
            for( int VAR_7=VAR_1->i_firstrow; VAR_7 <= VAR_1->i_lastrow; VAR_7++ )
                VAR_1->rows[VAR_7-1] = VAR_1->rows[VAR_7];
            VAR_1->rows[VAR_1->i_lastrow] = ((void*)0);
            VAR_1->i_firstrow--;
            VAR_1->i_lastrow--;
            break;
    }
}
