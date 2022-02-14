
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* screen; } ;
typedef TYPE_1__ eia608_t ;
struct TYPE_5__ {int* row_used; char** characters; scalar_t__** colors; scalar_t__** fonts; } ;
typedef TYPE_2__ eia608_screen ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0( eia608_t *VAR_3, int VAR_4, int VAR_5, int VAR_6 )
{
    eia608_screen *VAR_7 = &VAR_3->screen[VAR_4];

    if( VAR_6 == 0 )
    {
        VAR_7->row_used[VAR_5] = 0;
    }
    else
    {
        VAR_7->row_used[VAR_5] = 0;
        for( int VAR_8 = 0; VAR_8 < VAR_6; VAR_8++ )
        {
            if( VAR_7->characters[VAR_5][VAR_8] != ' ' ||
                VAR_7->colors[VAR_5][VAR_8] != VAR_0 ||
                VAR_7->fonts[VAR_5][VAR_8] != VAR_1 )
            {
                VAR_7->row_used[VAR_5] = 1;
                break;
            }
        }
    }

    for( ; VAR_6 < VAR_2+1; VAR_6++ )
    {
        VAR_7->characters[VAR_5][VAR_6] = VAR_6 < VAR_2 ? ' ' : '\0';
        VAR_7->colors[VAR_5][VAR_6] = VAR_0;
        VAR_7->fonts[VAR_5][VAR_6] = VAR_1;
    }
}
