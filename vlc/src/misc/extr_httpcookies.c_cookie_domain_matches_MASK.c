
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* psz_domain; scalar_t__ b_host_only; } ;
typedef TYPE_1__ http_cookie_t ;


 int * FUNC_0 (char const*,char) ;
 size_t FUNC_1 (char const*) ;
 size_t FUNC_2 (char const*,char*) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;

__attribute__((used)) static bool FUNC_4( const http_cookie_t *VAR_0,
                                   const char *VAR_1 )
{


    if (VAR_1 == ((void*)0))
        return 0;
    if ( FUNC_3(VAR_0->psz_domain, VAR_1) == 0 )
        return 1;
    else if ( VAR_0->b_host_only )
        return 0;

    size_t VAR_2 = FUNC_1(VAR_1);
    size_t VAR_3 = FUNC_1(VAR_0->psz_domain);
    bool VAR_4 = 0, VAR_5 = 0;

    if( VAR_2 > VAR_3 )
    {
        size_t VAR_6 = VAR_2 - VAR_3;

        VAR_4 = FUNC_3( &VAR_1[VAR_6], VAR_0->psz_domain ) == 0;
        VAR_5 = VAR_1[VAR_6-1] == '.';
    }

    bool VAR_7 = FUNC_2(VAR_1, "0123456789.") == VAR_2;
    bool VAR_8 = FUNC_0(VAR_1, ':') != ((void*)0);
    return VAR_4 && VAR_5 &&
        !( VAR_7 || VAR_8 );
}
