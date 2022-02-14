
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int n_ref; struct TYPE_5__* _name; } ;
typedef TYPE_1__ DnsResourceKey ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

DnsResourceKey* FUNC_2(DnsResourceKey *VAR_0) {
        if (!VAR_0)
                return ((void*)0);

        FUNC_0(VAR_0->n_ref != (unsigned) -1);
        FUNC_0(VAR_0->n_ref > 0);

        if (VAR_0->n_ref == 1) {
                FUNC_1(VAR_0->_name);
                FUNC_1(VAR_0);
        } else
                VAR_0->n_ref--;

        return ((void*)0);
}
