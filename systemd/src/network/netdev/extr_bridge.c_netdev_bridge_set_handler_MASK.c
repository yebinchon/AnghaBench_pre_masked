
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_netlink_message ;
typedef int sd_netlink ;
typedef int NetDev ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int,char*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(sd_netlink *VAR_0, sd_netlink_message *VAR_1, NetDev *VAR_2) {
        int VAR_3;

        FUNC_0(VAR_2);
        FUNC_0(VAR_1);

        VAR_3 = FUNC_3(VAR_1);
        if (VAR_3 < 0) {
                FUNC_2(VAR_2, VAR_3, "Bridge parameters could not be set: %m");
                return 1;
        }

        FUNC_1(VAR_2, "Bridge parameters set success");

        return 1;
}
