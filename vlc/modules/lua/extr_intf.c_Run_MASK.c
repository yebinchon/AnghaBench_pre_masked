
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ intf_thread_t ;
struct TYPE_6__ {int psz_filename; int * L; } ;
typedef TYPE_2__ intf_sys_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_1__*,char*,int ,int ) ;
 scalar_t__ FUNC_5 (int ,int *,int ) ;

__attribute__((used)) static void *FUNC_6( void *VAR_0 )
{
    intf_thread_t *VAR_1 = VAR_0;
    intf_sys_t *VAR_2 = VAR_1->p_sys;
    lua_State *VAR_3 = VAR_2->L;

    if( FUNC_5( FUNC_0(VAR_1), VAR_3, VAR_2->psz_filename ) )
    {
        FUNC_4( VAR_1, "Error loading script %s: %s", VAR_2->psz_filename,
                 FUNC_3( VAR_3, FUNC_1( VAR_3 ) ) );
        FUNC_2( VAR_3, 1 );
    }
    return ((void*)0);
}
