
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sender; int family; } ;
typedef TYPE_1__ DnsPacket ;


 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static inline bool FUNC_1(DnsPacket *VAR_0) {




        return FUNC_0(VAR_0->family, &VAR_0->sender) == 0;
}
