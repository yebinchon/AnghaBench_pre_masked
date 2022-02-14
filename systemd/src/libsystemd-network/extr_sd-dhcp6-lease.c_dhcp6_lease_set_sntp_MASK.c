
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int ntp_count; int ntp_allocated; scalar_t__ ntp; scalar_t__ ntp_fqdn; } ;
typedef TYPE_1__ uint8_t ;
typedef TYPE_1__ sd_dhcp6_lease ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,size_t,scalar_t__*,int,int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int,char*) ;

int FUNC_4(sd_dhcp6_lease *VAR_2, uint8_t *VAR_3, size_t VAR_4) {
        int VAR_5;

        FUNC_0(VAR_2, -VAR_0);
        FUNC_0(VAR_3, -VAR_0);

        if (!VAR_4)
                return 0;

        if (VAR_2->ntp || VAR_2->ntp_fqdn) {
                FUNC_2(VAR_1, "NTP information already provided");

                return 0;
        }

        FUNC_2(VAR_1, "Using deprecated SNTP information");

        VAR_5 = FUNC_1(VAR_3, VAR_4, &VAR_2->ntp,
                                        VAR_2->ntp_count,
                                        &VAR_2->ntp_allocated);
        if (VAR_5 < 0)
                return FUNC_3(VAR_1, VAR_5, "Invalid SNTP server option: %m");

        VAR_2->ntp_count = VAR_5;

        return 0;
}
