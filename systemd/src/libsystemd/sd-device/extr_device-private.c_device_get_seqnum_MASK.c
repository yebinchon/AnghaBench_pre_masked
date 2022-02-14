
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_4__ {scalar_t__ seqnum; } ;
typedef TYPE_1__ sd_device ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

int FUNC_1(sd_device *VAR_1, uint64_t *VAR_2) {
        FUNC_0(VAR_1);

        if (VAR_1->seqnum == 0)
                return -VAR_0;

        if (VAR_2)
                *VAR_2 = VAR_1->seqnum;

        return 0;
}
