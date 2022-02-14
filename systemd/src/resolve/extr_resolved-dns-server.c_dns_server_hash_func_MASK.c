
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct siphash {int dummy; } ;
struct TYPE_4__ {int ifindex; int family; int address; } ;
typedef TYPE_1__ DnsServer ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__ const*) ;
 int FUNC_2 (int *,int,struct siphash*) ;

__attribute__((used)) static void FUNC_3(const DnsServer *VAR_0, struct siphash *VAR_1) {
        FUNC_1(VAR_0);

        FUNC_2(&VAR_0->family, sizeof(VAR_0->family), VAR_1);
        FUNC_2(&VAR_0->address, FUNC_0(VAR_0->family), VAR_1);
        FUNC_2(&VAR_0->ifindex, sizeof(VAR_0->ifindex), VAR_1);
}
