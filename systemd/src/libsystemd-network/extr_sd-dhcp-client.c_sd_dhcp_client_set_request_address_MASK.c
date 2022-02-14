
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct in_addr {int s_addr; } ;
struct TYPE_5__ {int last_addr; int state; } ;
typedef TYPE_1__ sd_dhcp_client ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;

int FUNC_2(
                sd_dhcp_client *VAR_5,
                const struct in_addr *VAR_6) {

        FUNC_1(VAR_5, -VAR_3);
        FUNC_1(FUNC_0(VAR_5->state, VAR_0, VAR_1), -VAR_2);

        if (VAR_6)
                VAR_5->last_addr = VAR_6->s_addr;
        else
                VAR_5->last_addr = VAR_4;

        return 0;
}
