
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int,char*) ;
 scalar_t__ FUNC_1 (char) ;
 scalar_t__ FUNC_2 (char*,char) ;
 unsigned int FUNC_3 (char const*,int *,int) ;

void FUNC_4( char *VAR_0 )
{
    if( !VAR_0 )
        return;
    char *VAR_1 = VAR_0;
    char *VAR_2 = VAR_0;

    while( *VAR_1 )
    {
        if( *VAR_1 == '\\' )
        {
            VAR_1++;

            if( *VAR_1 == 0 )
            {
                break;
            }
            else if( FUNC_2( "nfr", *VAR_1 ) )
            {
                switch( VAR_1[0] )
                {
                    case 'n':
                        *VAR_2++ = '\n';
                        VAR_1++;
                        break;
                    case 'r':
                        *VAR_2++ = '\r';
                        if( VAR_1[1] && VAR_1[1] == 'n' )
                        {
                            *VAR_2++ = '\n';
                            VAR_1++;
                        }
                        VAR_1++;
                        break;
                    case 'f':
                        *VAR_2++ = '\f';
                        VAR_1++;
                        break;
                }
            }
            else if( FUNC_1( *VAR_1 ) )
            {
                const char *VAR_3 = VAR_1;
                int VAR_4;
                for( VAR_4=0; VAR_4<6 && *VAR_1 && FUNC_1( *VAR_1 ); VAR_4++ )
                    VAR_1++;
                const char VAR_5 = *VAR_1;
                *VAR_1 = 0;
                unsigned VAR_6 = FUNC_3( VAR_3, ((void*)0), 16 );
                *VAR_1 = VAR_5;
                if( VAR_4 < 6 && *VAR_1 && *VAR_1 == ' ' )
                    VAR_1++;
                VAR_2 += FUNC_0( VAR_6, VAR_2 );
            }
        }
        else
        {
            *VAR_2++ = *VAR_1++;
        }
    }

    *VAR_2 = 0;
}
