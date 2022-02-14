
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int ntp_count; int ntp_fqdn_count; int ntp_fqdn; scalar_t__ ntp_allocated; int ntp; } ;
typedef TYPE_1__ uint8_t ;
typedef int uint16_t ;
typedef TYPE_1__ sd_dhcp6_lease ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__**,size_t*,int*,size_t*,TYPE_1__**) ;
 int FUNC_2 (TYPE_1__*,size_t,char***) ;
 int FUNC_3 (TYPE_1__*,size_t,int *,int,scalar_t__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char**) ;

int FUNC_6(sd_dhcp6_lease *VAR_2, uint8_t *VAR_3, size_t VAR_4) {
        int VAR_5;
        uint16_t VAR_6;
        size_t VAR_7;
        uint8_t *VAR_8;

        FUNC_0(VAR_2, -VAR_0);
        FUNC_0(VAR_3, -VAR_0);

        VAR_2->ntp = FUNC_4(VAR_2->ntp);
        VAR_2->ntp_count = 0;
        VAR_2->ntp_allocated = 0;

        while ((VAR_5 = FUNC_1(&VAR_3, &VAR_4, &VAR_6, &VAR_7,
                                       &VAR_8)) >= 0) {
                int VAR_9;
                char **VAR_10;

                switch(VAR_6) {
                case 129:
                case 130:
                        if (VAR_7 != 16)
                                return 0;

                        VAR_9 = FUNC_3(VAR_8, VAR_7,
                                                        &VAR_2->ntp,
                                                        VAR_2->ntp_count,
                                                        &VAR_2->ntp_allocated);
                        if (VAR_9 < 0)
                                return VAR_9;

                        VAR_2->ntp_count = VAR_9;

                        break;

                case 128:
                        VAR_5 = FUNC_2(VAR_8, VAR_7,
                                                          &VAR_10);
                        if (VAR_5 < 0)
                                return 0;

                        FUNC_5(VAR_2->ntp_fqdn, VAR_10);
                        VAR_2->ntp_fqdn_count = VAR_5;

                        break;
                }
        }

        if (VAR_5 != -VAR_1)
                return VAR_5;

        return 0;
}
