
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int t_unix ;
typedef int t_socket ;
typedef TYPE_1__* p_unix ;
typedef int p_send ;
typedef int p_recv ;
typedef int p_error ;
typedef int lua_State ;
struct TYPE_2__ {int tm; int io; int buf; int sock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *,int ,int ,int ,int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ,int ,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *,int,int) ;

__attribute__((used)) static int FUNC_10(lua_State *VAR_6) {
    t_socket VAR_7;
    int VAR_8 = FUNC_6(&VAR_7, VAR_0, VAR_2, 0);

    if (VAR_8 == VAR_1) {

        p_unix VAR_9 = (p_unix) FUNC_3(VAR_6, sizeof(t_unix));

        FUNC_0(VAR_6, "unix{master}", -1);

        FUNC_7(&VAR_7);
        VAR_9->sock = VAR_7;
        FUNC_2(&VAR_9->io, (p_send) VAR_5, (p_recv) VAR_4,
                (p_error) VAR_3, &VAR_9->sock);
        FUNC_9(&VAR_9->tm, -1, -1);
        FUNC_1(&VAR_9->buf, &VAR_9->io, &VAR_9->tm);
        return 1;
    } else {
        FUNC_4(VAR_6);
        FUNC_5(VAR_6, FUNC_8(VAR_8));
        return 2;
    }
}
