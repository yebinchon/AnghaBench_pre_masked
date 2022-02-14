
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int b_meta_changed; } ;
typedef TYPE_1__ xds_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*) ;
 char* FUNC_2 (char const*) ;

__attribute__((used)) static bool FUNC_3( xds_t *VAR_0, char **VAR_1, const char *VAR_2 )
{
    if( *VAR_1 && VAR_2 && !FUNC_1( *VAR_1, VAR_2 ) )
        return 0;
    if( *VAR_1 == ((void*)0) && VAR_2 == ((void*)0) )
        return 0;

    FUNC_0( *VAR_1 );
    if( VAR_2 )
        *VAR_1 = FUNC_2( VAR_2 );
    else
        *VAR_1 = ((void*)0);

    VAR_0->b_meta_changed = 1;
    return 1;
}
