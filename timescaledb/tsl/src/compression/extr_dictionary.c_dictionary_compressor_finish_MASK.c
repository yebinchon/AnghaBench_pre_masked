
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64 ;
struct TYPE_10__ {int type; } ;
struct TYPE_9__ {int dictionary_size; int num_distinct; int total_size; TYPE_1__* dictionary_compressed_indexes; scalar_t__ is_all_null; } ;
struct TYPE_8__ {int num_elements; } ;
typedef TYPE_2__ DictionaryCompressorSerializationInfo ;
typedef TYPE_3__ DictionaryCompressor ;
typedef void DictionaryCompressed ;


 TYPE_2__ FUNC_0 (TYPE_3__*) ;
 void* FUNC_1 (TYPE_2__,int ) ;
 void* FUNC_2 (void*) ;

void *
FUNC_3(DictionaryCompressor *VAR_0)
{
 uint64 VAR_1;
 uint64 VAR_2;
 DictionaryCompressed *VAR_3;
 DictionaryCompressorSerializationInfo VAR_4 = FUNC_0(VAR_0);
 if (VAR_4.is_all_null)
  return ((void*)0);




 VAR_1 = VAR_4.dictionary_size / VAR_4.num_distinct;
 VAR_2 = VAR_1 * VAR_4.dictionary_compressed_indexes->num_elements;
 VAR_3 = FUNC_1(VAR_4, VAR_0->type);
 if (VAR_2 < VAR_4.total_size)
  return FUNC_2(VAR_3);

 return VAR_3;
}
