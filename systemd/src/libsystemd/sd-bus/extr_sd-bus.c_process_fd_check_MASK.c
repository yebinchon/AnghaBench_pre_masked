
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ n_fds; TYPE_1__* header; scalar_t__ accept_fd; scalar_t__ is_monitor; } ;
typedef TYPE_2__ sd_bus_message ;
typedef TYPE_2__ sd_bus ;
struct TYPE_8__ {scalar_t__ type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;

__attribute__((used)) static int FUNC_2(sd_bus *VAR_2, sd_bus_message *VAR_3) {
        FUNC_0(VAR_2);
        FUNC_0(VAR_3);
        if (VAR_2->is_monitor)
                return 0;

        if (VAR_3->n_fds <= 0)
                return 0;

        if (VAR_2->accept_fd)
                return 0;

        if (VAR_3->header->type != VAR_1)
                return 1;

        return FUNC_1(VAR_3, VAR_0, "Message contains file descriptors, which I cannot accept. Sorry.");
}
