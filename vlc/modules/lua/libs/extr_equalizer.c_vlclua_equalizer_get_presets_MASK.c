
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (char**,char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int,char*) ;
 int * VAR_1 ;

__attribute__((used)) static int FUNC_5( lua_State *VAR_2 )
{
    FUNC_2( VAR_2 );
    char *VAR_3;
    for( int VAR_4 = 0 ; VAR_4 < VAR_0 ; VAR_4++ )
    {
        FUNC_3( VAR_2, VAR_1[VAR_4] );
        if( FUNC_0( &VAR_3 , "preset id=\"%d\"",VAR_4 ) == -1 )
            return 0;
        FUNC_4( VAR_2 , -2 , VAR_3 );
        FUNC_1(VAR_3);
    }
    return 1;
}
