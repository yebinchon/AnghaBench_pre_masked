
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct File_Transfers {scalar_t__ status; int paused; } ;
typedef size_t int32_t ;
struct TYPE_7__ {TYPE_1__* friendlist; } ;
struct TYPE_6__ {scalar_t__ status; int num_sending_files; struct File_Transfers* file_sending; struct File_Transfers* file_receiving; } ;
typedef TYPE_2__ Messenger ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (TYPE_2__ const*,size_t) ;
 scalar_t__ FUNC_1 (TYPE_2__ const*,size_t,int,int,unsigned int,int ,int ) ;

int FUNC_2(const Messenger *VAR_10, int32_t VAR_11, uint32_t VAR_12, unsigned int VAR_13)
{
    if (FUNC_0(VAR_10, VAR_11))
        return -1;

    if (VAR_10->friendlist[VAR_11].status != VAR_8)
        return -2;

    uint32_t VAR_14;
    uint8_t VAR_15, VAR_16;

    if (VAR_12 >= (1 << 16)) {
        VAR_15 = 1;
        VAR_14 = (VAR_12 >> 16) - 1;
    } else {
        VAR_15 = 0;
        VAR_14 = VAR_12;
    }

    if (VAR_14 >= VAR_9)
        return -3;

    VAR_16 = VAR_14;

    struct File_Transfers *VAR_17;

    if (VAR_15) {
        VAR_17 = &VAR_10->friendlist[VAR_11].file_receiving[VAR_16];
    } else {
        VAR_17 = &VAR_10->friendlist[VAR_11].file_sending[VAR_16];
    }

    if (VAR_17->status == VAR_3)
        return -3;

    if (VAR_13 > VAR_1)
        return -4;

    if (VAR_13 == VAR_2 && ((VAR_17->paused & VAR_7) || VAR_17->status != VAR_5))
        return -5;

    if (VAR_13 == VAR_0) {
        if (VAR_17->status == VAR_5) {
            if (!(VAR_17->paused & VAR_7)) {
                if (VAR_17->paused & VAR_6) {
                    return -6;
                } else {
                    return -7;
                }
            }
        } else {
            if (VAR_17->status != VAR_4)
                return -7;

            if (!VAR_15)
                return -6;
        }
    }

    if (FUNC_1(VAR_10, VAR_11, VAR_15, VAR_16, VAR_13, 0, 0)) {
        if (VAR_13 == VAR_1) {
            VAR_17->status = VAR_3;

            if (VAR_15 == 0) {
                --VAR_10->friendlist[VAR_11].num_sending_files;
            }
        } else if (VAR_13 == VAR_2) {
            VAR_17->paused |= VAR_7;
        } else if (VAR_13 == VAR_0) {
            VAR_17->status = VAR_5;

            if (VAR_17->paused & VAR_7) {
                VAR_17->paused ^= VAR_7;
            }
        }
    } else {
        return -8;
    }

    return 0;
}
