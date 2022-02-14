
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ether_arp {int dummy; } ;
struct ether_addr {int dummy; } ;
typedef scalar_t__ be32_t ;


 int FUNC_0 (int,int,struct ether_arp*) ;
 int FUNC_1 (int) ;

int FUNC_2(int VAR_0, int VAR_1,
                          be32_t VAR_2, const struct ether_addr *VAR_3) {
        struct ether_arp VAR_4 = {};

        FUNC_1(VAR_0 >= 0);
        FUNC_1(VAR_1 > 0);
        FUNC_1(VAR_2 != 0);
        FUNC_1(VAR_3);

        return FUNC_0(VAR_0, VAR_1, &VAR_4);
}
