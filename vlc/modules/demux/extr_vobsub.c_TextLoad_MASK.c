
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
 int FUNC_0 (char*) ;
 char** FUNC_1 (char**,size_t) ;
 char* FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3( text_t *VAR_2, stream_t *VAR_3 )
{
    char **VAR_4 = ((void*)0);
    size_t VAR_5 = 0;


    for( ;; )
    {
        char *VAR_6 = FUNC_2( VAR_3 );
        char **VAR_7;

        if( VAR_6 == ((void*)0) || (VAR_5 >= VAR_0/sizeof(char *)) )
        {
            FUNC_0( VAR_6 );
            break;
        }

        VAR_7 = FUNC_1( VAR_4, (VAR_5 + 1) * sizeof (char *) );
        if( VAR_7 == ((void*)0) )
        {
            FUNC_0( VAR_6 );
            break;
        }
        VAR_4 = VAR_7;
        VAR_4[VAR_5++] = VAR_6;
    }

    VAR_2->i_line_count = VAR_5;
    VAR_2->i_line = 0;
    VAR_2->line = VAR_4;

    return VAR_1;
}
