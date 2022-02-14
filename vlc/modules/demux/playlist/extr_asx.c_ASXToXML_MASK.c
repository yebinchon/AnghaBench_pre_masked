
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlc_memstream {char* ptr; } ;


 int FUNC_0 (struct vlc_memstream*,char*,char*) ;
 char* FUNC_1 (char*,char) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;
 char* FUNC_3 (char*,char*) ;
 char FUNC_4 (char) ;
 scalar_t__ FUNC_5 (struct vlc_memstream*) ;
 scalar_t__ FUNC_6 (struct vlc_memstream*) ;
 int FUNC_7 (struct vlc_memstream*,char) ;

__attribute__((used)) static char* FUNC_8( char* VAR_0 )
{
    bool VAR_1= 0;
    char *VAR_2 = VAR_0;
    char *VAR_3 = VAR_0;
    char VAR_4;

    struct vlc_memstream VAR_5;
    if( FUNC_6( &VAR_5 ) != 0 )
        return ((void*)0);

    while ( VAR_2 != ((void*)0) && *VAR_2 != '\0' )
    {
        VAR_3 = VAR_2;

        if( ( VAR_2 = FUNC_1( VAR_2, '<' ) ) == ((void*)0) )
        {
            FUNC_0(&VAR_5, VAR_3, ((void*)0));

            break;
        }

        FUNC_0(&VAR_5, VAR_3, VAR_2);
        VAR_3 = VAR_2;


        if( FUNC_2( VAR_2, "<!--", 4 ) == 0 )
        {
            VAR_2 += 4;
            VAR_2 = FUNC_3( VAR_2, "-->" );
            if( VAR_2 == ((void*)0))
                break;
            else
            {
                VAR_2 += 3;
                continue;
            }
        }
        else
        {
            FUNC_7( &VAR_5, '<' );
            VAR_2++;
        }

        for ( ; *VAR_2 != '\0'; VAR_2++ )
        {
            if( VAR_1 == 0 )
            {
                if( *VAR_2 == '>')
                {
                    FUNC_7( &VAR_5, '>' );
                    VAR_2++;
                    break;
                }
                if( *VAR_2 == '"' || *VAR_2 == '\'' )
                {
                    VAR_4 = *VAR_2;
                    VAR_1 = 1;
                    FUNC_7( &VAR_5, VAR_4 );
                }
                else
                {

                    FUNC_7( &VAR_5, FUNC_4( *VAR_2 ) );
                }
            }
            else
            {
                VAR_3 = VAR_2;
                VAR_2 = FUNC_1( VAR_2, VAR_4 );
                if( VAR_2 == ((void*)0) )
                    break;

                FUNC_0(&VAR_5, VAR_3, VAR_2);
                FUNC_7( &VAR_5, VAR_4 );
                VAR_1 = 0;
            }
        }
    }
    if( FUNC_5( &VAR_5 ) != 0 )
        return ((void*)0);

    return VAR_5.ptr;
}
