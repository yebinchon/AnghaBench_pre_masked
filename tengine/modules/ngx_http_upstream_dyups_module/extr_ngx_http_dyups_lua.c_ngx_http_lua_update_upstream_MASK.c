
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_6__ {size_t len; int * data; } ;
typedef TYPE_1__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_7__ {int * pos; int * end; int * last; int * start; } ;
typedef TYPE_2__ ngx_buf_t ;
typedef int lua_State ;
typedef int lua_Integer ;


 scalar_t__ FUNC_0 (int *,int,size_t*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,char*,size_t) ;
 scalar_t__ FUNC_5 (TYPE_1__*,TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_6(lua_State *VAR_0)
{
    size_t VAR_1;
    ngx_int_t VAR_2;
    ngx_str_t VAR_3, VAR_4;
    ngx_buf_t VAR_5;

    if (FUNC_2(VAR_0) != 2) {
        return FUNC_1(VAR_0, "exactly 2 arguments expected");
    }

    VAR_3.data = (u_char *) FUNC_0(VAR_0, 1, &VAR_3.len);
    VAR_5.pos = VAR_5.start = (u_char *) FUNC_0(VAR_0, 2, &VAR_1);
    VAR_5.last = VAR_5.end = VAR_5.pos + VAR_1;

    VAR_2 = FUNC_5(&VAR_3, &VAR_5, &VAR_4);

    FUNC_3(VAR_0, (lua_Integer) VAR_2);
    FUNC_4(VAR_0, (char *) VAR_4.data, VAR_4.len);

    return 2;
}
