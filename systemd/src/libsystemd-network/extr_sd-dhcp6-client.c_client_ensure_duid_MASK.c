
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ duid_len; int duid; } ;
typedef TYPE_1__ sd_dhcp6_client ;


 int FUNC_0 (int *,scalar_t__*) ;

__attribute__((used)) static int FUNC_1(sd_dhcp6_client *VAR_0) {
        if (VAR_0->duid_len != 0)
                return 0;

        return FUNC_0(&VAR_0->duid, &VAR_0->duid_len);
}
