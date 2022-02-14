
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct File_Transfers {scalar_t__ status; int paused; scalar_t__ size; scalar_t__ requested; scalar_t__ transferred; } ;
typedef int position ;
typedef size_t int32_t ;
struct TYPE_9__ {TYPE_1__* friendlist; int file_filecontrol_userdata; int (* file_filecontrol ) (TYPE_2__*,size_t,int,int,int ) ;} ;
struct TYPE_8__ {int num_sending_files; struct File_Transfers* file_sending; struct File_Transfers* file_receiving; } ;
typedef TYPE_2__ Messenger ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__*,int*,int) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (TYPE_2__*,size_t,int,int,int,int ,int ) ;
 int FUNC_3 (TYPE_2__*,size_t,int,int,int ) ;
 int FUNC_4 (TYPE_2__*,size_t,int,int,int ) ;
 int FUNC_5 (TYPE_2__*,size_t,int,int,int ) ;

__attribute__((used)) static int FUNC_6(Messenger *VAR_8, int32_t VAR_9, uint8_t VAR_10, uint8_t VAR_11,
                              uint8_t VAR_12, uint8_t *VAR_13, uint16_t VAR_14)
{
    if (VAR_10 > 1)
        return -1;

    if (VAR_12 > VAR_3)
        return -1;

    uint32_t VAR_15 = VAR_11;
    struct File_Transfers *VAR_16;

    if (VAR_10 == 0) {
        VAR_15 += 1;
        VAR_15 <<= 16;
        VAR_16 = &VAR_8->friendlist[VAR_9].file_receiving[VAR_11];
    } else {
        VAR_16 = &VAR_8->friendlist[VAR_9].file_sending[VAR_11];
    }

    if (VAR_16->status == VAR_4) {

        FUNC_2(VAR_8, VAR_9, !VAR_10, VAR_11, VAR_1, 0, 0);
        return -1;
    }

    if (VAR_12 == VAR_0) {
        if (VAR_10 && VAR_16->status == VAR_5) {
            VAR_16->status = VAR_6;
        } else {
            if (VAR_16->paused & VAR_7) {
                VAR_16->paused ^= VAR_7;
            } else {
                return -1;
            }
        }

        if (VAR_8->file_filecontrol)
            (*VAR_8->file_filecontrol)(VAR_8, VAR_9, VAR_15, VAR_12, VAR_8->file_filecontrol_userdata);
    } else if (VAR_12 == VAR_2) {
        if ((VAR_16->paused & VAR_7) || VAR_16->status != VAR_6) {
            return -1;
        }

        VAR_16->paused |= VAR_7;

        if (VAR_8->file_filecontrol)
            (*VAR_8->file_filecontrol)(VAR_8, VAR_9, VAR_15, VAR_12, VAR_8->file_filecontrol_userdata);
    } else if (VAR_12 == VAR_1) {

        if (VAR_8->file_filecontrol)
            (*VAR_8->file_filecontrol)(VAR_8, VAR_9, VAR_15, VAR_12, VAR_8->file_filecontrol_userdata);

        VAR_16->status = VAR_4;

        if (VAR_10) {
            --VAR_8->friendlist[VAR_9].num_sending_files;
        }

    } else if (VAR_12 == VAR_3) {
        uint64_t VAR_17;

        if (VAR_14 != sizeof(VAR_17)) {
            return -1;
        }


        if (VAR_16->status != VAR_5 || !VAR_10) {
            return -1;
        }

        FUNC_0(&VAR_17, VAR_13, sizeof(VAR_17));
        FUNC_1((uint8_t *) &VAR_17, sizeof(VAR_17));

        if (VAR_17 >= VAR_16->size) {
            return -1;
        }

        VAR_16->transferred = VAR_16->requested = VAR_17;
    } else {
        return -1;
    }

    return 0;
}
