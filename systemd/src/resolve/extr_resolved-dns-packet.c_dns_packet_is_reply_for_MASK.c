
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* question; } ;
struct TYPE_10__ {int n_keys; int * keys; } ;
typedef TYPE_2__ DnsResourceKey ;
typedef TYPE_2__ const DnsPacket ;


 int FUNC_0 (TYPE_2__ const*) ;
 int FUNC_1 (TYPE_2__ const*) ;
 int FUNC_2 (TYPE_2__ const*) ;
 int FUNC_3 (int ,TYPE_2__ const*) ;

int FUNC_4(DnsPacket *VAR_0, const DnsResourceKey *VAR_1) {
        int VAR_2;

        FUNC_1(VAR_0);
        FUNC_1(VAR_1);





        if (FUNC_0(VAR_0) != 1)
                return 0;


        VAR_2 = FUNC_2(VAR_0);
        if (VAR_2 < 0)
                return VAR_2;

        if (!VAR_0->question)
                return 0;

        if (VAR_0->question->n_keys != 1)
                return 0;

        return FUNC_3(VAR_0->question->keys[0], VAR_1);
}
