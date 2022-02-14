
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1( char *VAR_0 )
{
    bool VAR_1;
    bool VAR_2;
    char VAR_3;

    int VAR_4, VAR_5, VAR_6;

    VAR_4 = 0;
    VAR_5 = 0;
    VAR_6 = 0;

    VAR_1 = 0;
    VAR_2 = 0;

    while ( VAR_0[VAR_4] != '\0' )
    {
        VAR_3 = VAR_0[VAR_4];
        VAR_4++;

        if( VAR_3 == '\\' && !VAR_1 )
        {
            VAR_1 = 1;
            continue;
        }

        if( VAR_0[VAR_4] == '<' )
        {
            VAR_2 = 1;
            continue;
        }

        if( !VAR_1 && !VAR_2 )
        {
            if( VAR_3 == ' ' || VAR_3 == ',' || VAR_3 == '.' || VAR_3 == '-' || VAR_3 == '?' || VAR_3 == '!' )
            {
                if( VAR_5 > 0 )
                {
                    VAR_6 += FUNC_0( VAR_5 );
                }

                VAR_5 = 0;
            }
            else
            {
                VAR_5++;
            }
        }

        VAR_1 = 0;

        if( VAR_3 == '>' )
        {
            VAR_2 = 0;
        }

    }

    if( VAR_5 > 0 )
    {
        VAR_6 += FUNC_0( VAR_5 );
    }

    return VAR_6;
}
