
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* psz_name; void* psz_way; void* psz_access; } ;
typedef TYPE_1__ mrl_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 void* FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2( mrl_t *VAR_1, const char *VAR_2 )
{
    char * VAR_3 = FUNC_1( VAR_2 );
    char * VAR_4 = VAR_3;
    const char * VAR_5;
    const char * VAR_6;
    char * VAR_7;


    while( *VAR_4 && *VAR_4 != ':' )
    {
        if( *VAR_4 == '{' )
        {
            while( *VAR_4 && *VAR_4 != '}' )
            {
                VAR_4++;
            }
            if( *VAR_4 )
            {
                VAR_4++;
            }
        }
        else
        {
            VAR_4++;
        }
    }
    if( !*VAR_4 )
    {
        VAR_5 = VAR_6 = "";
        VAR_7 = VAR_3;
    }
    else
    {
        *VAR_4++ = '\0';


        if( VAR_4[0] == '/' && VAR_4[1] == '/' )
        {
            VAR_4 += 2 ;
        }

        VAR_7 = VAR_4 ;


        VAR_4 = VAR_3;

        if( !*VAR_4 )
        {

            VAR_5 = "";
        }
        else if( *VAR_4 == '/' )
        {

            VAR_5 = "";
            VAR_4++;
        }
        else
        {
            VAR_5 = VAR_4;

            while( *VAR_4 && *VAR_4 != '/' )
            {
                if( *VAR_4 == '{' )
                {
                    while( *VAR_4 && *VAR_4 != '}' )
                    {
                        VAR_4++;
                    }
                    if( *VAR_4 )
                    {
                        VAR_4++;
                    }
                }
                else
                {
                    VAR_4++;
                }
            }

            if( *VAR_4 == '/' )
            {
                *VAR_4++ = '\0';
            }
        }

        if( !*VAR_4 )
        {

            VAR_6 = "";
        }
        else
        {
            VAR_6 = VAR_4;
        }
    }

    VAR_1->psz_access = FUNC_1( VAR_5 );
    VAR_1->psz_way = FUNC_1( VAR_6 );
    VAR_1->psz_name = FUNC_1( VAR_7 );

    FUNC_0( VAR_3 );
    return( VAR_0 );
}
