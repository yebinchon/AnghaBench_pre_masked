
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {size_t n_keys; int * keys; } ;
typedef TYPE_1__ DnsQuestion ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static DnsQuestion *FUNC_3(DnsQuestion *VAR_0) {
        size_t VAR_1;

        FUNC_0(VAR_0);

        for (VAR_1 = 0; VAR_1 < VAR_0->n_keys; VAR_1++)
                FUNC_1(VAR_0->keys[VAR_1]);
        return FUNC_2(VAR_0);
}
