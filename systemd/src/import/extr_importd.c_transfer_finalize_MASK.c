
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ n_canceled; int object_path; int id; TYPE_1__* manager; } ;
typedef TYPE_2__ Transfer ;
struct TYPE_7__ {int bus; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,char*,char*,char*,char*,int ,int ,char*) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_5(Transfer *VAR_0, bool VAR_1) {
        int VAR_2;

        FUNC_0(VAR_0);

        FUNC_3(VAR_0, 1);

        VAR_2 = FUNC_2(
                        VAR_0->manager->bus,
                        "/org/freedesktop/import1",
                        "org.freedesktop.import1.Manager",
                        "TransferRemoved",
                        "uos",
                        VAR_0->id,
                        VAR_0->object_path,
                        VAR_1 ? "done" :
                        VAR_0->n_canceled > 0 ? "canceled" : "failed");

        if (VAR_2 < 0)
                FUNC_1(VAR_2, "Cannot emit message: %m");

        FUNC_4(VAR_0);
        return 0;
}
