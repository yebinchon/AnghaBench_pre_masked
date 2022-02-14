
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ action; scalar_t__ seqnum; int sealed; int subsystem; int devpath; } ;
typedef TYPE_1__ sd_device ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char*) ;

__attribute__((used)) static int FUNC_2(sd_device *VAR_1) {
        FUNC_0(VAR_1);

        if (!VAR_1->devpath || !VAR_1->subsystem || VAR_1->action < 0 || VAR_1->seqnum == 0) {
                FUNC_1(VAR_1, "sd-device: Device created from strv or nulstr lacks devpath, subsystem, action or seqnum.");
                return -VAR_0;
        }

        VAR_1->sealed = 1;

        return 0;
}
