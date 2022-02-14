
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef TYPE_1__* p_udp ;
typedef int * p_timeout ;
typedef int lua_State ;
typedef int lua_Number ;
struct TYPE_2__ {int sock; int tm; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 char* FUNC_1 (int *,int,size_t*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,char const*,size_t,size_t*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(lua_State *VAR_1) {
    p_udp VAR_2 = (p_udp) FUNC_0(VAR_1, "udp{connected}", 1);
    p_timeout VAR_3 = &VAR_2->tm;
    size_t VAR_4, VAR_5 = 0;
    int VAR_6;
    const char *VAR_7 = FUNC_1(VAR_1, 2, &VAR_4);
    FUNC_6(VAR_3);
    VAR_6 = FUNC_5(&VAR_2->sock, VAR_7, VAR_4, &VAR_5, VAR_3);
    if (VAR_6 != VAR_0) {
        FUNC_2(VAR_1);
        FUNC_4(VAR_1, FUNC_7(VAR_6));
        return 2;
    }
    FUNC_3(VAR_1, (lua_Number) VAR_5);
    return 1;
}
