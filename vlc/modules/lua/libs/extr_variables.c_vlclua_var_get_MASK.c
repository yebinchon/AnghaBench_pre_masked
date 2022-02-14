
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int psz_string; } ;
typedef TYPE_1__ vlc_value_t ;
typedef int vlc_object_t ;
typedef int lua_State ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (int *,int) ;
 int ** FUNC_2 (int *,int,char*) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,char const*,TYPE_1__*) ;
 int FUNC_5 (int *,char const*) ;
 int FUNC_6 (int *,int,TYPE_1__) ;

__attribute__((used)) static int FUNC_7( lua_State *VAR_2 )
{
    vlc_value_t VAR_3;
    vlc_object_t **VAR_4 = FUNC_2( VAR_2, 1, "vlc_object" );
    const char *VAR_5 = FUNC_1( VAR_2, 2 );

    int VAR_6 = FUNC_5( *VAR_4, VAR_5 );
    if( FUNC_4( *VAR_4, VAR_5, &VAR_3 ) != VAR_0 )
        return 0;

    FUNC_3( VAR_2, 2 );
    FUNC_6( VAR_2, VAR_6, VAR_3 );
    if( VAR_6 == VAR_1 )
        FUNC_0( VAR_3.psz_string );
    return 1;
}
