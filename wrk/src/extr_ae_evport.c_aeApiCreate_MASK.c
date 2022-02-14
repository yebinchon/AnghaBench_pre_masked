
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* apidata; } ;
typedef TYPE_1__ aeEventLoop ;
struct TYPE_7__ {int portfd; int* pending_fds; int * pending_masks; scalar_t__ npending; } ;
typedef TYPE_2__ aeApiState ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(aeEventLoop *VAR_2) {
    int VAR_3;
    aeApiState *VAR_4 = FUNC_2(sizeof(aeApiState));
    if (!VAR_4) return -1;

    VAR_4->portfd = FUNC_0();
    if (VAR_4->portfd == -1) {
        FUNC_1(VAR_4);
        return -1;
    }

    VAR_4->npending = 0;

    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
        VAR_4->pending_fds[VAR_3] = -1;
        VAR_4->pending_masks[VAR_3] = VAR_0;
    }

    VAR_2->apidata = VAR_4;
    return 0;
}
