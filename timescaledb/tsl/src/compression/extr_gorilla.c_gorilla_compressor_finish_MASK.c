
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int * nulls; int xors; int * num_bits_used_per_xor; int leading_zeros; int * tag1s; int * tag0s; TYPE_2__* header; } ;
struct TYPE_7__ {int has_nulls; int last_value; int compression_algorithm; } ;
struct TYPE_6__ {scalar_t__ has_nulls; int nulls; int xors; int bits_used_per_xor; int leading_zeros; int tag1s; int tag0s; int prev_val; } ;
typedef TYPE_1__ GorillaCompressor ;
typedef TYPE_2__ GorillaCompressed ;
typedef TYPE_3__ CompressedGorillaData ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 void* FUNC_1 (TYPE_3__*) ;
 void* FUNC_2 (int *) ;

void *
FUNC_3(GorillaCompressor *VAR_1)
{
 GorillaCompressed VAR_2 = {
  .compression_algorithm = VAR_0,
  .has_nulls = VAR_1->has_nulls ? 1 : 0,
  .last_value = VAR_1->prev_val,
 };
 CompressedGorillaData VAR_3 = { .header = &VAR_2 };
 VAR_3.tag0s = FUNC_2(&VAR_1->tag0s);
 if (VAR_3.tag0s == ((void*)0))
  return ((void*)0);

 VAR_3.tag1s = FUNC_2(&VAR_1->tag1s);
 FUNC_0(VAR_3.tag1s != ((void*)0));
 VAR_3.leading_zeros = VAR_1->leading_zeros;





 VAR_3.num_bits_used_per_xor = FUNC_2(&VAR_1->bits_used_per_xor);
 FUNC_0(VAR_3.num_bits_used_per_xor != ((void*)0));
 VAR_3.xors = VAR_1->xors;
 VAR_3.nulls = FUNC_2(&VAR_1->nulls);
 FUNC_0(VAR_1->has_nulls || VAR_3.nulls != ((void*)0));

 return FUNC_1(&VAR_3);
}
