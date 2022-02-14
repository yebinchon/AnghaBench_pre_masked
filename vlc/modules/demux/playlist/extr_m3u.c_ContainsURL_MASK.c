
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (char const*,char*,int) ;
 char* FUNC_1 (char const*,char*,size_t const) ;

__attribute__((used)) static bool FUNC_2(const uint8_t *VAR_0, size_t VAR_1)
{
    const char *VAR_2 = (const char *)VAR_0;
    const char *VAR_3 = (const char *) VAR_0 + VAR_1;
    const size_t VAR_4 = sizeof( "https://" );
    if( VAR_1 < VAR_4 + 1 )
        return 0;

    bool VAR_5 = 1;
    while( VAR_2 + VAR_4 + 1 < VAR_3 )
    {
        if( *VAR_2 <= 0 )
            return 0;


        if( *VAR_2 == '\n' )
        {
            VAR_2++;
            VAR_5 = 1;
            continue;
        }


        if( VAR_5 )
        {
            const char *VAR_6 = FUNC_1( VAR_2, "://", VAR_4 );
            if(VAR_6)
            {
                switch(VAR_6 - VAR_2)
                {
                    case 3:
                        if( !FUNC_0( VAR_2, "mms", 3 ) ||
                            !FUNC_0( VAR_2, "ftp", 3 ) )
                            return 1;
                        break;
                    case 4:
                        if( !FUNC_0( VAR_2, "http", 4 ) ||
                            !FUNC_0( VAR_2, "rtsp", 4 ) ||
                            !FUNC_0( VAR_2, "ftps", 4 ) )
                            return 1;
                        break;
                    case 5:
                        if( !FUNC_0( VAR_2, "https", 5 ) ||
                            !FUNC_0( VAR_2, "ftpes", 5 ) )
                            return 1;
                    default:
                        break;
                }
            }


            if( *VAR_2 != '#' && *VAR_2 != '\n' && *VAR_2 != '\r')
                return 0;

            VAR_5 = 0;
        }

        VAR_2++;
    }
    return 0;
}
