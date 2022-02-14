
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct ifreq {void* ifr_data; int ifr_name; } ;
struct ethtool_cmd {int autoneg; int port; int duplex; int cmd; } ;
typedef int NetDevPort ;
typedef int Duplex ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct ethtool_cmd*) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (int,int ,struct ifreq*) ;
 int FUNC_3 (int ,int ,char const*) ;

int FUNC_4(int *VAR_6, const char *VAR_7,
                          int *VAR_8, size_t *VAR_9,
                          Duplex *VAR_10, NetDevPort *VAR_11) {
        struct ethtool_cmd VAR_12 = {
                .cmd = VAR_0,
        };
        struct ifreq VAR_13 = {
                .ifr_data = (void*) &VAR_12,
        };
        int VAR_14;

        if (*VAR_6 < 0) {
                VAR_14 = FUNC_1(VAR_6, 0);
                if (VAR_14 < 0)
                        return VAR_14;
        }

        FUNC_3(VAR_13.ifr_name, VAR_1, VAR_7);

        VAR_14 = FUNC_2(*VAR_6, VAR_2, &VAR_13);
        if (VAR_14 < 0)
                return -VAR_5;

        if (VAR_8)
                *VAR_8 = VAR_12.autoneg;

        if (VAR_9) {
                uint32_t VAR_15;

                VAR_15 = FUNC_0(&VAR_12);
                *VAR_9 = VAR_15 == (uint32_t) VAR_4 ?
                        VAR_3 : (size_t) VAR_15 * 1000 * 1000;
        }

        if (VAR_10)
                *VAR_10 = VAR_12.duplex;

        if (VAR_11)
                *VAR_11 = VAR_12.port;

        return 0;
}
