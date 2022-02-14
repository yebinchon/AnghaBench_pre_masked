
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ max_size; } ;
typedef TYPE_1__ DnsPacket ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static inline size_t FUNC_1(DnsPacket *VAR_1) {
        FUNC_0(VAR_1);





        return VAR_1->max_size != 0 ? VAR_1->max_size : VAR_0;
}
