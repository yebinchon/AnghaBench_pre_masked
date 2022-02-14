
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {int name; } ;
struct TYPE_16__ {int name; } ;
struct TYPE_18__ {scalar_t__ type; int class; TYPE_2__ dname; struct TYPE_18__ const* key; TYPE_1__ cname; } ;
typedef TYPE_3__ DnsResourceRecord ;
typedef TYPE_3__ DnsResourceKey ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_3__ const* FUNC_0 (scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (TYPE_3__ const*) ;
 int FUNC_2 (int ,int ,int ,char**) ;
 int FUNC_3 (TYPE_3__ const*) ;
 TYPE_3__* FUNC_4 (int ,scalar_t__,int ) ;
 TYPE_3__* FUNC_5 (int ,scalar_t__,char*) ;
 TYPE_3__* FUNC_6 (TYPE_3__*) ;
 TYPE_3__* FUNC_7 (char*) ;

DnsResourceKey* FUNC_8(const DnsResourceKey *VAR_2, const DnsResourceRecord *VAR_3) {
        int VAR_4;

        FUNC_1(VAR_2);
        FUNC_1(VAR_3);

        FUNC_1(FUNC_0(VAR_3->key->type, VAR_0, VAR_1));

        if (VAR_3->key->type == VAR_0)
                return FUNC_4(VAR_2->class, VAR_2->type, VAR_3->cname.name);
        else {
                DnsResourceKey *VAR_5;
                char *VAR_6 = ((void*)0);

                VAR_4 = FUNC_2(FUNC_3(VAR_2), FUNC_3(VAR_3->key), VAR_3->dname.name, &VAR_6);
                if (VAR_4 < 0)
                        return ((void*)0);
                if (VAR_4 == 0)
                        return FUNC_6((DnsResourceKey*) VAR_2);

                VAR_5 = FUNC_5(VAR_2->class, VAR_2->type, VAR_6);
                if (!VAR_5)
                        return FUNC_7(VAR_6);

                return VAR_5;
        }
}
