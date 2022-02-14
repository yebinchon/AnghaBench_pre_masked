
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {size_t rindex; size_t size; } ;
typedef TYPE_1__ DnsPacket ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(DnsPacket *VAR_1, size_t VAR_2, const void **VAR_3, size_t *VAR_4) {
        FUNC_1(VAR_1);

        if (VAR_1->rindex + VAR_2 > VAR_1->size)
                return -VAR_0;

        if (VAR_3)
                *VAR_3 = (uint8_t*) FUNC_0(VAR_1) + VAR_1->rindex;

        if (VAR_4)
                *VAR_4 = VAR_1->rindex;

        VAR_1->rindex += VAR_2;
        return 0;
}
