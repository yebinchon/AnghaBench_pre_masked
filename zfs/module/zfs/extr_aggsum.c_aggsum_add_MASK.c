
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct aggsum_bucket {int asc_delta; int asc_lock; scalar_t__ asc_borrowed; } ;
typedef int int64_t ;
struct TYPE_4__ {size_t as_numbuckets; struct aggsum_bucket* as_buckets; } ;
typedef TYPE_1__ aggsum_t ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,struct aggsum_bucket*) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void
FUNC_5(aggsum_t *VAR_2, int64_t VAR_3)
{
 struct aggsum_bucket *VAR_4;

 FUNC_1();
 VAR_4 = &VAR_2->as_buckets[VAR_0 % VAR_2->as_numbuckets];
 FUNC_2();

 for (;;) {
  FUNC_3(&VAR_4->asc_lock);
  if (VAR_4->asc_delta + VAR_3 <= (int64_t)VAR_4->asc_borrowed &&
      VAR_4->asc_delta + VAR_3 >= -(int64_t)VAR_4->asc_borrowed) {
   VAR_4->asc_delta += VAR_3;
   FUNC_4(&VAR_4->asc_lock);
   return;
  }
  FUNC_4(&VAR_4->asc_lock);
  FUNC_0(VAR_2, VAR_3 * VAR_1, VAR_4);
 }
}
