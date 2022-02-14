
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int by_name; int by_key; } ;
struct TYPE_13__ {TYPE_1__* rr; } ;
struct TYPE_12__ {int key; } ;
typedef TYPE_2__ DnsZoneItem ;
typedef TYPE_3__ DnsZone ;


 int FUNC_0 (int ,TYPE_2__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_2__* FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ,TYPE_2__*) ;

__attribute__((used)) static void FUNC_8(DnsZone *VAR_2, DnsZoneItem *VAR_3) {
        DnsZoneItem *VAR_4;

        FUNC_1(VAR_2);

        if (!VAR_3)
                return;

        VAR_4 = FUNC_5(VAR_2->by_key, VAR_3->rr->key);
        FUNC_0(VAR_0, VAR_4, VAR_3);
        if (VAR_4)
                FUNC_2(FUNC_7(VAR_2->by_key, VAR_4->rr->key, VAR_4) >= 0);
        else
                FUNC_6(VAR_2->by_key, VAR_3->rr->key);

        VAR_4 = FUNC_5(VAR_2->by_name, FUNC_3(VAR_3->rr->key));
        FUNC_0(VAR_1, VAR_4, VAR_3);
        if (VAR_4)
                FUNC_2(FUNC_7(VAR_2->by_name, FUNC_3(VAR_4->rr->key), VAR_4) >= 0);
        else
                FUNC_6(VAR_2->by_name, FUNC_3(VAR_3->rr->key));

        FUNC_4(VAR_3);
}
