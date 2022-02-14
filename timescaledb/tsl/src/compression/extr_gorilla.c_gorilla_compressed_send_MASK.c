
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ compression_algorithm; } ;
struct TYPE_7__ {int nulls; TYPE_1__* header; int xors; int num_bits_used_per_xor; int leading_zeros; int tag1s; int tag0s; } ;
struct TYPE_6__ {scalar_t__ has_nulls; int last_value; } ;
typedef int StringInfo ;
typedef int GorillaCompressed ;
typedef TYPE_2__ CompressedGorillaData ;
typedef TYPE_3__ CompressedDataHeader ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_2__*,int const*) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;

void
FUNC_6(CompressedDataHeader *VAR_1, StringInfo VAR_2)
{
 CompressedGorillaData VAR_3;
 const GorillaCompressed *VAR_4 = (GorillaCompressed *) VAR_1;
 FUNC_0(VAR_1->compression_algorithm == VAR_0);

 FUNC_2(&VAR_3, VAR_4);
 FUNC_3(VAR_2, VAR_3.header->has_nulls);
 FUNC_4(VAR_2, VAR_3.header->last_value);
 FUNC_5(VAR_2, VAR_3.tag0s);
 FUNC_5(VAR_2, VAR_3.tag1s);
 FUNC_1(VAR_2, &VAR_3.leading_zeros);
 FUNC_5(VAR_2, VAR_3.num_bits_used_per_xor);
 FUNC_1(VAR_2, &VAR_3.xors);
 if (VAR_3.header->has_nulls)
  FUNC_5(VAR_2, VAR_3.nulls);
}
