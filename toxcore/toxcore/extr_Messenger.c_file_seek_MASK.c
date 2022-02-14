
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct File_Transfers {scalar_t__ status; scalar_t__ size; scalar_t__ transferred; } ;
typedef int sending_pos ;
typedef size_t int32_t ;
struct TYPE_7__ {TYPE_1__* friendlist; } ;
struct TYPE_6__ {scalar_t__ status; struct File_Transfers* file_sending; struct File_Transfers* file_receiving; } ;
typedef TYPE_2__ Messenger ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_2__ const*,size_t) ;
 int FUNC_1 (int*,int) ;
 scalar_t__ FUNC_2 (TYPE_2__ const*,size_t,int,int,int ,int*,int) ;

int FUNC_3(const Messenger *VAR_5, int32_t VAR_6, uint32_t VAR_7, uint64_t VAR_8)
{
    if (FUNC_0(VAR_5, VAR_6))
        return -1;

    if (VAR_5->friendlist[VAR_6].status != VAR_3)
        return -2;

    uint32_t VAR_9;
    uint8_t VAR_10, VAR_11;

    if (VAR_7 >= (1 << 16)) {
        VAR_10 = 1;
        VAR_9 = (VAR_7 >> 16) - 1;
    } else {
        return -4;
    }

    if (VAR_9 >= VAR_4)
        return -3;

    VAR_11 = VAR_9;

    struct File_Transfers *VAR_12;

    if (VAR_10) {
        VAR_12 = &VAR_5->friendlist[VAR_6].file_receiving[VAR_11];
    } else {
        VAR_12 = &VAR_5->friendlist[VAR_6].file_sending[VAR_11];
    }

    if (VAR_12->status == VAR_1)
        return -3;

    if (VAR_12->status != VAR_2)
        return -5;

    if (VAR_8 >= VAR_12->size) {
        return -6;
    }

    uint64_t VAR_13 = VAR_8;
    FUNC_1((uint8_t *)&VAR_13, sizeof(VAR_13));

    if (FUNC_2(VAR_5, VAR_6, VAR_10, VAR_11, VAR_0, (uint8_t *)&VAR_13,
                                 sizeof(VAR_13))) {
        VAR_12->transferred = VAR_8;
    } else {
        return -8;
    }

    return 0;
}
