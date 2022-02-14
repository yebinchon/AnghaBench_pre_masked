
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int ifindex; int state; int anonymize; scalar_t__ last_addr; } ;
typedef TYPE_1__ sd_dhcp_client ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,char*,int ) ;

int FUNC_4(sd_dhcp_client *VAR_2) {
        int VAR_3;

        FUNC_0(VAR_2, -VAR_1);

        VAR_3 = FUNC_1(VAR_2);
        if (VAR_3 < 0)
                return VAR_3;
        if (VAR_2->last_addr && !VAR_2->anonymize)
                VAR_2->state = VAR_0;

        VAR_3 = FUNC_2(VAR_2);
        if (VAR_3 >= 0)
                FUNC_3(VAR_2, "STARTED on ifindex %i", VAR_2->ifindex);

        return VAR_3;
}
