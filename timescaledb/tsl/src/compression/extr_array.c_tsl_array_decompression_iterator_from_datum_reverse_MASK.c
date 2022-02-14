
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_12__ {scalar_t__ compression_algorithm; scalar_t__ element_type; int has_nulls; } ;
struct TYPE_11__ {int data_len; int data; int * sizes; int * nulls; } ;
struct TYPE_9__ {int forward; scalar_t__ element_type; int try_next; scalar_t__ compression_algorithm; } ;
struct TYPE_10__ {int has_nulls; TYPE_1__ base; int deserializer; int num_data_bytes; int data_offset; int data; int sizes; int nulls; } ;
typedef scalar_t__ Oid ;
typedef TYPE_1__ DecompressionIterator ;
typedef int Datum ;
typedef TYPE_2__ ArrayDecompressionIterator ;
typedef TYPE_3__ ArrayCompressedData ;
typedef TYPE_4__ ArrayCompressed ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*) ;
 TYPE_3__ FUNC_3 (char const*,int,scalar_t__,int ) ;
 int VAR_2 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,char*) ;
 TYPE_2__* FUNC_6 (int) ;
 int FUNC_7 (int *,int *) ;

DecompressionIterator *
FUNC_8(Datum VAR_3, Oid VAR_4)
{
 ArrayCompressed *VAR_5;
 uint32 VAR_6;
 ArrayCompressedData VAR_7;
 ArrayDecompressionIterator *VAR_8 = FUNC_6(sizeof(*VAR_8));
 const char *VAR_9 = (void *) FUNC_1(VAR_3);
 VAR_8->base.compression_algorithm = VAR_0;
 VAR_8->base.forward = 0;
 VAR_8->base.element_type = VAR_4;
 VAR_8->base.try_next = VAR_2;

 VAR_5 = (ArrayCompressed *) VAR_9;
 VAR_9 += sizeof(*VAR_5);

 FUNC_0(VAR_5->compression_algorithm == VAR_0);
 if (VAR_4 != VAR_5->element_type)
  FUNC_5(VAR_1, "trying to decompress the wrong type");

 VAR_6 = FUNC_2(VAR_5);
 VAR_6 -= sizeof(*VAR_5);

 VAR_7 = FUNC_3(VAR_9,
                VAR_6,
                VAR_5->element_type,
                VAR_5->has_nulls);

 VAR_8->has_nulls = VAR_7.nulls != ((void*)0);
 if (VAR_8->has_nulls)
  FUNC_7(&VAR_8->nulls,
              VAR_7.nulls);

 FUNC_7(&VAR_8->sizes, VAR_7.sizes);

 VAR_8->data = VAR_7.data;
 VAR_8->num_data_bytes = VAR_7.data_len;
 VAR_8->data_offset = VAR_8->num_data_bytes;
 VAR_8->deserializer = FUNC_4(VAR_8->base.element_type);

 return &VAR_8->base;
}
