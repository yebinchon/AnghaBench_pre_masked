
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mod_hash_entry {struct mod_hash_entry* mhe_next; int mhe_val; int mhe_key; } ;
struct TYPE_6__ {scalar_t__ mhs_nelems; } ;
struct TYPE_7__ {int mh_nchains; TYPE_1__ mh_stat; struct mod_hash_entry** mh_entries; } ;
typedef TYPE_2__ mod_hash_t ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int ,struct mod_hash_entry*) ;
 int VAR_0 ;

void
FUNC_3(mod_hash_t *VAR_1)
{
 int VAR_2;
 struct mod_hash_entry *VAR_3, *VAR_4;

 for (VAR_2 = 0; VAR_2 < VAR_1->mh_nchains; VAR_2++) {
  VAR_3 = VAR_1->mh_entries[VAR_2];
  while (VAR_3 != ((void*)0)) {
   FUNC_0(VAR_1, VAR_3->mhe_key);
   FUNC_1(VAR_1, VAR_3->mhe_val);
   VAR_4 = VAR_3;
   VAR_3 = VAR_3->mhe_next;
   FUNC_2(VAR_0, VAR_4);
  }
  VAR_1->mh_entries[VAR_2] = ((void*)0);
 }
 VAR_1->mh_stat.mhs_nelems = 0;
}
