
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_6__ {size_t row; unsigned int col; size_t i_firstrow; size_t i_lastrow; int pen; TYPE_2__** rows; int b_defined; } ;
typedef TYPE_1__ cea708_window_t ;
struct TYPE_7__ {size_t firstcol; size_t lastcol; int * styles; int * characters; } ;
typedef TYPE_2__ cea708_text_row_t ;


 unsigned int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 TYPE_2__* FUNC_3 () ;
 int FUNC_4 (int *,char const*,int) ;
 int FUNC_5 (char*,char const*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7( const uint8_t VAR_2[4], cea708_window_t *VAR_3 )
{
    if( !VAR_3->b_defined )
        return;


    if( FUNC_6( VAR_3->row >= VAR_1 ||
                  VAR_3->col >= VAR_0 ) )
    {
        FUNC_2( VAR_3->row < VAR_1 );
        FUNC_2( VAR_3->col < VAR_0 );
        return;
    }

    cea708_text_row_t *VAR_4 = VAR_3->rows[VAR_3->row];
    if( !VAR_4 )
    {
        VAR_3->rows[VAR_3->row] = VAR_4 = FUNC_3();
        if( !VAR_4 )
            return;
        if( VAR_3->row < VAR_3->i_firstrow )
            VAR_3->i_firstrow = VAR_3->row;
        if( VAR_3->row > VAR_3->i_lastrow )
            VAR_3->i_lastrow = VAR_3->row;
    }

    FUNC_4( &VAR_4->characters[VAR_3->col * 4U], VAR_2, 4 );
    VAR_4->styles[VAR_3->col] = VAR_3->pen;
    if( VAR_3->col < VAR_4->firstcol )
        VAR_4->firstcol = VAR_3->col;
    if( VAR_3->col > VAR_4->lastcol )
        VAR_4->lastcol = VAR_3->col;

    FUNC_0( VAR_3 );

    FUNC_1(FUNC_5("\033[0;33m%s\033[0m", VAR_2));
}
