
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int s_addr; } ;
typedef int sd_event ;
typedef int sd_dhcp_lease ;
typedef int sd_dhcp_client ;


 int FUNC_0 (int,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int *,int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int *,int **) ;
 scalar_t__ FUNC_5 (int *,struct in_addr*) ;
 scalar_t__ FUNC_6 (int *,struct in_addr*) ;
 int FUNC_7 (int *,struct in_addr const**) ;
 int FUNC_8 (int *,int ) ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_9(sd_dhcp_client *VAR_4, int VAR_5,
                                   void *VAR_6) {
        sd_event *VAR_7 = VAR_6;
        sd_dhcp_lease *VAR_8;
        struct in_addr VAR_9;
        const struct in_addr *VAR_10;

        FUNC_1(*VAR_4);
        FUNC_1(FUNC_0(VAR_5, VAR_0, VAR_1));

        FUNC_1(FUNC_4(VAR_4, &VAR_8) >= 0);
        FUNC_1(*VAR_8);

        FUNC_1(FUNC_5(VAR_8, &VAR_9) >= 0);
        FUNC_1(FUNC_2(&VAR_9.s_addr, &VAR_2[44],
                      sizeof(VAR_9.s_addr)) == 0);

        FUNC_1(FUNC_6(VAR_8, &VAR_9) >= 0);
        FUNC_1(FUNC_2(&VAR_9.s_addr, &VAR_2[285],
                      sizeof(VAR_9.s_addr)) == 0);

        FUNC_1(FUNC_7(VAR_8, &VAR_10) == 1);
        FUNC_1(FUNC_2(&VAR_10[0].s_addr, &VAR_2[308],
                         sizeof(VAR_10[0].s_addr)) == 0);

        if (VAR_3)
                FUNC_3("  DHCP address acquired\n");

        FUNC_8(VAR_7, 0);

        return 0;
}
