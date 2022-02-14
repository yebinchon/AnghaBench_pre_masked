
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint_t ;
struct TYPE_7__ {size_t sh_hashlen; TYPE_2__** sh_hash; } ;
typedef TYPE_1__ fmd_serd_hash_t ;
struct TYPE_8__ {struct TYPE_8__* sg_next; } ;
typedef TYPE_2__ fmd_serd_eng_t ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__**) ;

void
FUNC_3(fmd_serd_hash_t *VAR_0)
{
 fmd_serd_eng_t *VAR_1, *VAR_2;
 uint_t VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->sh_hashlen; VAR_3++) {
  for (VAR_1 = VAR_0->sh_hash[VAR_3]; VAR_1 != ((void*)0); VAR_1 = VAR_2) {
   VAR_2 = VAR_1->sg_next;
   FUNC_1(VAR_1);
  }
 }

 FUNC_2(VAR_0->sh_hash);
 FUNC_0(VAR_0, sizeof (fmd_serd_hash_t));
}
