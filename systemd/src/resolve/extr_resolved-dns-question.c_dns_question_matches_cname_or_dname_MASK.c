
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int type; } ;
struct TYPE_10__ {int type; } ;
struct TYPE_9__ {size_t n_keys; TYPE_3__** keys; } ;
struct TYPE_8__ {TYPE_4__* key; } ;
typedef TYPE_1__ DnsResourceRecord ;
typedef TYPE_2__ DnsQuestion ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_4__*,char const*) ;
 int FUNC_3 (int ) ;

int FUNC_4(DnsQuestion *VAR_2, DnsResourceRecord *VAR_3, const char *VAR_4) {
        size_t VAR_5;
        int VAR_6;

        FUNC_1(VAR_3);

        if (!VAR_2)
                return 0;

        if (!FUNC_0(VAR_3->key->type, VAR_0, VAR_1))
                return 0;

        for (VAR_5 = 0; VAR_5 < VAR_2->n_keys; VAR_5++) {

                if (!FUNC_3(VAR_2->keys[VAR_5]->type))
                        return 0;

                VAR_6 = FUNC_2(VAR_2->keys[VAR_5], VAR_3->key, VAR_4);
                if (VAR_6 != 0)
                        return VAR_6;
        }

        return 0;
}
