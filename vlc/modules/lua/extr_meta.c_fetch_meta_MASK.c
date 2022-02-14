
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_4__ {int p_item; } ;
typedef TYPE_1__ luabatch_context_t ;
typedef int lua_State ;


 int VAR_0 ;
 int * FUNC_0 (int *,int ,char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*,int *,char*,TYPE_1__ const*) ;

__attribute__((used)) static int FUNC_3( vlc_object_t *VAR_1, const char * VAR_2,
                       const luabatch_context_t *VAR_3 )
{
    lua_State *VAR_4 = FUNC_0( VAR_1, VAR_3->p_item, VAR_2 );
    if( !VAR_4 )
        return VAR_0;

    int VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_4, "fetch_meta", VAR_3);
    FUNC_1( VAR_4 );

    return VAR_5;
}
