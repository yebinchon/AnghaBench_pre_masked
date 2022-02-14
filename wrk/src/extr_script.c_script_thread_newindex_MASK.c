
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* addr; } ;
typedef TYPE_1__ thread ;
struct addrinfo {int dummy; } ;
typedef int lua_State ;
struct TYPE_7__ {int ai_addr; } ;


 struct addrinfo* FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,int) ;
 char* FUNC_4 (int *,int) ;
 int FUNC_5 (struct addrinfo*,TYPE_2__*) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (int ) ;
 TYPE_2__* FUNC_8 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_9(lua_State *VAR_0) {
    thread *VAR_1 = FUNC_1(VAR_0);
    const char *VAR_2 = FUNC_4(VAR_0, -2);
    if (!FUNC_6("addr", VAR_2)) {
        struct addrinfo *VAR_3 = FUNC_0(VAR_0);
        if (VAR_1->addr) FUNC_7(VAR_1->addr->ai_addr);
        VAR_1->addr = FUNC_8(VAR_1->addr, sizeof(*VAR_3));
        FUNC_5(VAR_3, VAR_1->addr);
    } else {
        FUNC_2(VAR_0, "cannot set '%s' on thread", FUNC_3(VAR_0, -1));
    }
    return 0;
}
