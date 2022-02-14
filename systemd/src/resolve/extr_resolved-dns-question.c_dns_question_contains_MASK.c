
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t n_keys; int * keys; } ;
typedef int DnsResourceKey ;
typedef TYPE_1__ DnsQuestion ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int ,int const*) ;

int FUNC_2(DnsQuestion *VAR_0, const DnsResourceKey *VAR_1) {
        size_t VAR_2;
        int VAR_3;

        FUNC_0(VAR_1);

        if (!VAR_0)
                return 0;

        for (VAR_2 = 0; VAR_2 < VAR_0->n_keys; VAR_2++) {
                VAR_3 = FUNC_1(VAR_0->keys[VAR_2], VAR_1);
                if (VAR_3 != 0)
                        return VAR_3;
        }

        return 0;
}
