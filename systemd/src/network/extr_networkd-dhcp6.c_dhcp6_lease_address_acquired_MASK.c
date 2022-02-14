
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct in6_addr {int dummy; } ;
typedef int sd_dhcp6_lease ;
typedef int sd_dhcp6_client ;
typedef int Link ;


 int FUNC_0 (int *,struct in6_addr*,int ,int ) ;
 int FUNC_1 (int *,int **) ;
 scalar_t__ FUNC_2 (int *,struct in6_addr*,int *,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(sd_dhcp6_client *VAR_0, Link *VAR_1) {
        int VAR_2;
        sd_dhcp6_lease *VAR_3;
        struct in6_addr VAR_4;
        uint32_t VAR_5, VAR_6;

        VAR_2 = FUNC_1(VAR_0, &VAR_3);
        if (VAR_2 < 0)
                return VAR_2;

        FUNC_3(VAR_3);

        while (FUNC_2(VAR_3, &VAR_4,
                                                 &VAR_5,
                                                 &VAR_6) >= 0) {

                VAR_2 = FUNC_0(VAR_1, &VAR_4, VAR_5, VAR_6);
                if (VAR_2 < 0)
                        return VAR_2;
        }

        return 0;
}
