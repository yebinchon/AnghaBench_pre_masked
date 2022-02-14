
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int sd_netlink_message ;
typedef int sd_netlink ;
typedef int sd_genl_family ;


 int FUNC_0 (int *,int ,int ,int ,int **) ;
 int FUNC_1 (int *,int ,int *) ;

int FUNC_2(sd_netlink *VAR_0, sd_genl_family VAR_1, uint8_t VAR_2, sd_netlink_message **VAR_3) {
        uint16_t VAR_4;
        int VAR_5;

        VAR_5 = FUNC_1(VAR_0, VAR_1, &VAR_4);
        if (VAR_5 < 0)
                return VAR_5;

        return FUNC_0(VAR_0, VAR_1, VAR_4, VAR_2, VAR_3);
}
