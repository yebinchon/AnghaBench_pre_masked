
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int key; } ;
typedef TYPE_1__ DnsTransaction ;
typedef TYPE_1__ DnsResourceRecord ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_3(DnsTransaction *VAR_0, DnsResourceRecord *VAR_1) {
        int VAR_2;

        FUNC_0(VAR_0);
        FUNC_0(VAR_1);





        VAR_2 = FUNC_2(VAR_0->key, VAR_1, ((void*)0));
        if (VAR_2 != 0)
                return VAR_2;

        return FUNC_1(VAR_0->key, VAR_1->key, ((void*)0));
}
