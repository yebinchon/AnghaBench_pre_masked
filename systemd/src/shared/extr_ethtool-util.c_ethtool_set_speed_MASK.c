
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {void* ifr_data; int ifr_name; } ;
struct ethtool_cmd {int cmd; int duplex; } ;
typedef int Duplex ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int FUNC_0 (struct ethtool_cmd*) ;
 int FUNC_1 (struct ethtool_cmd*,unsigned int) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (int,int ,struct ifreq*) ;
 int FUNC_4 (int ,int ,char const*) ;

int FUNC_5(int *VAR_8, const char *VAR_9, unsigned VAR_10, Duplex VAR_11) {
        struct ethtool_cmd VAR_12 = {
                .cmd = VAR_2
        };
        struct ifreq VAR_13 = {
                .ifr_data = (void*) &VAR_12
        };
        bool VAR_14 = 0;
        int VAR_15;

        if (VAR_10 == 0 && VAR_11 == VAR_6)
                return 0;

        if (*VAR_8 < 0) {
                VAR_15 = FUNC_2(VAR_8, 1);
                if (VAR_15 < 0)
                        return VAR_15;
        }

        FUNC_4(VAR_13.ifr_name, VAR_4, VAR_9);

        VAR_15 = FUNC_3(*VAR_8, VAR_5, &VAR_13);
        if (VAR_15 < 0)
                return -VAR_7;

        if (FUNC_0(&VAR_12) != VAR_10) {
                FUNC_1(&VAR_12, VAR_10);
                VAR_14 = 1;
        }

        switch (VAR_11) {
                case 128:
                        if (VAR_12.duplex != VAR_1) {
                                VAR_12.duplex = VAR_1;
                                VAR_14 = 1;
                        }
                        break;
                case 129:
                        if (VAR_12.duplex != VAR_0) {
                                VAR_12.duplex = VAR_0;
                                VAR_14 = 1;
                        }
                        break;
                default:
                        break;
        }

        if (VAR_14) {
                VAR_12.cmd = VAR_3;

                VAR_15 = FUNC_3(*VAR_8, VAR_5, &VAR_13);
                if (VAR_15 < 0)
                        return -VAR_7;
        }

        return 0;
}
