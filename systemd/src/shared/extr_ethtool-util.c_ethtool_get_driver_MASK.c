
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {void* ifr_data; int ifr_name; } ;
struct ethtool_drvinfo {int driver; int cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (int,int ,struct ifreq*) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,char const*) ;

int FUNC_4(int *VAR_5, const char *VAR_6, char **VAR_7) {
        struct ethtool_drvinfo VAR_8 = {
                .cmd = VAR_1
        };
        struct ifreq VAR_9 = {
                .ifr_data = (void*) &VAR_8
        };
        char *VAR_10;
        int VAR_11;

        if (*VAR_5 < 0) {
                VAR_11 = FUNC_0(VAR_5, 1);
                if (VAR_11 < 0)
                        return VAR_11;
        }

        FUNC_3(VAR_9.ifr_name, VAR_2, VAR_6);

        VAR_11 = FUNC_1(*VAR_5, VAR_3, &VAR_9);
        if (VAR_11 < 0)
                return -VAR_4;

        VAR_10 = FUNC_2(VAR_8.driver);
        if (!VAR_10)
                return -VAR_0;

        *VAR_7 = VAR_10;
        return 0;
}
