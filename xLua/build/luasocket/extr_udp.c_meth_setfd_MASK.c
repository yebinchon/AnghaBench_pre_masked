
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ t_socket ;
typedef TYPE_1__* p_udp ;
typedef int lua_State ;
struct TYPE_2__ {scalar_t__ sock; } ;


 int FUNC_0 (int *,char*,int) ;
 scalar_t__ FUNC_1 (int *,int) ;

__attribute__((used)) static int FUNC_2(lua_State *VAR_0) {
    p_udp VAR_1 = (p_udp) FUNC_0(VAR_0, "udp{any}", 1);
    VAR_1->sock = (t_socket) FUNC_1(VAR_0, 2);
    return 0;
}
