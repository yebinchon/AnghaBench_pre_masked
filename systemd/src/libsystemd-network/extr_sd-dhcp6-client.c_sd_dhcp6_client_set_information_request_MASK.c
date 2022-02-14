
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int information_request; int state; } ;
typedef TYPE_1__ sd_dhcp6_client ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;

int FUNC_2(sd_dhcp6_client *VAR_3, int VAR_4) {
        FUNC_1(VAR_3, -VAR_2);
        FUNC_1(FUNC_0(VAR_3->state, VAR_0), -VAR_1);

        VAR_3->information_request = VAR_4;

        return 0;
}
