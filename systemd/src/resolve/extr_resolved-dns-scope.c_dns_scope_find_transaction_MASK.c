
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int transactions_by_key; } ;
struct TYPE_10__ {scalar_t__ answer_source; int state; } ;
typedef TYPE_1__ DnsTransaction ;
typedef TYPE_2__ DnsScope ;
typedef TYPE_2__ DnsResourceKey ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_1__* FUNC_2 (int ,TYPE_2__*) ;

DnsTransaction *FUNC_3(DnsScope *VAR_3, DnsResourceKey *VAR_4, bool VAR_5) {
        DnsTransaction *VAR_6;

        FUNC_1(VAR_3);
        FUNC_1(VAR_4);



        VAR_6 = FUNC_2(VAR_3->transactions_by_key, VAR_4);
        if (!VAR_6)
                return ((void*)0);



        if (!VAR_5 &&
            FUNC_0(VAR_6->state, VAR_2, VAR_1) &&
            VAR_6->answer_source != VAR_0)
                return ((void*)0);

        return VAR_6;
}
