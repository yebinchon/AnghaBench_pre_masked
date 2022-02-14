
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int n_keys; int * keys; } ;
typedef TYPE_1__ DnsQuestion ;


 char const* FUNC_0 (int ) ;

const char *FUNC_1(DnsQuestion *VAR_0) {

        if (!VAR_0)
                return ((void*)0);

        if (VAR_0->n_keys < 1)
                return ((void*)0);

        return FUNC_0(VAR_0->keys[0]);
}
