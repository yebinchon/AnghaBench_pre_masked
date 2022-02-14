
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int fd; TYPE_1__* cache; scalar_t__ windows; } ;
struct TYPE_9__ {int fds; } ;
typedef TYPE_2__ MMapFileDescriptor ;
typedef TYPE_2__ MMapCache ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (scalar_t__) ;

void FUNC_7(MMapCache *VAR_0, MMapFileDescriptor *VAR_1) {
        FUNC_1(VAR_0);
        FUNC_1(VAR_1);





        FUNC_5(VAR_0);

        while (VAR_1->windows)
                FUNC_6(VAR_1->windows);

        if (VAR_1->cache)
                FUNC_2(FUNC_4(VAR_1->cache->fds, FUNC_0(VAR_1->fd)));

        FUNC_3(VAR_1);
}
