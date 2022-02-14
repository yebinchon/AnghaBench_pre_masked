
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int by_name; int by_key; } ;
struct TYPE_12__ {TYPE_1__* rr; } ;
struct TYPE_11__ {int key; } ;
typedef TYPE_2__ DnsZoneItem ;
typedef TYPE_3__ DnsZone ;


 int FUNC_0 (int ,TYPE_2__*,TYPE_2__*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,TYPE_2__*) ;
 scalar_t__ FUNC_5 (int ,int ,TYPE_2__*) ;

__attribute__((used)) static int FUNC_6(DnsZone *VAR_2, DnsZoneItem *VAR_3) {
        DnsZoneItem *VAR_4;
        int VAR_5;

        VAR_4 = FUNC_3(VAR_2->by_key, VAR_3->rr->key);
        if (VAR_4) {
                FUNC_0(VAR_0, VAR_4, VAR_3);
                FUNC_1(FUNC_5(VAR_2->by_key, VAR_4->rr->key, VAR_4) >= 0);
        } else {
                VAR_5 = FUNC_4(VAR_2->by_key, VAR_3->rr->key, VAR_3);
                if (VAR_5 < 0)
                        return VAR_5;
        }

        VAR_4 = FUNC_3(VAR_2->by_name, FUNC_2(VAR_3->rr->key));
        if (VAR_4) {
                FUNC_0(VAR_1, VAR_4, VAR_3);
                FUNC_1(FUNC_5(VAR_2->by_name, FUNC_2(VAR_4->rr->key), VAR_4) >= 0);
        } else {
                VAR_5 = FUNC_4(VAR_2->by_name, FUNC_2(VAR_3->rr->key), VAR_3);
                if (VAR_5 < 0)
                        return VAR_5;
        }

        return 0;
}
