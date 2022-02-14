
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ n_ref; int on_stack; } ;
typedef TYPE_1__ DnsPacket ;


 int FUNC_0 (int) ;

DnsPacket *FUNC_1(DnsPacket *VAR_0) {

        if (!VAR_0)
                return ((void*)0);

        FUNC_0(!VAR_0->on_stack);

        FUNC_0(VAR_0->n_ref > 0);
        VAR_0->n_ref++;
        return VAR_0;
}
