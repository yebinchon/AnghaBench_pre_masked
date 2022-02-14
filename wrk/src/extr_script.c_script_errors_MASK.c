
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {char* member_0; int * member_2; int member_1; } ;
typedef TYPE_1__ table_field ;
typedef int lua_State ;
struct TYPE_6__ {int timeout; int status; int write; int read; int connect; } ;
typedef TYPE_2__ errors ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,char*) ;
 int FUNC_2 (int *,int,TYPE_1__ const*) ;

void FUNC_3(lua_State *VAR_1, errors *VAR_2) {
    uint64_t VAR_3[] = {
        VAR_2->connect,
        VAR_2->read,
        VAR_2->write,
        VAR_2->status,
        VAR_2->timeout
    };
    const table_field VAR_4[] = {
        { "connect", &VAR_0, VAR_3[0] },
        { "read", &VAR_0, VAR_3[1] },
        { "write", &VAR_0, VAR_3[2] },
        { "status", &VAR_0, VAR_3[3] },
        { "timeout", &VAR_0, VAR_3[4] },
        { ((void*)0), 0, ((void*)0) },
    };
    FUNC_0(VAR_1);
    FUNC_2(VAR_1, 2, VAR_4);
    FUNC_1(VAR_1, 1, "errors");
}
