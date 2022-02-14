
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int * _data; } ;
typedef TYPE_1__ DnsPacket ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline uint8_t* FUNC_2(DnsPacket *VAR_0) {
        if (FUNC_1(!VAR_0))
                return ((void*)0);

        if (VAR_0->_data)
                return VAR_0->_data;

        return ((uint8_t*) VAR_0) + FUNC_0(sizeof(DnsPacket));
}
