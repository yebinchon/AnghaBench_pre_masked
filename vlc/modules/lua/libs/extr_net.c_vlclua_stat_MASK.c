
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_ctime; int st_mtime; int st_atime; int st_size; int st_gid; int st_uid; int st_mode; } ;
typedef int lua_State ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 char* FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (int *,int,char*) ;
 scalar_t__ FUNC_12 (char const*,struct stat*) ;

__attribute__((used)) static int FUNC_13( lua_State *VAR_0 )
{
    const char *VAR_1 = FUNC_7( VAR_0, 1 );
    struct stat VAR_2;
    if( FUNC_12( VAR_1, &VAR_2 ) )
        return 0;

    FUNC_8( VAR_0 );
    if( FUNC_5( VAR_2.st_mode ) )
        FUNC_10( VAR_0, "file" );
    else if( FUNC_2( VAR_2.st_mode ) )
        FUNC_10( VAR_0, "dir" );
    else
        FUNC_10( VAR_0, "unknown" );
    FUNC_11( VAR_0, -2, "type" );
    FUNC_9( VAR_0, VAR_2.st_mode );
    FUNC_11( VAR_0, -2, "mode" );
    FUNC_9( VAR_0, VAR_2.st_uid );
    FUNC_11( VAR_0, -2, "uid" );
    FUNC_9( VAR_0, VAR_2.st_gid );
    FUNC_11( VAR_0, -2, "gid" );
    FUNC_9( VAR_0, VAR_2.st_size );
    FUNC_11( VAR_0, -2, "size" );
    FUNC_9( VAR_0, VAR_2.st_atime );
    FUNC_11( VAR_0, -2, "access_time" );
    FUNC_9( VAR_0, VAR_2.st_mtime );
    FUNC_11( VAR_0, -2, "modification_time" );
    FUNC_9( VAR_0, VAR_2.st_ctime );
    FUNC_11( VAR_0, -2, "creation_time" );
    return 1;
}
