
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int fd; int address; int event_source; TYPE_1__* server; } ;
typedef TYPE_2__ VarlinkServerSocket ;
struct TYPE_8__ {int sockets; } ;


 int FUNC_0 (int ,int ,TYPE_2__*) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;

__attribute__((used)) static VarlinkServerSocket* FUNC_5(VarlinkServerSocket *VAR_1) {
        if (!VAR_1)
                return ((void*)0);

        if (VAR_1->server)
                FUNC_0(VAR_0, VAR_1->server->sockets, VAR_1);

        FUNC_4(VAR_1->event_source);

        FUNC_1(VAR_1->address);
        FUNC_3(VAR_1->fd);

        return FUNC_2(VAR_1);
}
