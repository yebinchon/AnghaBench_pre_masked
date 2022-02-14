
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint64_t ;
typedef size_t int32_t ;
struct TYPE_10__ {TYPE_3__* friendlist; } ;
struct TYPE_9__ {TYPE_2__* file_receiving; TYPE_1__* file_sending; } ;
struct TYPE_8__ {scalar_t__ status; scalar_t__ transferred; scalar_t__ size; } ;
struct TYPE_7__ {scalar_t__ status; scalar_t__ transferred; scalar_t__ size; } ;
typedef TYPE_4__ Messenger ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_4__ const*,size_t) ;

uint64_t FUNC_1(const Messenger *VAR_1, int32_t VAR_2, uint8_t VAR_3, uint8_t VAR_4)
{
    if (FUNC_0(VAR_1, VAR_2))
        return 0;

    if (VAR_4 == 0) {
        if (VAR_1->friendlist[VAR_2].file_sending[VAR_3].status == VAR_0)
            return 0;

        return VAR_1->friendlist[VAR_2].file_sending[VAR_3].size -
               VAR_1->friendlist[VAR_2].file_sending[VAR_3].transferred;
    } else {
        if (VAR_1->friendlist[VAR_2].file_receiving[VAR_3].status == VAR_0)
            return 0;

        return VAR_1->friendlist[VAR_2].file_receiving[VAR_3].size -
               VAR_1->friendlist[VAR_2].file_receiving[VAR_3].transferred;
    }
}
