
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ifreq {void* ifr_data; int ifr_name; } ;
struct ethtool_ringparam {scalar_t__ rx_pending; scalar_t__ tx_pending; int cmd; } ;
struct TYPE_3__ {scalar_t__ rx_pending; scalar_t__ tx_pending; scalar_t__ tx_pending_set; scalar_t__ rx_pending_set; } ;
typedef TYPE_1__ netdev_ring_param ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (int,int ,struct ifreq*) ;
 int FUNC_2 (int ,int ,char const*) ;

int FUNC_3(int *VAR_5, const char *VAR_6, netdev_ring_param *VAR_7) {
        struct ethtool_ringparam VAR_8 = {
                .cmd = VAR_0
        };
        struct ifreq VAR_9 = {
                .ifr_data = (void*) &VAR_8
        };
        bool VAR_10 = 0;
        int VAR_11;

        if (*VAR_5 < 0) {
                VAR_11 = FUNC_0(VAR_5, 1);
                if (VAR_11 < 0)
                        return VAR_11;
        }

        FUNC_2(VAR_9.ifr_name, VAR_2, VAR_6);

        VAR_11 = FUNC_1(*VAR_5, VAR_3, &VAR_9);
        if (VAR_11 < 0)
                return -VAR_4;

        if (VAR_7->rx_pending_set) {
                if (VAR_8.rx_pending != VAR_7->rx_pending) {
                        VAR_8.rx_pending = VAR_7->rx_pending;
                        VAR_10 = 1;
                }
        }

        if (VAR_7->tx_pending_set) {
                   if (VAR_8.tx_pending != VAR_7->tx_pending) {
                           VAR_8.tx_pending = VAR_7->tx_pending;
                           VAR_10 = 1;
                }
        }

        if (VAR_10) {
                VAR_8.cmd = VAR_1;

                VAR_11 = FUNC_1(*VAR_5, VAR_3, &VAR_9);
                if (VAR_11 < 0)
                        return -VAR_4;
        }

        return 0;
}
