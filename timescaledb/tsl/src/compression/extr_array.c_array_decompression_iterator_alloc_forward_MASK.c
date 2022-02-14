
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int data_len; int data; int * sizes; int * nulls; } ;
struct TYPE_7__ {int forward; int element_type; int try_next; int compression_algorithm; } ;
struct TYPE_8__ {int has_nulls; TYPE_1__ base; int deserializer; scalar_t__ data_offset; int num_data_bytes; int data; int sizes; int nulls; } ;
typedef int Size ;
typedef int Oid ;
typedef TYPE_1__ DecompressionIterator ;
typedef TYPE_2__ ArrayDecompressionIterator ;
typedef TYPE_3__ ArrayCompressedData ;


 int VAR_0 ;
 TYPE_3__ FUNC_0 (char const*,int ,int ,int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int) ;
 int FUNC_3 (int *,int *) ;

DecompressionIterator *
FUNC_4(const char *VAR_2, Size VAR_3,
             Oid VAR_4, bool VAR_5)
{
 ArrayCompressedData VAR_6 =
  FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);

 ArrayDecompressionIterator *VAR_7 = FUNC_2(sizeof(*VAR_7));
 VAR_7->base.compression_algorithm = VAR_0;
 VAR_7->base.forward = 1;
 VAR_7->base.element_type = VAR_4;
 VAR_7->base.try_next = VAR_1;

 VAR_7->has_nulls = VAR_6.nulls != ((void*)0);
 if (VAR_7->has_nulls)
  FUNC_3(&VAR_7->nulls, VAR_6.nulls);

 FUNC_3(&VAR_7->sizes, VAR_6.sizes);

 VAR_7->data = VAR_6.data;
 VAR_7->num_data_bytes = VAR_6.data_len;
 VAR_7->data_offset = 0;
 VAR_7->deserializer = FUNC_1(VAR_7->base.element_type);

 return &VAR_7->base;
}
