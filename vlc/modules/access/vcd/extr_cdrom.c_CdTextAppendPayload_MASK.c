
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vlc_iconv_t ;
typedef enum cdtext_charset_e { ____Placeholder_cdtext_charset_e } cdtext_charset_e ;





 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,char const*,size_t) ;
 char* FUNC_2 (char*,size_t) ;
 size_t FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (scalar_t__,char const**,size_t*,char**,size_t*) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (char*,char const*) ;

__attribute__((used)) static void FUNC_7( const char *VAR_1, size_t VAR_2,
                                 enum cdtext_charset_e VAR_3, char **VAR_4 )
{
    size_t VAR_5 = *VAR_4 ? FUNC_3( *VAR_4 ) : 0;
    size_t VAR_6;
    const char *VAR_7;
    switch( VAR_3 )
    {
        case 130:
            VAR_6 = VAR_2;
            VAR_7 = ((void*)0);
            break;
        case 129:
            VAR_6 = VAR_2 * 2;
            VAR_7 = "ISO-8859-1";
            break;
        case 128:
            VAR_6 = VAR_2 * 4;
            VAR_7 = "SHIFT-JIS";
            break;
        default:
            return;
    }
    size_t VAR_8 = VAR_5 + VAR_6 * 2 + 1;

    char *VAR_9 = FUNC_2( *VAR_4, VAR_8 );
    if( !VAR_9 )
        return;
    *VAR_4 = VAR_9;


    if ( VAR_7 == ((void*)0) )
    {
        FUNC_1( &VAR_9[VAR_5], VAR_1, VAR_2 );
        VAR_9[VAR_5 + VAR_2] = 0;
        FUNC_0( VAR_9 );
    }
    else
    {
        vlc_iconv_t VAR_10 = FUNC_6( "UTF-8", VAR_7 );
        if( VAR_10 != (vlc_iconv_t) -1 )
        {
            const char *VAR_11 = VAR_1;
            size_t VAR_12 = VAR_2;
            char *VAR_13 = &VAR_9[VAR_5];
            size_t VAR_14 = VAR_6;
            if( VAR_0 != FUNC_4( VAR_10, &VAR_11, &VAR_12, &VAR_13, &VAR_14 ) )
                VAR_9[VAR_5 + VAR_6 - VAR_14] = 0;
            FUNC_5( VAR_10 );
        }
    }
}
