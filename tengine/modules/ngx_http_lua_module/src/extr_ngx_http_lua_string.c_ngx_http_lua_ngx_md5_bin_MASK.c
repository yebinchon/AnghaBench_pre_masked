
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int ngx_md5_t ;
typedef int md5_buf ;
typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (int *,int,size_t*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,size_t) ;

__attribute__((used)) static int
FUNC_9(lua_State *VAR_1)
{
    u_char *VAR_2;
    size_t VAR_3;

    ngx_md5_t VAR_4;
    u_char VAR_5[VAR_0];

    if (FUNC_3(VAR_1) != 1) {
        return FUNC_2(VAR_1, "expecting one argument");
    }

    if (FUNC_4(VAR_1, 1)) {
        VAR_2 = (u_char *) "";
        VAR_3 = 0;

    } else {
        VAR_2 = (u_char *) FUNC_1(VAR_1, 1, &VAR_3);
    }

    FUNC_0("slen: %d", (int) VAR_3);

    FUNC_7(&VAR_4);
    FUNC_8(&VAR_4, VAR_2, VAR_3);
    FUNC_6(VAR_5, &VAR_4);

    FUNC_5(VAR_1, (char *) VAR_5, sizeof(VAR_5));

    return 1;
}
