
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* opt; } ;
struct TYPE_4__ {unsigned int ttl; } ;
typedef TYPE_2__ DnsPacket ;



__attribute__((used)) static inline bool FUNC_0(DnsPacket *VAR_0) {
        if (!VAR_0->opt)
                return 0;

        return !!(VAR_0->opt->ttl & (1U << 15));
}
