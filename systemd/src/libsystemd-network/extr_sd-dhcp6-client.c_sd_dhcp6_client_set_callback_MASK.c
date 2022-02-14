
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sd_dhcp6_client_callback_t ;
struct TYPE_4__ {void* userdata; int callback; } ;
typedef TYPE_1__ sd_dhcp6_client ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;

int FUNC_1(
                sd_dhcp6_client *VAR_1,
                sd_dhcp6_client_callback_t VAR_2,
                void *VAR_3) {

        FUNC_0(VAR_1, -VAR_0);

        VAR_1->callback = VAR_2;
        VAR_1->userdata = VAR_3;

        return 0;
}
