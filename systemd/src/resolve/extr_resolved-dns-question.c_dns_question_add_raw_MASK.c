
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ n_keys; scalar_t__ n_allocated; int * keys; } ;
typedef TYPE_1__ DnsResourceKey ;
typedef TYPE_1__ DnsQuestion ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(DnsQuestion *VAR_1, DnsResourceKey *VAR_2) {


        FUNC_0(VAR_2);
        FUNC_0(VAR_1);

        if (VAR_1->n_keys >= VAR_1->n_allocated)
                return -VAR_0;

        VAR_1->keys[VAR_1->n_keys++] = FUNC_1(VAR_2);
        return 0;
}
