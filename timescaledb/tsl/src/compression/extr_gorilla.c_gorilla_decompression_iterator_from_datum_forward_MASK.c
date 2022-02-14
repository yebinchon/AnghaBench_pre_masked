
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int * nulls; int xors; int * num_bits_used_per_xor; int leading_zeros; int * tag1s; int * tag0s; } ;
struct TYPE_7__ {int forward; int try_next; int element_type; int compression_algorithm; } ;
struct TYPE_6__ {int has_nulls; TYPE_2__ base; TYPE_5__ gorilla_data; int nulls; int xors; int num_bits_used; int leading_zeros; int tag1s; int tag0s; scalar_t__ prev_xor_bits_used; scalar_t__ prev_leading_zeroes; scalar_t__ prev_val; } ;
typedef int Oid ;
typedef TYPE_1__ GorillaDecompressionIterator ;
typedef TYPE_2__ DecompressionIterator ;
typedef int Datum ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_5__*,int ) ;
 int VAR_1 ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (int *,int *) ;

DecompressionIterator *
FUNC_4(Datum VAR_2, Oid VAR_3)
{
 GorillaDecompressionIterator *VAR_4 = FUNC_2(sizeof(*VAR_4));
 VAR_4->base.compression_algorithm = VAR_0;
 VAR_4->base.forward = 1;
 VAR_4->base.element_type = VAR_3;
 VAR_4->base.try_next = VAR_1;
 VAR_4->prev_val = 0;
 VAR_4->prev_leading_zeroes = 0;
 VAR_4->prev_xor_bits_used = 0;
 FUNC_1(&VAR_4->gorilla_data, VAR_2);

 FUNC_3(&VAR_4->tag0s, VAR_4->gorilla_data.tag0s);
 FUNC_3(&VAR_4->tag1s, VAR_4->gorilla_data.tag1s);
 FUNC_0(&VAR_4->leading_zeros, &VAR_4->gorilla_data.leading_zeros);
 FUNC_3(&VAR_4->num_bits_used,
             VAR_4->gorilla_data.num_bits_used_per_xor);
 FUNC_0(&VAR_4->xors, &VAR_4->gorilla_data.xors);

 VAR_4->has_nulls = VAR_4->gorilla_data.nulls != ((void*)0);
 if (VAR_4->has_nulls)
  FUNC_3(&VAR_4->nulls,
              VAR_4->gorilla_data.nulls);

 return &VAR_4->base;
}
