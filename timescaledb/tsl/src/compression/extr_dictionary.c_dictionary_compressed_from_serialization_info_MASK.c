
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int has_nulls; int num_distinct; int element_type; int compression_algorithm; int vl_len_; } ;
struct TYPE_5__ {int total_size; int dictionary_serialization_info; int dictionary_size; int compressed_nulls; int nulls_size; int dictionary_compressed_indexes; int bitmaps_size; int num_distinct; } ;
typedef int Oid ;
typedef TYPE_1__ DictionaryCompressorSerializationInfo ;
typedef TYPE_2__ DictionaryCompressed ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 char* FUNC_2 (char*,int ,int ) ;
 char* FUNC_3 (char*,int ,int ) ;
 char* FUNC_4 (int) ;

__attribute__((used)) static DictionaryCompressed *
FUNC_5(DictionaryCompressorSerializationInfo VAR_1,
             Oid VAR_2)
{
 char *VAR_3 = FUNC_4(VAR_1.total_size);
 DictionaryCompressed *VAR_4 = (DictionaryCompressed *) VAR_3;
 FUNC_1(VAR_4->vl_len_, VAR_1.total_size);

 VAR_4->compression_algorithm = VAR_0;
 VAR_4->element_type = VAR_2;
 VAR_4->has_nulls = VAR_1.nulls_size > 0 ? 1 : 0;
 VAR_4->num_distinct = VAR_1.num_distinct;

 VAR_3 = VAR_3 + sizeof(DictionaryCompressed);
 VAR_3 = FUNC_3(VAR_3,
            VAR_1.bitmaps_size,
            VAR_1.dictionary_compressed_indexes);

 if (VAR_4->has_nulls)
  VAR_3 = FUNC_3(VAR_3, VAR_1.nulls_size, VAR_1.compressed_nulls);

 VAR_3 = FUNC_2(VAR_3,
              VAR_1.dictionary_size,
              VAR_1.dictionary_serialization_info);

 FUNC_0(VAR_3 - (char *) VAR_4 == VAR_1.total_size);
 return VAR_4;
}
