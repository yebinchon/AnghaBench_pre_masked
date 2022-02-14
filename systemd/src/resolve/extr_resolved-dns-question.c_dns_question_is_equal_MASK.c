
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t n_keys; int * keys; } ;
typedef TYPE_1__ DnsQuestion ;


 int FUNC_0 (TYPE_1__*,int ) ;

int FUNC_1(DnsQuestion *VAR_0, DnsQuestion *VAR_1) {
        size_t VAR_2;
        int VAR_3;

        if (VAR_0 == VAR_1)
                return 1;

        if (!VAR_0)
                return !VAR_1 || VAR_1->n_keys == 0;
        if (!VAR_1)
                return VAR_0->n_keys == 0;



        for (VAR_2 = 0; VAR_2 < VAR_0->n_keys; VAR_2++) {
                VAR_3 = FUNC_0(VAR_1, VAR_0->keys[VAR_2]);
                if (VAR_3 <= 0)
                        return VAR_3;
        }

        for (VAR_2 = 0; VAR_2 < VAR_1->n_keys; VAR_2++) {
                VAR_3 = FUNC_0(VAR_0, VAR_1->keys[VAR_2]);
                if (VAR_3 <= 0)
                        return VAR_3;
        }

        return 1;
}
