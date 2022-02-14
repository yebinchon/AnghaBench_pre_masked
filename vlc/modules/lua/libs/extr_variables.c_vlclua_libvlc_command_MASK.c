
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* psz_string; } ;
typedef TYPE_1__ vlc_value_t ;
typedef int vlc_object_t ;
typedef int lua_State ;


 int * FUNC_0 (int ) ;
 int VAR_0 ;
 char* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*,char const*) ;
 scalar_t__ FUNC_3 (int *,int,char*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char const*,TYPE_1__) ;
 int FUNC_6 (int *,char const*) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;

__attribute__((used)) static int FUNC_10( lua_State *VAR_1 )
{
    vlc_object_t * VAR_2 = FUNC_8( VAR_1 );
    vlc_object_t *VAR_3 = FUNC_0(FUNC_7(VAR_2));
    vlc_value_t VAR_4;

    const char *VAR_5 = FUNC_1( VAR_1, 1 );
    VAR_4.psz_string = (char*)FUNC_3( VAR_1, 2, "" );

    int VAR_6 = FUNC_6( VAR_3, VAR_5 );
    if( ! (VAR_6 & VAR_0) )
    {
        return FUNC_2( VAR_1, "libvlc's \"%s\" is not a command",
                           VAR_5 );
    }

    int VAR_7 = FUNC_5( VAR_3, VAR_5, VAR_4 );
    FUNC_4( VAR_1, 2 );

    return FUNC_9( VAR_1, VAR_7 );
}
