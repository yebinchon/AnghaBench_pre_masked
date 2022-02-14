
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_netlink_message ;
typedef int sd_netlink ;
typedef int Link ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int,char*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(sd_netlink *VAR_1, sd_netlink_message *VAR_2, Link *VAR_3) {
        int VAR_4;

        FUNC_0(VAR_3);

        FUNC_2(VAR_3, "Set link");

        VAR_4 = FUNC_4(VAR_2);
        if (VAR_4 < 0 && VAR_4 != -VAR_0) {
                FUNC_3(VAR_3, VAR_4, "Failed to configure CAN link: %m");
                FUNC_1(VAR_3);
        }

        return 1;
}
