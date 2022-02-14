
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {scalar_t__ iconv_u16be; } ;
typedef TYPE_1__ atsc_a65_handle_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t const) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (scalar_t__,char const**,size_t*,char**,size_t*) ;
 scalar_t__ FUNC_4 (char*,char*) ;

char * FUNC_5( atsc_a65_handle_t *VAR_1, const uint8_t *VAR_2, size_t VAR_3 )
{
    if( VAR_3 < 1 )
        return ((void*)0);

    if( !VAR_1->iconv_u16be )
    {
        if ( !(VAR_1->iconv_u16be = FUNC_4("UTF-8", "UTF-16BE")) )
            return ((void*)0);
    }
    else if ( VAR_0 == FUNC_3( VAR_1->iconv_u16be, ((void*)0), ((void*)0), ((void*)0), ((void*)0) ) )
    {
        return ((void*)0);
    }

    const size_t VAR_4 = VAR_3 * 3 / 2;
    size_t VAR_5 = VAR_4;
    const char *VAR_6 = (const char *) VAR_2;
    char *VAR_7;
    char *VAR_8 = VAR_7 = FUNC_1( VAR_4 );

    if( FUNC_2(!VAR_8) )
        return ((void*)0);

    if( VAR_0 == FUNC_3( VAR_1->iconv_u16be, &VAR_6, &VAR_3,
                                                           &VAR_7, &VAR_5 ) )
    {
        FUNC_0( VAR_8 );
        VAR_8 = ((void*)0);
    }
    else
        VAR_8[ VAR_4 - VAR_5 - 1 ] = 0;

    return VAR_8;
}
