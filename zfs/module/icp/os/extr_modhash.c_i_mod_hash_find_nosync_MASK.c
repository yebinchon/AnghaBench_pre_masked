
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint_t ;
struct mod_hash_entry {int mhe_val; int mhe_key; struct mod_hash_entry* mhe_next; } ;
typedef int mod_hash_val_t ;
struct TYPE_6__ {int mhs_miss; int mhs_hit; } ;
struct TYPE_7__ {TYPE_1__ mh_stat; struct mod_hash_entry** mh_entries; } ;
typedef TYPE_2__ mod_hash_t ;
typedef int mod_hash_key_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ,int ) ;
 size_t FUNC_1 (TYPE_2__*,int ) ;

int
FUNC_2(mod_hash_t *VAR_1, mod_hash_key_t VAR_2,
    mod_hash_val_t *VAR_3)
{
 uint_t VAR_4;
 struct mod_hash_entry *VAR_5;

 VAR_4 = FUNC_1(VAR_1, VAR_2);

 for (VAR_5 = VAR_1->mh_entries[VAR_4]; VAR_5 != ((void*)0); VAR_5 = VAR_5->mhe_next) {
  if (FUNC_0(VAR_1, VAR_5->mhe_key, VAR_2) == 0) {
   *VAR_3 = VAR_5->mhe_val;
   VAR_1->mh_stat.mhs_hit++;
   return (0);
  }
 }
 VAR_1->mh_stat.mhs_miss++;
 return (VAR_0);
}
