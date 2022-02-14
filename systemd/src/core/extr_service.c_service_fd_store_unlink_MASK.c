
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int fd; struct TYPE_7__* fdname; int event_source; TYPE_1__* service; } ;
struct TYPE_6__ {scalar_t__ n_fd_store; int fd_store; } ;
typedef TYPE_2__ ServiceFDStore ;


 int FUNC_0 (int ,int ,TYPE_2__*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(ServiceFDStore *VAR_1) {

        if (!VAR_1)
                return;

        if (VAR_1->service) {
                FUNC_1(VAR_1->service->n_fd_store > 0);
                FUNC_0(VAR_0, VAR_1->service->fd_store, VAR_1);
                VAR_1->service->n_fd_store--;
        }

        FUNC_4(VAR_1->event_source);

        FUNC_2(VAR_1->fdname);
        FUNC_3(VAR_1->fd);
        FUNC_2(VAR_1);
}
