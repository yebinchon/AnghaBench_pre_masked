
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ptr; } ;
struct epoll_event {int events; TYPE_1__ data; } ;
typedef int Server ;
typedef int Fifo ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,char*) ;

__attribute__((used)) static int FUNC_5(Server *VAR_2, struct epoll_event *VAR_3) {
        int VAR_4;
        Fifo *VAR_5;

        FUNC_1(VAR_2);

        if (!(VAR_3->events & VAR_1))
                return FUNC_4(FUNC_0(VAR_0),
                                      "Got invalid event from epoll. (3)");

        VAR_5 = (Fifo*) VAR_3->data.ptr;
        VAR_4 = FUNC_3(VAR_5);
        if (VAR_4 < 0) {
                FUNC_4(VAR_4, "Got error on fifo: %m");
                FUNC_2(VAR_5);
                return VAR_4;
        }

        return 0;
}
