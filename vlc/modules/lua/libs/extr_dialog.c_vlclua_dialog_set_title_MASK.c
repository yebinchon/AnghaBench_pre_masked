
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_2__ {int lock; int psz_title; } ;
typedef TYPE_1__ extension_dialog_t ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8( lua_State *VAR_0 )
{
    extension_dialog_t **VAR_1 =
            (extension_dialog_t**) FUNC_2( VAR_0, 1, "dialog" );
    if( !VAR_1 || !*VAR_1 )
        return FUNC_3( VAR_0, "Can't get pointer to dialog" );
    extension_dialog_t *VAR_2 = *VAR_1;

    FUNC_6( &VAR_2->lock );

    const char *VAR_3 = FUNC_1( VAR_0, 2 );
    FUNC_0( VAR_2->psz_title );
    VAR_2->psz_title = FUNC_5( VAR_3 );

    FUNC_7( &VAR_2->lock );

    FUNC_4( VAR_0, 1 );

    return 1;
}
