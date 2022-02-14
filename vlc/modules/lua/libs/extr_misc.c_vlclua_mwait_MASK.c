
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_interrupt_t ;
typedef int lua_State ;


 int FUNC_0 (double) ;
 double FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6( lua_State *VAR_0 )
{
    double VAR_1 = FUNC_1( VAR_0, 1 );

    vlc_interrupt_t *VAR_2 = FUNC_5( VAR_0 );
    int VAR_3 = FUNC_4( FUNC_0(VAR_1) );

    FUNC_3( VAR_2 );
    if( VAR_3 )
        return FUNC_2( VAR_0, "Interrupted." );
    return 0;
}
