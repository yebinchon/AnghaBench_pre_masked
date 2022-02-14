
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint_t ;
struct TYPE_6__ {int ht_bits; int ht_key; int ht_lock; TYPE_1__* ht_bins; } ;
typedef TYPE_2__ tsd_hash_table_t ;
typedef int tsd_hash_bin_t ;
struct TYPE_5__ {int hb_head; int hb_lock; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,int) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static tsd_hash_table_t *
FUNC_4(uint_t VAR_1)
{
 tsd_hash_table_t *VAR_2;
 int VAR_3, VAR_4 = (1 << VAR_1);

 VAR_2 = FUNC_2(sizeof (tsd_hash_table_t), VAR_0);
 if (VAR_2 == ((void*)0))
  return (((void*)0));

 VAR_2->ht_bins = FUNC_2(sizeof (tsd_hash_bin_t) * VAR_4, VAR_0);
 if (VAR_2->ht_bins == ((void*)0)) {
  FUNC_1(VAR_2, sizeof (tsd_hash_table_t));
  return (((void*)0));
 }

 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  FUNC_3(&VAR_2->ht_bins[VAR_3].hb_lock);
  FUNC_0(&VAR_2->ht_bins[VAR_3].hb_head);
 }

 FUNC_3(&VAR_2->ht_lock);
 VAR_2->ht_bits = VAR_1;
 VAR_2->ht_key = 1;

 return (VAR_2);
}
