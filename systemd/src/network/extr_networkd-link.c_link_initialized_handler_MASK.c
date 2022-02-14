
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_netlink_message ;
typedef int sd_netlink ;
typedef int Link ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(sd_netlink *VAR_0, sd_netlink_message *VAR_1, Link *VAR_2) {
        int VAR_3;

        VAR_3 = FUNC_1(VAR_2);
        if (VAR_3 < 0)
                FUNC_0(VAR_2);
        return 1;
}
