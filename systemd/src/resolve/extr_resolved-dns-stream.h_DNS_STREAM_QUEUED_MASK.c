
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ fd; int write_packet; } ;
typedef TYPE_1__ DnsStream ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static inline bool FUNC_1(DnsStream *VAR_0) {
        FUNC_0(VAR_0);

        if (VAR_0->fd < 0)
                return 0;

        return !!VAR_0->write_packet;
}
