
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int type; } ;
struct TYPE_5__ {int n_keys; TYPE_2__** keys; } ;
typedef TYPE_1__ DnsQuestion ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char*,char const*) ;
 char* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;

int FUNC_4(DnsQuestion *VAR_0) {
        const char *VAR_1;
        size_t VAR_2;
        int VAR_3;

        if (!VAR_0)
                return 0;

        if (VAR_0->n_keys <= 0)
                return 0;

        if (VAR_0->n_keys > 65535)
                return 0;

        VAR_1 = FUNC_2(VAR_0->keys[0]);
        if (!VAR_1)
                return 0;


        for (VAR_2 = 0; VAR_2 < VAR_0->n_keys; VAR_2++) {
                FUNC_0(VAR_0->keys[VAR_2]);

                if (VAR_2 > 0) {
                        VAR_3 = FUNC_1(FUNC_2(VAR_0->keys[VAR_2]), VAR_1);
                        if (VAR_3 <= 0)
                                return VAR_3;
                }

                if (!FUNC_3(VAR_0->keys[VAR_2]->type))
                        return 0;
        }

        return 1;
}
