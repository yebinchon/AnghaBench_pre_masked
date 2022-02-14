
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int t_unix ;
typedef scalar_t__ t_socket ;
typedef TYPE_1__* p_unix ;
typedef int p_send ;
typedef int p_recv ;
typedef int p_error ;
typedef int lua_State ;
struct TYPE_2__ {int tm; int io; int buf; scalar_t__ sock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,int *,int *) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,int ,int ,scalar_t__*) ;
 char* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (char const*,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_9 (scalar_t__*) ;
 int FUNC_10 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_11 (int *,int,int) ;

__attribute__((used)) static int FUNC_12(lua_State *VAR_6) {
    const char* VAR_7 = FUNC_3(VAR_6, 1);


    p_unix VAR_8 = (p_unix) FUNC_4(VAR_6, sizeof(t_unix));


    t_socket VAR_9 = FUNC_8(VAR_7, VAR_0|VAR_1);



    if (VAR_9 < 0) {
        FUNC_5(VAR_6);
        FUNC_7(VAR_6, FUNC_10(VAR_2));
        FUNC_6(VAR_6, VAR_2);
        return 3;
    }

    FUNC_0(VAR_6, "serial{client}", -1);

    FUNC_9(&VAR_9);
    VAR_8->sock = VAR_9;
    FUNC_2(&VAR_8->io, (p_send) VAR_5, (p_recv) VAR_4,
            (p_error) VAR_3, &VAR_8->sock);
    FUNC_11(&VAR_8->tm, -1, -1);
    FUNC_1(&VAR_8->buf, &VAR_8->io, &VAR_8->tm);
    return 1;
}
