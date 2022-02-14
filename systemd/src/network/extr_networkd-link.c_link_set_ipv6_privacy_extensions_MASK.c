
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* network; int ifname; } ;
struct TYPE_6__ {scalar_t__ ipv6_privacy_extensions; } ;
typedef TYPE_2__ Link ;
typedef scalar_t__ IPv6PrivacyExtensions ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int,char*) ;
 int FUNC_2 (int ,int ,char*,int) ;

__attribute__((used)) static int FUNC_3(Link *VAR_1) {
        IPv6PrivacyExtensions VAR_2;
        int VAR_3;

        VAR_2 = FUNC_0(VAR_1);
        if (VAR_2 < 0)
                return 0;

        VAR_3 = FUNC_2(VAR_0, VAR_1->ifname, "use_tempaddr", (int) VAR_1->network->ipv6_privacy_extensions);
        if (VAR_3 < 0)
                FUNC_1(VAR_1, VAR_3, "Cannot configure IPv6 privacy extension for interface: %m");

        return 0;
}
