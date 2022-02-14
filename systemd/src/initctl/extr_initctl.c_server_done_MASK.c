
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bus; int epoll_fd; scalar_t__ fifos; } ;
typedef TYPE_1__ Server ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(Server *VAR_0) {
        FUNC_0(VAR_0);

        while (VAR_0->fifos)
                FUNC_1(VAR_0->fifos);

        VAR_0->epoll_fd = FUNC_2(VAR_0->epoll_fd);
        VAR_0->bus = FUNC_3(VAR_0->bus);
}
