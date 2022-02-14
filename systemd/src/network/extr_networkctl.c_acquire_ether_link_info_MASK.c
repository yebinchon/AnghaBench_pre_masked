
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int has_ethtool_link_info; int port; int duplex; int speed; int autonegotiation; int name; } ;
typedef TYPE_1__ LinkInfo ;


 scalar_t__ FUNC_0 (int*,int ,int *,int *,int *,int *) ;

__attribute__((used)) static void FUNC_1(int *VAR_0, LinkInfo *VAR_1) {
        if (FUNC_0(VAR_0, VAR_1->name,
                                  &VAR_1->autonegotiation,
                                  &VAR_1->speed,
                                  &VAR_1->duplex,
                                  &VAR_1->port) >= 0)
                VAR_1->has_ethtool_link_info = 1;
}
