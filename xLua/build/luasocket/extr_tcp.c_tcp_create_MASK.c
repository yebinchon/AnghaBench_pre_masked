
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int yes ;
typedef int t_tcp ;
typedef int t_socket ;
typedef TYPE_1__* p_tcp ;
typedef int p_send ;
typedef int p_recv ;
typedef int p_error ;
typedef int lua_State ;
struct TYPE_3__ {int family; int tm; int io; int buf; int sock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,int *,int *) ;
 char* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *,int ,int ,int ,int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char const*) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;
 int FUNC_8 (int ,int ,int ,void*,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int,int) ;

__attribute__((used)) static int FUNC_11(lua_State *VAR_7, int VAR_8) {
    t_socket VAR_9;
    const char *VAR_10 = FUNC_2(&VAR_9, VAR_8, VAR_3);

    if (!VAR_10) {

        p_tcp VAR_11 = (p_tcp) FUNC_4(VAR_7, sizeof(t_tcp));
        FUNC_7(VAR_11, 0, sizeof(t_tcp));

        FUNC_0(VAR_7, "tcp{master}", -1);

        FUNC_9(&VAR_9);
        if (VAR_8 == VAR_2) {
            int VAR_12 = 1;
            FUNC_8(VAR_9, VAR_0, VAR_1,
                (void *)&VAR_12, sizeof(VAR_12));
        }
        VAR_11->sock = VAR_9;
        FUNC_3(&VAR_11->io, (p_send) VAR_6, (p_recv) VAR_5,
                (p_error) VAR_4, &VAR_11->sock);
        FUNC_10(&VAR_11->tm, -1, -1);
        FUNC_1(&VAR_11->buf, &VAR_11->io, &VAR_11->tm);
        VAR_11->family = VAR_8;
        return 1;
    } else {
        FUNC_5(VAR_7);
        FUNC_6(VAR_7, VAR_10);
        return 2;
    }
}
