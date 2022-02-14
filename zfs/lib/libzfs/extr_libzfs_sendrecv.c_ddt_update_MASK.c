
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int * zc_word; } ;
typedef TYPE_1__ zio_cksum_t ;
typedef scalar_t__ uint64_t ;
typedef size_t uint32_t ;
typedef int libzfs_handle_t ;
struct TYPE_11__ {TYPE_3__** dedup_hash_array; int numhashbits; } ;
typedef TYPE_2__ dedup_table_t ;
struct TYPE_12__ {scalar_t__ dde_prop; int dde_ref; int dde_chksum; struct TYPE_12__* dde_next; } ;
typedef TYPE_3__ dedup_entry_t ;
typedef int dataref_t ;
typedef int boolean_t ;


 size_t FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,TYPE_1__) ;
 int FUNC_2 (int *,TYPE_2__*,TYPE_3__**,TYPE_1__*,scalar_t__,int *) ;

__attribute__((used)) static boolean_t
FUNC_3(libzfs_handle_t *VAR_2, dedup_table_t *VAR_3, zio_cksum_t *VAR_4,
    uint64_t VAR_5, dataref_t *VAR_6)
{
 uint32_t VAR_7;
 dedup_entry_t **VAR_8;

 VAR_7 = FUNC_0(VAR_4->zc_word[0], 0, VAR_3->numhashbits);

 for (VAR_8 = &(VAR_3->dedup_hash_array[VAR_7]); *VAR_8 != ((void*)0);
     VAR_8 = &((*VAR_8)->dde_next)) {
  if (FUNC_1(((*VAR_8)->dde_chksum), *VAR_4) &&
      (*VAR_8)->dde_prop == VAR_5) {
   *VAR_6 = (*VAR_8)->dde_ref;
   return (VAR_1);
  }
 }
 FUNC_2(VAR_2, VAR_3, VAR_8, VAR_4, VAR_5, VAR_6);
 return (VAR_0);
}
