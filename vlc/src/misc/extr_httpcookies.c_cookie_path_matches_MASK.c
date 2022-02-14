
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* psz_path; } ;
typedef TYPE_1__ http_cookie_t ;


 scalar_t__ FUNC_0 (char const*,char const*) ;
 size_t FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*,size_t) ;

__attribute__((used)) static bool FUNC_3( const http_cookie_t * VAR_0, const char *VAR_1 )
{
    if (VAR_1 == ((void*)0) )
        return 0;
    else if ( FUNC_0(VAR_0->psz_path, VAR_1) == 0 )
        return 1;

    size_t VAR_2 = FUNC_1( VAR_1 );
    size_t VAR_3 = FUNC_1( VAR_0->psz_path );
    return ( VAR_2 > VAR_3 ) &&
        ( FUNC_2(VAR_1, VAR_0->psz_path, VAR_3) == 0 ) &&
        ( VAR_1[VAR_3 - 1] == '/' || VAR_1[VAR_3] == '/' );
}
