
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* ports; } ;
struct TYPE_9__ {struct TYPE_9__* path; int fd; int event_source; } ;
typedef TYPE_1__ SocketPort ;
typedef TYPE_2__ Socket ;


 int FUNC_0 (int ,TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;

void FUNC_6(Socket *VAR_1) {
        SocketPort *VAR_2;

        FUNC_1(VAR_1);

        while ((VAR_2 = VAR_1->ports)) {
                FUNC_0(VAR_0, VAR_1->ports, VAR_2);

                FUNC_4(VAR_2->event_source);

                FUNC_5(VAR_2);
                FUNC_3(VAR_2->fd);
                FUNC_2(VAR_2->path);
                FUNC_2(VAR_2);
        }
}
