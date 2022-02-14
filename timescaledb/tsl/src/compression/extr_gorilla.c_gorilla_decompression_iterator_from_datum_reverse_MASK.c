
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {TYPE_1__* header; int * nulls; int xors; int * num_bits_used_per_xor; int leading_zeros; int * tag1s; int * tag0s; } ;
struct TYPE_12__ {int forward; int try_next; int element_type; int compression_algorithm; } ;
struct TYPE_11__ {int has_nulls; TYPE_4__ base; TYPE_8__ gorilla_data; int prev_val; int prev_xor_bits_used; int num_bits_used; int leading_zeros; int prev_leading_zeroes; int nulls; int xors; int tag1s; int tag0s; } ;
struct TYPE_10__ {int val; int is_done; } ;
struct TYPE_9__ {int last_value; } ;
typedef TYPE_2__ Simple8bRleDecompressResult ;
typedef int Oid ;
typedef TYPE_3__ GorillaDecompressionIterator ;
typedef TYPE_4__ DecompressionIterator ;
typedef int Datum ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_8__*,int ) ;
 int VAR_2 ;
 TYPE_3__* FUNC_4 (int) ;
 int FUNC_5 (int *,int *) ;
 TYPE_2__ FUNC_6 (int *) ;

DecompressionIterator *
FUNC_7(Datum VAR_3, Oid VAR_4)
{
 GorillaDecompressionIterator *VAR_5 = FUNC_4(sizeof(*VAR_5));
 Simple8bRleDecompressResult VAR_6;

 VAR_5->base.compression_algorithm = VAR_1;
 VAR_5->base.forward = 0;
 VAR_5->base.element_type = VAR_4;
 VAR_5->base.try_next = VAR_2;
 FUNC_3(&VAR_5->gorilla_data, VAR_3);

 FUNC_5(&VAR_5->tag0s, VAR_5->gorilla_data.tag0s);
 FUNC_5(&VAR_5->tag1s, VAR_5->gorilla_data.tag1s);
 FUNC_2(&VAR_5->leading_zeros, &VAR_5->gorilla_data.leading_zeros);
 FUNC_5(&VAR_5->num_bits_used,
             VAR_5->gorilla_data.num_bits_used_per_xor);
 FUNC_2(&VAR_5->xors, &VAR_5->gorilla_data.xors);

 VAR_5->has_nulls = VAR_5->gorilla_data.nulls != ((void*)0);
 if (VAR_5->has_nulls)
  FUNC_5(&VAR_5->nulls, VAR_5->gorilla_data.nulls);


 VAR_5->prev_leading_zeroes =
  FUNC_1(&VAR_5->leading_zeros, VAR_0);
 VAR_6 = FUNC_6(&VAR_5->num_bits_used);
 FUNC_0(!VAR_6.is_done);
 VAR_5->prev_xor_bits_used = VAR_6.val;
 VAR_5->prev_val = VAR_5->gorilla_data.header->last_value;
 return &VAR_5->base;
}
