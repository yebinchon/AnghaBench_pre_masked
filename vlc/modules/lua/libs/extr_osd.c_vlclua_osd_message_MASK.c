
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vout_thread_t ;
typedef int vlc_tick_t ;
typedef int lua_State ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 char* FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *,int,int ) ;
 char* FUNC_3 (int *,int,char*) ;
 int FUNC_4 (char const*) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,int,int ,int ,char const*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8( lua_State *VAR_1 )
{
    const char *VAR_2 = FUNC_1( VAR_1, 1 );
    int VAR_3 = (int)FUNC_2( VAR_1, 2, VAR_0 );
    const char *VAR_4 = FUNC_3( VAR_1, 3, "top-right" );
    vlc_tick_t VAR_5 = (vlc_tick_t)FUNC_2( VAR_1, 4, FUNC_0(1));

    vout_thread_t *VAR_6 = FUNC_5(VAR_1);
    if( VAR_6 )
    {
        FUNC_6( VAR_6, VAR_3, FUNC_4( VAR_4 ),
                      VAR_5, VAR_2 );
        FUNC_7( VAR_6 );
    }
    return 0;
}
