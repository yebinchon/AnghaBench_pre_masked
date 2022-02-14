
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int socket_mode; int directory_mode; int transparent; int free_bind; int reuse_port; int bind_to_device; int bind_ipv6_only; int backlog; } ;
typedef TYPE_1__ SocketAddress ;
typedef TYPE_1__ const Socket ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (TYPE_1__ const*,int,int ,int ,int ,int ,int ,int ,int ,int ,char const*) ;

__attribute__((used)) static int FUNC_2(
                Socket *VAR_2,
                const SocketAddress *VAR_3,
                const char *VAR_4) {

        FUNC_0(VAR_2);
        FUNC_0(VAR_3);

        return FUNC_1(
                        VAR_3,
                        VAR_0|VAR_1,
                        VAR_2->backlog,
                        VAR_2->bind_ipv6_only,
                        VAR_2->bind_to_device,
                        VAR_2->reuse_port,
                        VAR_2->free_bind,
                        VAR_2->transparent,
                        VAR_2->directory_mode,
                        VAR_2->socket_mode,
                        VAR_4);
}
