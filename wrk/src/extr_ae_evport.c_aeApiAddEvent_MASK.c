
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* events; TYPE_3__* apidata; } ;
typedef TYPE_2__ aeEventLoop ;
struct TYPE_8__ {int* pending_masks; int portfd; } ;
typedef TYPE_3__ aeApiState ;
struct TYPE_6__ {int mask; } ;


 int FUNC_0 (char*,int ,int,int) ;
 int FUNC_1 (TYPE_3__*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,char*,int,...) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(aeEventLoop *VAR_2, int VAR_3, int VAR_4) {
    aeApiState *VAR_5 = VAR_2->apidata;
    int VAR_6, VAR_7;

    if (VAR_0)
        FUNC_2(VAR_1, "aeApiAddEvent: fd %d mask 0x%x\n", VAR_3, VAR_4);






    VAR_6 = VAR_4 | VAR_2->events[VAR_3].mask;
    VAR_7 = FUNC_1(VAR_5, VAR_3);

    if (VAR_7 != -1) {






        if (VAR_0)
            FUNC_2(VAR_1, "aeApiAddEvent: adding to pending fd %d\n", VAR_3);
        VAR_5->pending_masks[VAR_7] |= VAR_6;
        return 0;
    }

    return (FUNC_0("aeApiAddEvent", VAR_5->portfd, VAR_3, VAR_6));
}
