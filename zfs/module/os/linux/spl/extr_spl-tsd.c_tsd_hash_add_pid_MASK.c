
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t ulong_t ;
struct TYPE_6__ {int ht_lock; TYPE_3__* ht_bins; int ht_bits; } ;
typedef TYPE_1__ tsd_hash_table_t ;
struct TYPE_7__ {int he_list; int he_pid_list; int he_key_list; int * he_value; int * he_dtor; scalar_t__ he_pid; scalar_t__ he_key; } ;
typedef TYPE_2__ tsd_hash_entry_t ;
struct TYPE_8__ {int hb_lock; int hb_head; } ;
typedef TYPE_3__ tsd_hash_bin_t ;
typedef scalar_t__ pid_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t FUNC_2 (size_t,int ) ;
 int FUNC_3 (int *,int *) ;
 TYPE_2__* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(tsd_hash_table_t *VAR_3, pid_t VAR_4)
{
 tsd_hash_entry_t *VAR_5;
 tsd_hash_bin_t *VAR_6;
 ulong_t VAR_7;


 VAR_5 = FUNC_4(sizeof (tsd_hash_entry_t), VAR_1);
 if (VAR_5 == ((void*)0))
  return (VAR_0);

 FUNC_5(&VAR_3->ht_lock);
 VAR_5->he_key = VAR_2;
 VAR_5->he_pid = VAR_4;
 VAR_5->he_dtor = ((void*)0);
 VAR_5->he_value = ((void*)0);
 FUNC_0(&VAR_5->he_list);
 FUNC_1(&VAR_5->he_key_list);
 FUNC_1(&VAR_5->he_pid_list);

 VAR_7 = FUNC_2((ulong_t)VAR_2 * (ulong_t)VAR_4, VAR_3->ht_bits);
 VAR_6 = &VAR_3->ht_bins[VAR_7];
 FUNC_5(&VAR_6->hb_lock);

 FUNC_3(&VAR_5->he_list, &VAR_6->hb_head);

 FUNC_6(&VAR_6->hb_lock);
 FUNC_6(&VAR_3->ht_lock);

 return (0);
}
