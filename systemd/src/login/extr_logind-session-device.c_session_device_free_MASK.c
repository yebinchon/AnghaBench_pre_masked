
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {struct TYPE_12__* node; int dev; TYPE_2__* session; TYPE_1__* device; int fd; scalar_t__ pushed_fd; } ;
struct TYPE_11__ {int devices; int id; } ;
struct TYPE_10__ {int session_devices; } ;
typedef TYPE_3__ SessionDevice ;


 int FUNC_0 (int ,int ,TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_1 ;
 int FUNC_7 (int,char*,int ,int ,int ) ;
 int FUNC_8 (TYPE_3__*,int ) ;
 int FUNC_9 (TYPE_3__*) ;

void FUNC_10(SessionDevice *VAR_2) {
        FUNC_1(VAR_2);


        if (VAR_2->pushed_fd)
                (void) FUNC_7(0,
                                  "FDSTOREREMOVE=1\n"
                                  "FDNAME=session-%s-device-%u-%u",
                                  VAR_2->session->id, FUNC_4(VAR_2->dev), FUNC_5(VAR_2->dev));

        FUNC_9(VAR_2);
        FUNC_8(VAR_2, VAR_0);
        FUNC_6(VAR_2->fd);

        FUNC_0(VAR_1, VAR_2->device->session_devices, VAR_2);

        FUNC_3(VAR_2->session->devices, &VAR_2->dev);

        FUNC_2(VAR_2->node);
        FUNC_2(VAR_2);
}
