
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int by_expiry; int by_key; } ;
struct TYPE_12__ {int prioq_idx; int key; } ;
typedef TYPE_1__ DnsCacheItem ;
typedef TYPE_2__ DnsCache ;


 int FUNC_0 (int ,TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ,TYPE_1__*) ;
 int FUNC_7 (int ,TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_8(DnsCache *VAR_1, DnsCacheItem *VAR_2) {
        DnsCacheItem *VAR_3;

        FUNC_1(VAR_1);

        if (!VAR_2)
                return;

        VAR_3 = FUNC_4(VAR_1->by_key, VAR_2->key);
        FUNC_0(VAR_0, VAR_3, VAR_2);

        if (VAR_3)
                FUNC_2(FUNC_6(VAR_1->by_key, VAR_3->key, VAR_3) >= 0);
        else
                FUNC_5(VAR_1->by_key, VAR_2->key);

        FUNC_7(VAR_1->by_expiry, VAR_2, &VAR_2->prioq_idx);

        FUNC_3(VAR_2);
}
