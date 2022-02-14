
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sd_netlink_message ;
typedef int sd_netlink ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(sd_netlink *VAR_0, sd_netlink_message *VAR_1, void *VAR_2) {
        int *VAR_3 = VAR_2;
        int VAR_4;

        (*VAR_3)--;

        VAR_4 = FUNC_2(VAR_1);

        FUNC_1(VAR_4, "%d left in pipe. got reply: %m", *VAR_3);

        FUNC_0(VAR_4 >= 0);

        return 1;
}
