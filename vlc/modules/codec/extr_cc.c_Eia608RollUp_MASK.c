
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int i_row; scalar_t__ i_column; } ;
struct TYPE_8__ {scalar_t__ mode; TYPE_1__ cursor; TYPE_3__* screen; } ;
typedef TYPE_2__ eia608_t ;
struct TYPE_9__ {int * row_used; int * fonts; int * colors; int * characters; } ;
typedef TYPE_3__ eia608_screen ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int const VAR_4 ;
 int FUNC_0 (TYPE_2__*,int const,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static void FUNC_4( eia608_t *VAR_5 )
{
    if( VAR_5->mode == VAR_3 )
        return;

    const int VAR_6 = FUNC_1( VAR_5 );
    eia608_screen *VAR_7 = &VAR_5->screen[VAR_6];

    int VAR_8;


    if( VAR_5->mode == VAR_0 )
        VAR_8 = 2;
    else if( VAR_5->mode == VAR_1 )
        VAR_8 = 3;
    else if( VAR_5->mode == VAR_2 )
        VAR_8 = 4;
    else
        return;


    VAR_5->cursor.i_column = 0;


    for( int VAR_9 = 0; VAR_9 < VAR_5->cursor.i_row - VAR_8; VAR_9++ )
        FUNC_0( VAR_5, VAR_6, VAR_9 );


    for( int VAR_10 = 0; VAR_10 < VAR_8-1; VAR_10++ )
    {
        const int VAR_11 = VAR_5->cursor.i_row - VAR_8 + VAR_10 + 1;
        if( VAR_11 < 0 )
            continue;
        FUNC_2( VAR_11+1 < VAR_4 );
        FUNC_3( VAR_7->characters[VAR_11], VAR_7->characters[VAR_11+1], sizeof(*VAR_7->characters) );
        FUNC_3( VAR_7->colors[VAR_11], VAR_7->colors[VAR_11+1], sizeof(*VAR_7->colors) );
        FUNC_3( VAR_7->fonts[VAR_11], VAR_7->fonts[VAR_11+1], sizeof(*VAR_7->fonts) );
        VAR_7->row_used[VAR_11] = VAR_7->row_used[VAR_11+1];
    }

    FUNC_0( VAR_5, VAR_6, VAR_5->cursor.i_row );
}
