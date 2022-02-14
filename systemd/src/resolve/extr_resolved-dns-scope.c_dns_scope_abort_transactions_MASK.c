
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* transactions; } ;
struct TYPE_7__ {int block_gc; int state; } ;
typedef TYPE_1__ DnsTransaction ;
typedef TYPE_2__ DnsScope ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(DnsScope *VAR_1) {
        FUNC_1(VAR_1);

        while (VAR_1->transactions) {
                DnsTransaction *VAR_2 = VAR_1->transactions;




                VAR_2->block_gc++;
                if (FUNC_0(VAR_2->state))
                        FUNC_2(VAR_2, VAR_0);
                VAR_2->block_gc--;

                FUNC_3(VAR_2);
        }
}
