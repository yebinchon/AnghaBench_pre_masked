
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int n_ref; } ;
typedef TYPE_1__ DnsResourceKey ;


 int FUNC_0 (int) ;

DnsResourceKey* FUNC_1(DnsResourceKey *VAR_0) {

        if (!VAR_0)
                return ((void*)0);



        FUNC_0(VAR_0->n_ref != (unsigned) -1);

        FUNC_0(VAR_0->n_ref > 0);
        VAR_0->n_ref++;

        return VAR_0;
}
