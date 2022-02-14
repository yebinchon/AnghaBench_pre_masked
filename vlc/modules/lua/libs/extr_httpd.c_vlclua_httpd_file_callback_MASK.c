
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int uint8_t ;
typedef int lua_State ;
typedef int httpd_file_t ;
struct TYPE_3__ {int password; int * L; } ;
typedef TYPE_1__ httpd_file_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char**,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int,int,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,char const*) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 char* FUNC_9 (int *,int) ;
 int FUNC_10 (int *,char*,char const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_11 (char*) ;
 int * FUNC_12 (int *) ;
 int * FUNC_13 (int *,int,int*) ;

__attribute__((used)) static int FUNC_14(
    httpd_file_sys_t *VAR_5, httpd_file_t *VAR_6, uint8_t *VAR_7,
    uint8_t **VAR_8, int *VAR_9 )
{
    FUNC_0(VAR_6);
    lua_State *VAR_10 = VAR_5->L;


    FUNC_7( VAR_10, 1 );
    FUNC_7( VAR_10, 2 );

    FUNC_6( VAR_10, (const char *)VAR_7 );

    if( FUNC_4( VAR_10, 2, 1, 0 ) )
    {

        vlc_object_t *VAR_11 = FUNC_12( VAR_10 );
        const char *VAR_12 = FUNC_9( VAR_10, -1 );
        FUNC_10( VAR_11, "Error while running the lua HTTPd file callback: %s",
                 VAR_12 );
        FUNC_8( VAR_10, 2 );

        return VAR_0;
    }

    *VAR_8 = FUNC_13( VAR_10, -1, VAR_9 );
    if (!VAR_5->password)
    {
        FUNC_3(*VAR_8);
        if (FUNC_2((char**)VAR_8, VAR_3,
                FUNC_1(VAR_4), FUNC_1(VAR_2)) < 0) {
            *VAR_9 = 0;
        } else {
            *VAR_9 = FUNC_11((char*)*VAR_8);
        }
    }
    FUNC_5( VAR_10, 1 );

    return VAR_1;
}
