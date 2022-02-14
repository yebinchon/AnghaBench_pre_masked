
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* apidata; } ;
typedef TYPE_1__ aeEventLoop ;
struct TYPE_5__ {int wfds; int rfds; } ;
typedef TYPE_2__ aeApiState ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int *) ;

__attribute__((used)) static int FUNC_1(aeEventLoop *VAR_2, int VAR_3, int VAR_4) {
    aeApiState *VAR_5 = VAR_2->apidata;

    if (VAR_4 & VAR_0) FUNC_0(VAR_3,&VAR_5->rfds);
    if (VAR_4 & VAR_1) FUNC_0(VAR_3,&VAR_5->wfds);
    return 0;
}
