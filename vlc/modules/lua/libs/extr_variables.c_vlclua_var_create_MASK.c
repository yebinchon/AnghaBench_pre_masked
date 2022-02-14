
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_value_t ;
typedef int vlc_object_t ;
typedef int lua_State ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (int *,int) ;
 int ** FUNC_1 (int *,int,char*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,char const*,int) ;
 int FUNC_4 (int *,char const*,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int,int *) ;

__attribute__((used)) static int FUNC_7( lua_State *VAR_5 )
{
    int VAR_6, VAR_7;
    vlc_object_t **VAR_8 = FUNC_1( VAR_5, 1, "vlc_object" );
    const char *VAR_9 = FUNC_0( VAR_5, 2 );

    switch( FUNC_2( VAR_5, 3 ) )
    {
        case 129:
            VAR_6 = VAR_2;
            break;
        case 131:
            VAR_6 = VAR_1;
            break;
        case 128:
            VAR_6 = VAR_3;
            break;
        case 130:
            VAR_6 = VAR_4;
            break;
        default:
            return 0;
    }

    if( ( VAR_7 = FUNC_3( *VAR_8, VAR_9, VAR_6 ) ) != VAR_0 )
        return FUNC_5( VAR_5, VAR_7 );


    if( VAR_6 == VAR_4 )
        return 0;

    vlc_value_t VAR_10;
    FUNC_6( VAR_5, VAR_6, &VAR_10 );
    return FUNC_5( VAR_5, FUNC_4( *VAR_8, VAR_9, VAR_10 ) );
}
