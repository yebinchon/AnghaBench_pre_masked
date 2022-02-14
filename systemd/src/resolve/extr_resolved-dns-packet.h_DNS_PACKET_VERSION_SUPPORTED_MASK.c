
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int opt; } ;
typedef TYPE_1__ DnsPacket ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline bool FUNC_1(DnsPacket *VAR_0) {



        if (!VAR_0->opt)
                return 1;

        return FUNC_0(VAR_0->opt);
}
