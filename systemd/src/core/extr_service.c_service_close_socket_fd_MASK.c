
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int accept_socket; int socket_fd; } ;
typedef TYPE_1__ Service ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;

void FUNC_7(Service *VAR_0) {
        FUNC_3(VAR_0);



        VAR_0->socket_fd = FUNC_4(VAR_0->socket_fd);

        if (FUNC_2(VAR_0->accept_socket)) {
                FUNC_5(FUNC_0(FUNC_1(VAR_0->accept_socket)));
                FUNC_6(&VAR_0->accept_socket);
        }
}
