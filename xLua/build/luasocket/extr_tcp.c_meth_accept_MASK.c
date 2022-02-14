
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int t_tcp ;
typedef int t_socket ;
typedef int p_timeout ;
typedef TYPE_1__* p_tcp ;
typedef int p_send ;
typedef int p_recv ;
typedef int p_error ;
typedef int lua_State ;
struct TYPE_3__ {int family; int tm; int io; int buf; int sock; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,int *,int *) ;
 char* FUNC_3 (int *,int ,int *,int ) ;
 int FUNC_4 (int *,int ,int ,int ,int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char const*) ;
 int FUNC_8 (TYPE_1__*,int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int,int) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(lua_State *VAR_3)
{
    p_tcp VAR_4 = (p_tcp) FUNC_0(VAR_3, "tcp{server}", 1);
    p_timeout VAR_5 = FUNC_11(&VAR_4->tm);
    t_socket VAR_6;
    const char *VAR_7 = FUNC_3(&VAR_4->sock, VAR_4->family, &VAR_6, VAR_5);

    if (VAR_7 == ((void*)0)) {
        p_tcp VAR_8 = (p_tcp) FUNC_5(VAR_3, sizeof(t_tcp));
        FUNC_1(VAR_3, "tcp{client}", -1);

        FUNC_8(VAR_8, 0, sizeof(t_tcp));
        FUNC_9(&VAR_6);
        VAR_8->sock = VAR_6;
        FUNC_4(&VAR_8->io, (p_send) VAR_2, (p_recv) VAR_1,
                (p_error) VAR_0, &VAR_8->sock);
        FUNC_10(&VAR_8->tm, -1, -1);
        FUNC_2(&VAR_8->buf, &VAR_8->io, &VAR_8->tm);
        VAR_8->family = VAR_4->family;
        return 1;
    } else {
        FUNC_6(VAR_3);
        FUNC_7(VAR_3, VAR_7);
        return 2;
    }
}
