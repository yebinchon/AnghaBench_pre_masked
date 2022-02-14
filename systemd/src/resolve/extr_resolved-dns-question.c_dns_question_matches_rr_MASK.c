
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t n_keys; int * keys; } ;
typedef int DnsResourceRecord ;
typedef TYPE_1__ DnsQuestion ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,char const*) ;

int FUNC_2(DnsQuestion *VAR_0, DnsResourceRecord *VAR_1, const char *VAR_2) {
        size_t VAR_3;
        int VAR_4;

        FUNC_0(VAR_1);

        if (!VAR_0)
                return 0;

        for (VAR_3 = 0; VAR_3 < VAR_0->n_keys; VAR_3++) {
                VAR_4 = FUNC_1(VAR_0->keys[VAR_3], VAR_1, VAR_2);
                if (VAR_4 != 0)
                        return VAR_4;
        }

        return 0;
}
