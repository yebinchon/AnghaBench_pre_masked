
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t n_keys; int * keys; } ;
typedef int DnsResourceKey ;
typedef TYPE_1__ DnsQuestion ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int ,int *) ;

int FUNC_3(DnsQuestion *VAR_1, DnsResourceKey *VAR_2) {
        int VAR_3;

        FUNC_0(VAR_2);

        if (!VAR_1)
                return -VAR_0;

        for (size_t VAR_4 = 0; VAR_4 < VAR_1->n_keys; VAR_4++) {
                VAR_3 = FUNC_2(VAR_1->keys[VAR_4], VAR_2);
                if (VAR_3 < 0)
                        return VAR_3;
                if (VAR_3 > 0)
                        return 0;
        }

        return FUNC_1(VAR_1, VAR_2);
}
