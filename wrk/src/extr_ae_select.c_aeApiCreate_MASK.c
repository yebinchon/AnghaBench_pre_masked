
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* apidata; } ;
typedef TYPE_1__ aeEventLoop ;
struct TYPE_6__ {int wfds; int rfds; } ;
typedef TYPE_2__ aeApiState ;


 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(aeEventLoop *VAR_0) {
    aeApiState *VAR_1 = FUNC_1(sizeof(aeApiState));

    if (!VAR_1) return -1;
    FUNC_0(&VAR_1->rfds);
    FUNC_0(&VAR_1->wfds);
    VAR_0->apidata = VAR_1;
    return 0;
}
