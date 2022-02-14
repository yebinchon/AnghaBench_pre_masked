
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct mod_hash_entry {int mhe_val; int mhe_key; struct mod_hash_entry* mhe_next; } ;
typedef int mod_hash_val_t ;
struct TYPE_7__ {int mhs_nelems; } ;
struct TYPE_8__ {TYPE_1__ mh_stat; struct mod_hash_entry** mh_entries; } ;
typedef TYPE_2__ mod_hash_t ;
typedef int mod_hash_key_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int ,struct mod_hash_entry*) ;
 int VAR_1 ;

int
FUNC_4(mod_hash_t *VAR_2, mod_hash_key_t VAR_3,
    mod_hash_val_t *VAR_4)
{
 int VAR_5;
 struct mod_hash_entry *VAR_6, *VAR_7;

 VAR_5 = FUNC_2(VAR_2, VAR_3);
 VAR_7 = ((void*)0);

 for (VAR_6 = VAR_2->mh_entries[VAR_5]; VAR_6 != ((void*)0); VAR_6 = VAR_6->mhe_next) {
  if (FUNC_0(VAR_2, VAR_6->mhe_key, VAR_3) == 0)
   break;
  VAR_7 = VAR_6;
 }

 if (VAR_6 == ((void*)0)) {
  return (VAR_0);
 }

 if (VAR_7 == ((void*)0))
  VAR_2->mh_entries[VAR_5] = VAR_6->mhe_next;
 else
  VAR_7->mhe_next = VAR_6->mhe_next;




 FUNC_1(VAR_2, VAR_6->mhe_key);

 *VAR_4 = VAR_6->mhe_val;
 FUNC_3(VAR_1, VAR_6);
 VAR_2->mh_stat.mhs_nelems--;

 return (0);
}
