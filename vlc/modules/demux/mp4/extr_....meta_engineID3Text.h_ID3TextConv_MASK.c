
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 char* FUNC_0 (char*,int const*,size_t) ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 (char*,int const*,size_t) ;

__attribute__((used)) static const char * FUNC_3( const uint8_t *VAR_0, size_t VAR_1,
                                 uint8_t VAR_2, char **VAR_3 )
{
    char *VAR_4 = ((void*)0);
    const char *VAR_5 = VAR_4;
    if( VAR_1 > 0 && VAR_2 < 0x04 )
    {
        switch( VAR_2 )
        {
            case 0x00:
                VAR_5 = VAR_4 = FUNC_0( "ISO_8859-1", VAR_0, VAR_1 );
                break;
            case 0x01:
                VAR_5 = VAR_4 = FUNC_0( "UTF-16LE", VAR_0, VAR_1 );
                break;
            case 0x02:
                VAR_5 = VAR_4 = FUNC_0( "UTF-16BE", VAR_0, VAR_1 );
                break;
            default:
            case 0x03:
                if( VAR_0[ VAR_1 - 1 ] != 0x00 )
                {
                    VAR_5 = VAR_4 = (char *) FUNC_1( VAR_1 + 1 );
                    if( VAR_4 )
                    {
                        FUNC_2( VAR_4, VAR_0, VAR_1 - 1 );
                        VAR_4[VAR_1] = '\0';
                    }
                }
                else
                {
                    VAR_5 = (const char *) VAR_0;
                }
                break;
        }
    }
    *VAR_3 = VAR_4;
    return VAR_5;
}
