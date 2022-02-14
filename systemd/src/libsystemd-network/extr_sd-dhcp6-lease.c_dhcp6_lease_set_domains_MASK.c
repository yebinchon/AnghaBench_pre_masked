
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int domains_count; int domains; } ;
typedef TYPE_1__ uint8_t ;
typedef TYPE_1__ sd_dhcp6_lease ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,size_t,char***) ;
 int FUNC_2 (int ,char**) ;

int FUNC_3(sd_dhcp6_lease *VAR_1, uint8_t *VAR_2,
                            size_t VAR_3) {
        int VAR_4;
        char **VAR_5;

        FUNC_0(VAR_1, -VAR_0);
        FUNC_0(VAR_2, -VAR_0);

        if (!VAR_3)
                return 0;

        VAR_4 = FUNC_1(VAR_2, VAR_3, &VAR_5);
        if (VAR_4 < 0)
                return 0;

        FUNC_2(VAR_1->domains, VAR_5);
        VAR_1->domains_count = VAR_4;

        return VAR_4;
}
