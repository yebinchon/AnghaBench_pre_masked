
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int sender; int family; } ;
typedef TYPE_1__ Manager ;
typedef TYPE_1__ DnsPacket ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int *) ;

bool FUNC_2(Manager *VAR_0, DnsPacket *VAR_1) {
        FUNC_0(VAR_0);
        FUNC_0(VAR_1);

        return !!FUNC_1(VAR_0, VAR_1->family, &VAR_1->sender);
}
