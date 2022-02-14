
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int key; } ;
struct TYPE_8__ {TYPE_1__* scope; TYPE_5__* rr; int state; } ;
struct TYPE_7__ {int manager; } ;
typedef TYPE_2__ DnsZoneItem ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (char*,int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

void FUNC_10(DnsZoneItem *VAR_4) {
        FUNC_1(VAR_4);

        if (!FUNC_0(VAR_4->state, VAR_1, VAR_2, VAR_0))
                return;

        FUNC_6("Detected conflict on %s", FUNC_9(FUNC_3(VAR_4->rr)));

        FUNC_4(VAR_4);


        VAR_4->state = VAR_3;

        FUNC_5(VAR_4->scope->manager, FUNC_2(VAR_4->rr->key));


        if (FUNC_7(VAR_4->scope->manager, FUNC_2(VAR_4->rr->key)) > 0)
                FUNC_8(VAR_4->scope->manager);
}
