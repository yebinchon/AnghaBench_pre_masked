
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ services_discovery_t ;
struct TYPE_6__ {int psz_filename; int * L; } ;
typedef TYPE_2__ services_discovery_sys_t ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,int,int ,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char const*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (TYPE_1__*,char*,int ,...) ;

__attribute__((used)) static int FUNC_8( services_discovery_t *VAR_2, const char *VAR_3 )
{
    services_discovery_sys_t *VAR_4 = VAR_2->p_sys;
    lua_State *VAR_5 = VAR_4->L;


    FUNC_0( VAR_5, "search" );
    if( !FUNC_2( VAR_5, FUNC_1( VAR_5 ) ) )
    {
        FUNC_7( VAR_2, "The script '%s' does not define any 'search' function",
                 VAR_4->psz_filename );
        FUNC_4( VAR_5, 1 );
        return VAR_0;
    }


    FUNC_5( VAR_5, VAR_3 );


    if( FUNC_3( VAR_5, 1, 0, 0 ) )
    {
        FUNC_7( VAR_2, "Error while running the script '%s': %s",
                 VAR_4->psz_filename, FUNC_6( VAR_5, FUNC_1( VAR_5 ) ) );
        FUNC_4( VAR_5, 1 );
        return VAR_0;
    }

    return VAR_1;
}
