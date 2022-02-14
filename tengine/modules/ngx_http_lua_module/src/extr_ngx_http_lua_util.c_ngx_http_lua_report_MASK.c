
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ngx_log_t ;
typedef int ngx_int_t ;
typedef int lua_State ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 char* FUNC_3 (int *,int) ;
 int FUNC_4 (int ,int *,int ,char*,char const*,char const*) ;

ngx_int_t
FUNC_5(ngx_log_t *VAR_4, lua_State *VAR_5, int VAR_6,
    const char *VAR_7)
{
    const char *VAR_8;

    if (VAR_6 && !FUNC_1(VAR_5, -1)) {
        VAR_8 = FUNC_3(VAR_5, -1);
        if (VAR_8 == ((void*)0)) {
            VAR_8 = "unknown error";
        }

        FUNC_4(VAR_2, VAR_4, 0, "%s error: %s", VAR_7, VAR_8);
        FUNC_2(VAR_5, 1);
    }


    FUNC_0(VAR_5, VAR_0, 0);

    return VAR_6 == 0 ? VAR_3 : VAR_1;
}
