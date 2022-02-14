
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int stream_t ;
typedef int lua_State ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 char* FUNC_0 (char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,size_t,char*) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 char* FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *,char*) ;
 scalar_t__ FUNC_11 (int *,char*,int) ;

int FUNC_12( vlc_object_t *VAR_1, lua_State *VAR_2, const char *VAR_3 )
{
    char *VAR_4 = FUNC_0( VAR_3 );
    if( !FUNC_8( VAR_4, "://" ) ) {
        int VAR_5 = FUNC_2( VAR_2, VAR_4 );
        FUNC_1( VAR_4 );
        return VAR_5;
    }
    if( !FUNC_7( VAR_4, "file://", 7 ) ) {
        int VAR_6 = FUNC_2( VAR_2, VAR_4 + 7 );
        FUNC_1( VAR_4 );
        return VAR_6;
    }
    stream_t *VAR_7 = FUNC_10( VAR_1, VAR_4 );
    if( !VAR_7 )
    {
        FUNC_1( VAR_4 );
        return 1;
    }
    int64_t VAR_8 = FUNC_6( VAR_7 );
    char *VAR_9 = ( VAR_8 > 0 ) ? FUNC_5( VAR_8 ) : ((void*)0);
    if( !VAR_9 )
    {

        FUNC_9( VAR_7 );
        FUNC_1( VAR_4 );
        return 1;
    }
    int64_t VAR_10 = FUNC_11( VAR_7, VAR_9, (int) VAR_8 );
    int VAR_11 = ( VAR_10 == VAR_8 ) ? 0 : 1;
    if( !VAR_11 )
        VAR_11 = FUNC_3( VAR_2, VAR_9, (size_t) VAR_8, VAR_4 );
    if( !VAR_11 )
        VAR_11 = FUNC_4( VAR_2, 0, VAR_0, 0 );
    FUNC_9( VAR_7 );
    FUNC_1( VAR_9 );
    FUNC_1( VAR_4 );
    return VAR_11;
}
