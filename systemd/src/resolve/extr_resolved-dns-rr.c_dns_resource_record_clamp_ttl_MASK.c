
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_9__ {scalar_t__ ttl; int n_ref; TYPE_1__* key; } ;
struct TYPE_8__ {scalar_t__ type; } ;
typedef TYPE_2__ DnsResourceRecord ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_2__**) ;
 TYPE_2__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

int FUNC_4(DnsResourceRecord **VAR_3, uint32_t VAR_4) {
        DnsResourceRecord *VAR_5, *VAR_6;
        uint32_t VAR_7;

        FUNC_1(VAR_3);
        VAR_5 = *VAR_3;

        if (VAR_5->key->type == VAR_0)
                return -VAR_1;

        VAR_7 = FUNC_0(VAR_5->ttl, VAR_4);
        if (VAR_7 == VAR_5->ttl)
                return 0;

        if (VAR_5->n_ref == 1) {

                VAR_5->ttl = VAR_7;
                return 1;
        }

        VAR_6 = FUNC_2(VAR_5);
        if (!VAR_6)
                return -VAR_2;

        VAR_6->ttl = VAR_7;

        FUNC_3(*VAR_3);
        *VAR_3 = VAR_6;

        return 1;
}
