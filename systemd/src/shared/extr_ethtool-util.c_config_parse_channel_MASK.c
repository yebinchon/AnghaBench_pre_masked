
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int rx_count; int rx_count_set; int tx_count; int tx_count_set; int other_count; int other_count_set; int combined_count; int combined_count_set; } ;
typedef TYPE_1__ netdev_channels ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (char const*,int ,char const*,unsigned int,int,char*,char const*,...) ;
 int FUNC_2 (char const*,int*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;

int FUNC_4(const char *VAR_2,
                         const char *VAR_3,
                         unsigned VAR_4,
                         const char *VAR_5,
                         unsigned VAR_6,
                         const char *VAR_7,
                         int VAR_8,
                         const char *VAR_9,
                         void *VAR_10,
                         void *VAR_11) {
        netdev_channels *VAR_12 = VAR_10;
        uint32_t VAR_13;
        int VAR_14;

        FUNC_0(VAR_3);
        FUNC_0(VAR_5);
        FUNC_0(VAR_7);
        FUNC_0(VAR_9);
        FUNC_0(VAR_10);

        VAR_14 = FUNC_2(VAR_9, &VAR_13);
        if (VAR_14 < 0) {
                FUNC_1(VAR_2, VAR_1, VAR_3, VAR_4, VAR_14, "Failed to parse channel value, ignoring: %s", VAR_9);
                return 0;
        }

        if (VAR_13 < 1) {
                FUNC_1(VAR_2, VAR_1, VAR_3, VAR_4, -VAR_0, "Invalid %s value, ignoring: %s", VAR_7, VAR_9);
                return 0;
        }

        if (FUNC_3(VAR_7, "RxChannels")) {
                VAR_12->rx_count = VAR_13;
                VAR_12->rx_count_set = 1;
        } else if (FUNC_3(VAR_7, "TxChannels")) {
                VAR_12->tx_count = VAR_13;
                VAR_12->tx_count_set = 1;
        } else if (FUNC_3(VAR_7, "OtherChannels")) {
                VAR_12->other_count = VAR_13;
                VAR_12->other_count_set = 1;
        } else if (FUNC_3(VAR_7, "CombinedChannels")) {
                VAR_12->combined_count = VAR_13;
                VAR_12->combined_count_set = 1;
        }

        return 0;
}
