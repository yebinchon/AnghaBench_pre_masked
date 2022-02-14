
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sd_dhcp_lease ;
struct TYPE_4__ {int * lease; int state; } ;
typedef TYPE_1__ sd_dhcp_client ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;

int FUNC_2(sd_dhcp_client *VAR_6, sd_dhcp_lease **VAR_7) {
        FUNC_1(VAR_6, -VAR_5);

        if (!FUNC_0(VAR_6->state, VAR_3, VAR_0, VAR_2, VAR_1))
                return -VAR_4;

        if (VAR_7)
                *VAR_7 = VAR_6->lease;

        return 0;
}
