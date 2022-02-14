
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {void* ifr_data; int ifr_name; } ;
struct ethtool_wolinfo {int cmd; int wolopts; } ;
typedef int WakeOnLan ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (int,int ,struct ifreq*) ;
 int FUNC_2 (int ,int ,char const*) ;

int FUNC_3(int *VAR_13, const char *VAR_14, WakeOnLan VAR_15) {
        struct ethtool_wolinfo VAR_16 = {
                .cmd = VAR_0
        };
        struct ifreq VAR_17 = {
                .ifr_data = (void*) &VAR_16
        };
        bool VAR_18 = 0;
        int VAR_19;

        if (VAR_15 == VAR_11)
                return 0;

        if (*VAR_13 < 0) {
                VAR_19 = FUNC_0(VAR_13, 1);
                if (VAR_19 < 0)
                        return VAR_19;
        }

        FUNC_2(VAR_17.ifr_name, VAR_2, VAR_14);

        VAR_19 = FUNC_1(*VAR_13, VAR_3, &VAR_17);
        if (VAR_19 < 0)
                return -VAR_12;

        switch (VAR_15) {
        case 129:
                if (VAR_16.wolopts != VAR_9) {
                        VAR_16.wolopts = VAR_9;
                        VAR_18 = 1;
                }
                break;
        case 128:
                if (VAR_16.wolopts != VAR_10) {
                        VAR_16.wolopts = VAR_10;
                        VAR_18 = 1;
                }
                break;
        case 131:
                if (VAR_16.wolopts != VAR_8) {
                        VAR_16.wolopts = VAR_8;
                        VAR_18 = 1;
                }
                break;
        case 134:
                if (VAR_16.wolopts != VAR_5) {
                        VAR_16.wolopts = VAR_5;
                        VAR_18 = 1;
                }
                break;
        case 135:
                if (VAR_16.wolopts != VAR_4) {
                        VAR_16.wolopts = VAR_4;
                        VAR_18 = 1;
                }
                break;
        case 133:
                if (VAR_16.wolopts != VAR_6) {
                        VAR_16.wolopts = VAR_6;
                        VAR_18 = 1;
                }
                break;
        case 132:
                if (VAR_16.wolopts != VAR_7) {
                        VAR_16.wolopts = VAR_7;
                        VAR_18 = 1;
                }
                break;
        case 130:
                if (VAR_16.wolopts != 0) {
                        VAR_16.wolopts = 0;
                        VAR_18 = 1;
                }
                break;
        default:
                break;
        }

        if (VAR_18) {
                VAR_16.cmd = VAR_1;

                VAR_19 = FUNC_1(*VAR_13, VAR_3, &VAR_17);
                if (VAR_19 < 0)
                        return -VAR_12;
        }

        return 0;
}
