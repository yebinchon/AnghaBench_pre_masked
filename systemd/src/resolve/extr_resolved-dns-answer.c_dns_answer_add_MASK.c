
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {int n_ref; size_t n_rrs; TYPE_1__* items; } ;
struct TYPE_14__ {scalar_t__ ttl; int key; } ;
struct TYPE_13__ {int ifindex; int flags; TYPE_2__* rr; } ;
typedef TYPE_2__ DnsResourceRecord ;
typedef int DnsAnswerFlags ;
typedef TYPE_3__ DnsAnswer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*,int,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;

int FUNC_6(DnsAnswer *VAR_3, DnsResourceRecord *VAR_4, int VAR_5, DnsAnswerFlags VAR_6) {
        size_t VAR_7;
        int VAR_8;

        FUNC_0(VAR_4);

        if (!VAR_3)
                return -VAR_2;
        if (VAR_3->n_ref > 1)
                return -VAR_0;

        for (VAR_7 = 0; VAR_7 < VAR_3->n_rrs; VAR_7++) {
                if (VAR_3->items[VAR_7].ifindex != VAR_5)
                        continue;

                VAR_8 = FUNC_2(VAR_3->items[VAR_7].rr->key, VAR_4->key);
                if (VAR_8 < 0)
                        return VAR_8;
                if (VAR_8 == 0)
                        continue;




                if ((VAR_4->ttl == 0) != (VAR_3->items[VAR_7].rr->ttl == 0))
                        return -VAR_1;

                VAR_8 = FUNC_3(VAR_3->items[VAR_7].rr, VAR_4);
                if (VAR_8 < 0)
                        return VAR_8;
                if (VAR_8 == 0)
                        continue;


                if (VAR_4->ttl > VAR_3->items[VAR_7].rr->ttl) {
                        FUNC_4(VAR_4);
                        FUNC_5(VAR_3->items[VAR_7].rr);
                        VAR_3->items[VAR_7].rr = VAR_4;
                }

                VAR_3->items[VAR_7].flags |= VAR_6;
                return 0;
        }

        return FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6);
}
