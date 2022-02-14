
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ size; } ;
typedef TYPE_1__ DnsPacket ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;

int FUNC_1(DnsPacket *VAR_3) {
        FUNC_0(VAR_3);

        if (VAR_3->size < VAR_0)
                return -VAR_2;

        if (VAR_3->size > VAR_1)
                return -VAR_2;

        return 1;
}
