
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int typalign; int typbyval; int typlen; } ;
typedef TYPE_1__ TypeCacheEntry ;
struct TYPE_8__ {int has_nulls; int nulls; int dictionary_indexes; int dictionary_items; int typalign; int typbyval; int typlen; int type; scalar_t__ next_index; } ;
typedef int Oid ;
typedef TYPE_2__ DictionaryCompressor ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int ,int) ;
 TYPE_2__* FUNC_2 (int) ;
 int FUNC_3 (int *) ;

DictionaryCompressor *
FUNC_4(Oid VAR_2)
{
 DictionaryCompressor *VAR_3 = FUNC_2(sizeof(*VAR_3));
 TypeCacheEntry *VAR_4 =
  FUNC_1(VAR_2, VAR_0 | VAR_1);

 VAR_3->next_index = 0;
 VAR_3->has_nulls = 0;
 VAR_3->type = VAR_2;
 VAR_3->typlen = VAR_4->typlen;
 VAR_3->typbyval = VAR_4->typbyval;
 VAR_3->typalign = VAR_4->typalign;

 VAR_3->dictionary_items = FUNC_0(VAR_4);

 FUNC_3(&VAR_3->dictionary_indexes);
 FUNC_3(&VAR_3->nulls);
 return VAR_3;
}
