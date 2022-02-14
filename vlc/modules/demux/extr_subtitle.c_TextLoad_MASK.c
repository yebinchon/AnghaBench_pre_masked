
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t i_line_count; char** line; scalar_t__ i_line; } ;
typedef TYPE_1__ text_t ;
typedef int stream_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char** FUNC_0 (size_t,int) ;
 int FUNC_1 (char**) ;
 char** FUNC_2 (char**,size_t) ;
 char* FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4( text_t *VAR_3, stream_t *VAR_4 )
{
    size_t VAR_5;


    VAR_5 = 500;
    VAR_3->i_line_count = 0;
    VAR_3->i_line = 0;
    VAR_3->line = FUNC_0( VAR_5, sizeof( char * ) );
    if( !VAR_3->line )
        return VAR_1;


    for( ;; )
    {
        char *VAR_6 = FUNC_3( VAR_4 );

        if( VAR_6 == ((void*)0) )
            break;

        VAR_3->line[VAR_3->i_line_count] = VAR_6;
        if( VAR_3->i_line_count + 1 >= VAR_5 )
        {
            VAR_5 += 100;
            char **VAR_7 = FUNC_2( VAR_3->line, VAR_5 * sizeof( char * ) );
            if( VAR_7 == ((void*)0) )
                return VAR_1;
            VAR_3->line = VAR_7;
        }
        VAR_3->i_line_count++;
    }

    if( VAR_3->i_line_count == 0 )
    {
        FUNC_1( VAR_3->line );
        return VAR_0;
    }

    return VAR_2;
}
