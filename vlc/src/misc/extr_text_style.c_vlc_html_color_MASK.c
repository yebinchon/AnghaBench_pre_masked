
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int i_value; int * psz_name; } ;


 scalar_t__ FUNC_0 (char) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (char const*,char*,unsigned int*,unsigned int*,unsigned int*,...) ;
 int FUNC_2 (char const*,int *) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (char const*,char**,int) ;

unsigned int FUNC_5( const char *VAR_1, bool* VAR_2 )
{
    unsigned int VAR_3 = 0;
    char* VAR_4;
    bool VAR_5 = 0;

    const char *VAR_6 = (*VAR_1 == '#') ? VAR_1 + 1 : VAR_1;

    if( VAR_6 != VAR_1 ||
        (*VAR_6 >= '0' && *VAR_6 <= '9') ||
        (*VAR_6 >= 'A' && *VAR_6 <= 'F') )
    {
        uint32_t VAR_7 = (uint32_t)FUNC_4( VAR_6, &VAR_4, 16 );
        if( *VAR_4 == 0 || FUNC_0( *VAR_4 ) )
        {
            switch( VAR_4 - VAR_6 )
            {
                case 8:
                    VAR_3 = (VAR_7 << 24) | (VAR_7 >> 8);
                    VAR_5 = 1;
                    break;
                case 6:
                    VAR_3 = VAR_7 | 0xFF000000;
                    VAR_5 = 1;
                    break;
                default:
                    break;
            }
        }
    }

    if( !VAR_5 && VAR_6 == VAR_1 &&
        !FUNC_3( "rgb", VAR_1, 3 ) )
    {
        unsigned VAR_8,VAR_9,VAR_10,VAR_11 = 0xFF;
        if( VAR_1[3] == 'a' )
            VAR_5 = (FUNC_1( VAR_1, "rgba(%3u,%3u,%3u,%3u)", &VAR_8, &VAR_9, &VAR_10, &VAR_11 ) == 4);
        else
            VAR_5 = (FUNC_1( VAR_1, "rgb(%3u,%3u,%3u)", &VAR_8, &VAR_9, &VAR_10 ) == 3);
        VAR_3 = (VAR_11 << 24) | (VAR_8 << 16) | (VAR_9 << 8) | VAR_10;
    }

    if( !VAR_5 && VAR_6 == VAR_1 )
    {
        for( int VAR_12 = 0; VAR_0[VAR_12].psz_name != ((void*)0); VAR_12++ )
        {
            if( !FUNC_2( VAR_1, VAR_0[VAR_12].psz_name ) )
            {

                VAR_3 = VAR_0[VAR_12].i_value | 0xFF000000;
                VAR_5 = 1;
                break;
            }
        }
    }

    if ( VAR_2 != ((void*)0) )
        *VAR_2 = VAR_5;

    return VAR_3;
}
