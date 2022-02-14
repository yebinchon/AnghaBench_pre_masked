
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* floating; } ;
typedef TYPE_1__ sd_netlink_slot ;
struct TYPE_10__ {unsigned int rqueue_size; unsigned int rqueue_partial_size; int fd; int nlmsg_type_to_genl_family; int genl_family_to_nlmsg_type; int broadcast_group_refs; int event; int time_event_source; int io_event_source; int reply_callbacks_prioq; int reply_callbacks; TYPE_1__* slots; int * rbuffer; int * rqueue_partial; int * rqueue; } ;
typedef TYPE_2__ sd_netlink ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static sd_netlink *FUNC_10(sd_netlink *VAR_0) {
        sd_netlink_slot *VAR_1;
        unsigned VAR_2;

        FUNC_0(VAR_0);

        for (VAR_2 = 0; VAR_2 < VAR_0->rqueue_size; VAR_2++)
                FUNC_9(VAR_0->rqueue[VAR_2]);
        FUNC_1(VAR_0->rqueue);

        for (VAR_2 = 0; VAR_2 < VAR_0->rqueue_partial_size; VAR_2++)
                FUNC_9(VAR_0->rqueue_partial[VAR_2]);
        FUNC_1(VAR_0->rqueue_partial);

        FUNC_1(VAR_0->rbuffer);

        while ((VAR_1 = VAR_0->slots)) {
                FUNC_0(VAR_1->floating);
                FUNC_4(VAR_1, 1);
        }
        FUNC_2(VAR_0->reply_callbacks);
        FUNC_5(VAR_0->reply_callbacks_prioq);

        FUNC_7(VAR_0->io_event_source);
        FUNC_7(VAR_0->time_event_source);
        FUNC_8(VAR_0->event);

        FUNC_2(VAR_0->broadcast_group_refs);

        FUNC_2(VAR_0->genl_family_to_nlmsg_type);
        FUNC_2(VAR_0->nlmsg_type_to_genl_family);

        FUNC_6(VAR_0->fd);
        return FUNC_3(VAR_0);
}
