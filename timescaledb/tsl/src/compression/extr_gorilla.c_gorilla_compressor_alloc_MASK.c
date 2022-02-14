
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int has_nulls; scalar_t__ prev_val; scalar_t__ prev_trailing_zeros; scalar_t__ prev_leading_zeroes; int nulls; int xors; int bits_used_per_xor; int leading_zeros; int tag1s; int tag0s; } ;
typedef TYPE_1__ GorillaCompressor ;


 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (int *) ;

GorillaCompressor *
FUNC_3(void)
{
 GorillaCompressor *VAR_0 = FUNC_1(sizeof(*VAR_0));
 FUNC_2(&VAR_0->tag0s);
 FUNC_2(&VAR_0->tag1s);
 FUNC_0(&VAR_0->leading_zeros);
 FUNC_2(&VAR_0->bits_used_per_xor);
 FUNC_0(&VAR_0->xors);
 FUNC_2(&VAR_0->nulls);
 VAR_0->has_nulls = 0;
 VAR_0->prev_leading_zeroes = 0;
 VAR_0->prev_trailing_zeros = 0;
 VAR_0->prev_val = 0;
 return VAR_0;
}
