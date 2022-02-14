
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ n_ref; unsigned int n_containers; struct TYPE_7__* next; TYPE_1__* containers; struct TYPE_7__* hdr; } ;
typedef TYPE_2__ sd_netlink_message ;
struct TYPE_6__ {TYPE_2__* attributes; } ;


 int FUNC_0 (TYPE_2__*) ;

sd_netlink_message *FUNC_1(sd_netlink_message *VAR_0) {
        while (VAR_0 && --VAR_0->n_ref == 0) {
                unsigned VAR_1;

                FUNC_0(VAR_0->hdr);

                for (VAR_1 = 0; VAR_1 <= VAR_0->n_containers; VAR_1++)
                        FUNC_0(VAR_0->containers[VAR_1].attributes);

                sd_netlink_message *VAR_2 = VAR_0;
                VAR_0 = VAR_0->next;
                FUNC_0(VAR_2);
        }

        return ((void*)0);
}
