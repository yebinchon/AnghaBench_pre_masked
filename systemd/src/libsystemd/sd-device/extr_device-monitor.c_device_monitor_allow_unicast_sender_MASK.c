
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int nl_pid; } ;
struct TYPE_12__ {TYPE_3__ nl; } ;
struct TYPE_9__ {int nl_pid; } ;
struct TYPE_10__ {TYPE_1__ nl; } ;
struct TYPE_13__ {TYPE_4__ snl; TYPE_2__ snl_trusted_sender; } ;
typedef TYPE_5__ sd_device_monitor ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,int ) ;

int FUNC_1(sd_device_monitor *VAR_1, sd_device_monitor *VAR_2) {
        FUNC_0(VAR_1, -VAR_0);
        FUNC_0(VAR_2, -VAR_0);

        VAR_1->snl_trusted_sender.nl.nl_pid = VAR_2->snl.nl.nl_pid;
        return 0;
}
