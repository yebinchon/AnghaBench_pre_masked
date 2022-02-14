
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ether_arp {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int,struct ether_arp const*,int,int ) ;

__attribute__((used)) static int FUNC_2(int VAR_1, int VAR_2,
                                       const struct ether_arp *VAR_3) {
        FUNC_0(VAR_3);
        FUNC_0(VAR_2 > 0);
        FUNC_0(VAR_1 >= 0);

        if (FUNC_1(VAR_1, VAR_3, sizeof(struct ether_arp), 0) < 0)
                return -VAR_0;

        return 0;
}
