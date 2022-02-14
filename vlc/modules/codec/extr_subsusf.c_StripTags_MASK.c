
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int ) ;
 char* FUNC_1 (scalar_t__) ;
 char* FUNC_2 (char*,int) ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;

__attribute__((used)) static char *FUNC_6( char *VAR_0 )
{
    char *VAR_1;
    char *VAR_2;

    VAR_2 = VAR_1 = FUNC_1( FUNC_4( VAR_0 ) + 1 );
    if( !VAR_1 )
        return ((void*)0);

    while( *VAR_0 )
    {

        if( *VAR_0 == '\n' )
            *VAR_0 = ' ';

        if( *VAR_0 == '<' )
        {
            if( FUNC_5( VAR_0, "<br/>", 5 ) == 0 )
                *VAR_2++ = '\n';

            VAR_0 += FUNC_3( VAR_0, ">" );
        }
        else if( *VAR_0 == '&' )
        {
            if( !FUNC_5( VAR_0, "&lt;", 4 ))
            {
                *VAR_2++ = '<';
                VAR_0 += FUNC_3( VAR_0, ";" );
            }
            else if( !FUNC_5( VAR_0, "&gt;", 4 ))
            {
                *VAR_2++ = '>';
                VAR_0 += FUNC_3( VAR_0, ";" );
            }
            else if( !FUNC_5( VAR_0, "&amp;", 5 ))
            {
                *VAR_2++ = '&';
                VAR_0 += FUNC_3( VAR_0, ";" );
            }
            else if( !FUNC_5( VAR_0, "&quot;", 6 ))
            {
                *VAR_2++ = '\"';
                VAR_0 += FUNC_3( VAR_0, ";" );
            }
            else
            {

                *VAR_2++ = '&';
            }
        }
        else
        {
            *VAR_2++ = *VAR_0;
        }


        if( *VAR_0 == '\0' ) break;

        VAR_0++;
    }
    *VAR_2++ = '\0';

    char *VAR_3 = FUNC_2( VAR_1, VAR_2 - VAR_1 );
    return FUNC_0(VAR_3 != ((void*)0)) ? VAR_3 : VAR_1;
}
