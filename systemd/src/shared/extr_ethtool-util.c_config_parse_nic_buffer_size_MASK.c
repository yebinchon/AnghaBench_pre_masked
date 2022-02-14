
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int rx_pending; int rx_pending_set; int tx_pending; int tx_pending_set; } ;
typedef TYPE_1__ netdev_ring_param ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (char const*,int ,char const*,unsigned int,int,char*,char const*,...) ;
 int FUNC_2 (char const*,int*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;

int FUNC_4(const char *VAR_1,
                                 const char *VAR_2,
                                 unsigned VAR_3,
                                 const char *VAR_4,
                                 unsigned VAR_5,
                                 const char *VAR_6,
                                 int VAR_7,
                                 const char *VAR_8,
                                 void *VAR_9,
                                 void *VAR_10) {
        netdev_ring_param *VAR_11 = VAR_9;
        uint32_t VAR_12;
        int VAR_13;

        FUNC_0(VAR_2);
        FUNC_0(VAR_4);
        FUNC_0(VAR_6);
        FUNC_0(VAR_8);
        FUNC_0(VAR_9);

        VAR_13 = FUNC_2(VAR_8, &VAR_12);
        if (VAR_13 < 0) {
                FUNC_1(VAR_1, VAR_0, VAR_2, VAR_3, VAR_13, "Failed to parse interface buffer value, ignoring: %s", VAR_8);
                return 0;
        }

        if (VAR_12 < 1) {
                FUNC_1(VAR_1, VAR_0, VAR_2, VAR_3, 0, "Invalid %s value, ignoring: %s", VAR_6, VAR_8);
                return 0;
        }

        if (FUNC_3(VAR_6, "RxBufferSize")) {
                VAR_11->rx_pending = VAR_12;
                VAR_11->rx_pending_set = 1;
        } else if (FUNC_3(VAR_6, "TxBufferSize")) {
                VAR_11->tx_pending = VAR_12;
                VAR_11->tx_pending_set = 1;
        }

        return 0;
}
