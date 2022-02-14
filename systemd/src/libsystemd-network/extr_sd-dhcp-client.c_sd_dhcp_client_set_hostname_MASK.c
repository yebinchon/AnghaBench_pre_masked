
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hostname; } ;
typedef TYPE_1__ sd_dhcp_client ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (int *,char const*) ;
 scalar_t__ FUNC_3 (char const*,int) ;

int FUNC_4(
                sd_dhcp_client *VAR_1,
                const char *VAR_2) {

        FUNC_0(VAR_1, -VAR_0);


        if (VAR_2 &&
            !(FUNC_3(VAR_2, 0) && FUNC_1(VAR_2) > 0))
                return -VAR_0;

        return FUNC_2(&VAR_1->hostname, VAR_2);
}
