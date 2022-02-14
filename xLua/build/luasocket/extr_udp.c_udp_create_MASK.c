
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int yes ;
typedef int t_udp ;
typedef int t_socket ;
typedef TYPE_1__* p_udp ;
typedef int lua_State ;
struct TYPE_2__ {int family; int tm; int sock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 char* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char const*) ;
 int FUNC_5 (int ,int ,int ,void*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int,int) ;

__attribute__((used)) static int FUNC_8(lua_State *VAR_4, int VAR_5) {
    t_socket VAR_6;
    const char *VAR_7 = FUNC_1(&VAR_6, VAR_5, VAR_3);

    if (!VAR_7) {

        p_udp VAR_8 = (p_udp) FUNC_2(VAR_4, sizeof(t_udp));
        FUNC_0(VAR_4, "udp{unconnected}", -1);

        FUNC_6(&VAR_6);
        if (VAR_5 == VAR_2) {
            int VAR_9 = 1;
            FUNC_5(VAR_6, VAR_0, VAR_1,
                (void *)&VAR_9, sizeof(VAR_9));
        }
        VAR_8->sock = VAR_6;
        FUNC_7(&VAR_8->tm, -1, -1);
        VAR_8->family = VAR_5;
        return 1;
    } else {
        FUNC_3(VAR_4);
        FUNC_4(VAR_4, VAR_7);
        return 2;
    }
}
