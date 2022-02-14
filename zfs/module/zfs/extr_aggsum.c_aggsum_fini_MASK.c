
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int as_numbuckets; int as_lock; TYPE_2__* as_buckets; } ;
typedef TYPE_1__ aggsum_t ;
typedef int aggsum_bucket_t ;
struct TYPE_5__ {int asc_lock; } ;


 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int *) ;

void
FUNC_2(aggsum_t *VAR_0)
{
 for (int VAR_1 = 0; VAR_1 < VAR_0->as_numbuckets; VAR_1++)
  FUNC_1(&VAR_0->as_buckets[VAR_1].asc_lock);
 FUNC_0(VAR_0->as_buckets, VAR_0->as_numbuckets * sizeof (aggsum_bucket_t));
 FUNC_1(&VAR_0->as_lock);
}
