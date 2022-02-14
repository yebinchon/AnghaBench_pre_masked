
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int i_firstrow; int i_lastrow; TYPE_2__** rows; } ;
typedef TYPE_1__ cea708_window_t ;
struct TYPE_9__ {int lastcol; int firstcol; } ;
typedef TYPE_2__ cea708_text_row_t ;






 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4( cea708_window_t *VAR_0, int VAR_1 )
{
    switch( VAR_1 )
    {
        case 130:
        {
            uint8_t VAR_2 = FUNC_0( VAR_0 );
            for( int VAR_3=VAR_0->i_firstrow; VAR_3 <= VAR_0->i_lastrow; VAR_3++ )
            {
                cea708_text_row_t *VAR_4 = VAR_0->rows[VAR_3];
                if( VAR_4->lastcol == VAR_2 )
                {
                    if( VAR_4->firstcol >= VAR_4->lastcol )
                    {
                        FUNC_3( VAR_4 );
                        VAR_0->rows[VAR_3] = ((void*)0);
                        if( VAR_3 == VAR_0->i_firstrow )
                            VAR_0->i_firstrow++;
                        else if( VAR_3 == VAR_0->i_lastrow )
                            VAR_0->i_lastrow--;
                    }
                }
            }
        }
            break;
        case 129:
        {
            uint8_t VAR_5 = FUNC_1( VAR_0 );
            for( int VAR_6=VAR_0->i_firstrow; VAR_6 <= VAR_0->i_lastrow; VAR_6++ )
            {
                cea708_text_row_t *VAR_7 = VAR_0->rows[VAR_6];
                if( VAR_7->firstcol == VAR_5 )
                {
                    if( VAR_7->firstcol >= VAR_7->lastcol )
                    {
                        FUNC_3( VAR_7 );
                        VAR_0->rows[VAR_6] = ((void*)0);
                        if( VAR_6 == VAR_0->i_firstrow )
                            VAR_0->i_firstrow++;
                        else if( VAR_6 == VAR_0->i_lastrow )
                            VAR_0->i_lastrow--;
                    }
                }
            }
        }
            break;
        case 128:
            if( FUNC_2( VAR_0 ) > 0 )
            {
                FUNC_3( VAR_0->rows[VAR_0->i_lastrow] );
                VAR_0->rows[VAR_0->i_lastrow--] = ((void*)0);
            }
            break;
        case 131:
            if( FUNC_2( VAR_0 ) > 0 )
            {
                FUNC_3( VAR_0->rows[VAR_0->i_firstrow] );
                VAR_0->rows[VAR_0->i_firstrow++] = ((void*)0);
            }
            break;
    }
}
