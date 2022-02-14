
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int n_read; int read_packet; int read_size; } ;
typedef TYPE_1__ DnsStream ;
typedef int DnsPacket ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

DnsPacket *FUNC_3(DnsStream *VAR_0) {
        FUNC_1(VAR_0);

        if (!VAR_0->read_packet)
                return ((void*)0);

        if (VAR_0->n_read < sizeof(VAR_0->read_size))
                return ((void*)0);

        if (VAR_0->n_read < sizeof(VAR_0->read_size) + FUNC_2(VAR_0->read_size))
                return ((void*)0);

        VAR_0->n_read = 0;
        return FUNC_0(VAR_0->read_packet);
}
