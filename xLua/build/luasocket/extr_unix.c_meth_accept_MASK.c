
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int t_unix ;
typedef int t_socket ;
typedef TYPE_1__* p_unix ;
typedef int p_timeout ;
typedef int p_send ;
typedef int p_recv ;
typedef int p_error ;
typedef int lua_State ;
struct TYPE_2__ {int tm; int io; int buf; int sock; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *,int ,int ,int ,int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int *,int *,int *,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *,int,int) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(lua_State *VAR_4) {
    p_unix VAR_5 = (p_unix) FUNC_0(VAR_4, "unix{server}", 1);
    p_timeout VAR_6 = FUNC_11(&VAR_5->tm);
    t_socket VAR_7;
    int VAR_8 = FUNC_7(&VAR_5->sock, &VAR_7, ((void*)0), ((void*)0), VAR_6);

    if (VAR_8 == VAR_0) {
        p_unix VAR_9 = (p_unix) FUNC_4(VAR_4, sizeof(t_unix));
        FUNC_1(VAR_4, "unix{client}", -1);

        FUNC_8(&VAR_7);
        VAR_9->sock = VAR_7;
        FUNC_3(&VAR_9->io, (p_send)VAR_3, (p_recv)VAR_2,
                (p_error) VAR_1, &VAR_9->sock);
        FUNC_10(&VAR_9->tm, -1, -1);
        FUNC_2(&VAR_9->buf, &VAR_9->io, &VAR_9->tm);
        return 1;
    } else {
        FUNC_5(VAR_4);
        FUNC_6(VAR_4, FUNC_9(VAR_8));
        return 2;
    }
}
