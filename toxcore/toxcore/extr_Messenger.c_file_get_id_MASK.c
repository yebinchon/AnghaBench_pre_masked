
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct File_Transfers {scalar_t__ status; int id; } ;
typedef size_t int32_t ;
struct TYPE_6__ {TYPE_1__* friendlist; } ;
struct TYPE_5__ {scalar_t__ status; struct File_Transfers* file_sending; struct File_Transfers* file_receiving; } ;
typedef TYPE_2__ Messenger ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_2__ const*,size_t) ;
 int FUNC_1 (int*,int ,int ) ;

int FUNC_2(const Messenger *VAR_4, int32_t VAR_5, uint32_t VAR_6, uint8_t *VAR_7)
{
    if (FUNC_0(VAR_4, VAR_5))
        return -1;

    if (VAR_4->friendlist[VAR_5].status != VAR_2)
        return -2;

    uint32_t VAR_8;
    uint8_t VAR_9, VAR_10;

    if (VAR_6 >= (1 << 16)) {
        VAR_9 = 1;
        VAR_8 = (VAR_6 >> 16) - 1;
    } else {
        VAR_9 = 0;
        VAR_8 = VAR_6;
    }

    if (VAR_8 >= VAR_3)
        return -2;

    VAR_10 = VAR_8;

    struct File_Transfers *VAR_11;

    if (VAR_9) {
        VAR_11 = &VAR_4->friendlist[VAR_5].file_receiving[VAR_10];
    } else {
        VAR_11 = &VAR_4->friendlist[VAR_5].file_sending[VAR_10];
    }

    if (VAR_11->status == VAR_0)
        return -2;

    FUNC_1(VAR_7, VAR_11->id, VAR_1);
    return 0;
}
