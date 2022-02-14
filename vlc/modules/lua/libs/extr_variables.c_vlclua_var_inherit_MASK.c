
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
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int *,int) ;
 int ** FUNC_3 (int *,int,char*) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int *,char const*,int,TYPE_1__*) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *,int,TYPE_1__) ;

__attribute__((used)) static int FUNC_9( lua_State *VAR_3 )
{
    vlc_value_t VAR_4;
    vlc_object_t *VAR_5;
    if( FUNC_5( VAR_3, 1 ) == VAR_0 )
        VAR_5 = FUNC_7( VAR_3 );
    else
    {
        vlc_object_t **VAR_6 = FUNC_3( VAR_3, 1, "vlc_object" );
        VAR_5 = *VAR_6;
    }
    const char *VAR_7 = FUNC_2( VAR_3, 2 );

    int VAR_8 = FUNC_0( VAR_7 );
    if( FUNC_6( VAR_5, VAR_7, VAR_8, &VAR_4 ) != VAR_1 )
        return 0;

    FUNC_4( VAR_3, 2 );
    FUNC_8( VAR_3, VAR_8, VAR_4 );
    if( VAR_8 == VAR_2 )
        FUNC_1( VAR_4.psz_string );
    return 1;
}
