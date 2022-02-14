
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_8__ {int flags; } ;
struct TYPE_7__ {TYPE_1__* opt; } ;
struct TYPE_6__ {int ttl; } ;
typedef TYPE_2__ DnsPacket ;


 TYPE_4__* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline uint16_t FUNC_2(DnsPacket *VAR_0) {
        uint16_t VAR_1;

        if (VAR_0->opt)
                VAR_1 = (uint16_t) (VAR_0->opt->ttl >> 24);
        else
                VAR_1 = 0;

        return VAR_1 | (FUNC_1(FUNC_0(VAR_0)->flags) & 0xF);
}
