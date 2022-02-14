
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int next_index; int nulls; int dictionary_indexes; int typlen; int typbyval; int dictionary_items; } ;
struct TYPE_5__ {int index; int key; } ;
typedef TYPE_1__ DictionaryHashItem ;
typedef TYPE_2__ DictionaryCompressor ;
typedef int Datum ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 TYPE_1__* FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int *,int) ;

void
FUNC_4(DictionaryCompressor *VAR_0, Datum VAR_1)
{
 bool VAR_2;
 DictionaryHashItem *VAR_3;

 FUNC_0(VAR_0 != ((void*)0));

 VAR_3 = FUNC_2(VAR_0->dictionary_items, VAR_1, &VAR_2);

 if (!VAR_2)
 {

  VAR_3->index = VAR_0->next_index;
  VAR_3->key = FUNC_1(VAR_1, VAR_0->typbyval, VAR_0->typlen);
  VAR_0->next_index += 1;
 }

 FUNC_3(&VAR_0->dictionary_indexes, VAR_3->index);
 FUNC_3(&VAR_0->nulls, 0);
}
