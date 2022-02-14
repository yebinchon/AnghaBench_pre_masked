
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint_t ;
struct mod_hash_entry {struct mod_hash_entry* mhe_next; int mhe_val; int mhe_key; } ;
typedef int mod_hash_val_t ;
struct TYPE_6__ {int mhs_nelems; int mhs_nomem; } ;
struct TYPE_7__ {TYPE_1__ mh_stat; struct mod_hash_entry** mh_entries; int mh_sleep; } ;
typedef TYPE_2__ mod_hash_t ;
typedef int mod_hash_key_t ;
typedef scalar_t__ mod_hash_hndl_t ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 size_t FUNC_1 (TYPE_2__*,int ) ;
 struct mod_hash_entry* FUNC_2 (int ,int ) ;
 int VAR_1 ;

int
FUNC_3(mod_hash_t *VAR_2, mod_hash_key_t VAR_3,
    mod_hash_val_t VAR_4, mod_hash_hndl_t VAR_5)
{
 uint_t VAR_6;
 struct mod_hash_entry *VAR_7;

 FUNC_0(VAR_2);





 if (VAR_5 == (mod_hash_hndl_t)0) {
  VAR_7 = FUNC_2(VAR_1, VAR_2->mh_sleep);
  if (VAR_7 == ((void*)0)) {
   VAR_2->mh_stat.mhs_nomem++;
   return (VAR_0);
  }
 } else {
  VAR_7 = (struct mod_hash_entry *)VAR_5;
 }

 VAR_6 = FUNC_1(VAR_2, VAR_3);
 VAR_7->mhe_key = VAR_3;
 VAR_7->mhe_val = VAR_4;
 VAR_7->mhe_next = VAR_2->mh_entries[VAR_6];

 VAR_2->mh_entries[VAR_6] = VAR_7;
 VAR_2->mh_stat.mhs_nelems++;

 return (0);
}
