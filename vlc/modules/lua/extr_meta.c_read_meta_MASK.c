
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int luabatch_context_t ;
typedef int lua_State ;
struct TYPE_2__ {int p_item; } ;
typedef TYPE_1__ demux_meta_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*) ;
 int * FUNC_1 (int *,int ,char const*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char const*,int *,char*,int *) ;

__attribute__((used)) static int FUNC_4( vlc_object_t *VAR_2, const char * VAR_3,
                      const luabatch_context_t *VAR_4 )
{

    demux_meta_t *VAR_5 = (demux_meta_t *)VAR_2;
    FUNC_0( VAR_4 );

    lua_State *VAR_6 = FUNC_1( VAR_2, VAR_5->p_item, VAR_3 );
    if( !VAR_6 )
        return VAR_0;

    int VAR_7 = FUNC_3(VAR_2, VAR_3, VAR_6, "read_meta", ((void*)0));
    FUNC_2( VAR_6 );


    return VAR_7 == VAR_1 ? VAR_0 : VAR_7;
}
