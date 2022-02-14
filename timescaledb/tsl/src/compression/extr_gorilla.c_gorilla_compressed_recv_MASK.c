
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {void* nulls; void* xors; void* num_bits_used_per_xor; void* leading_zeros; void* tag1s; void* tag0s; TYPE_2__* header; } ;
struct TYPE_5__ {int member_0; } ;
struct TYPE_6__ {int has_nulls; int last_value; TYPE_1__ member_0; } ;
typedef int StringInfo ;
typedef TYPE_2__ GorillaCompressed ;
typedef int Datum ;
typedef TYPE_3__ CompressedGorillaData ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (int ) ;

Datum
FUNC_7(StringInfo VAR_1)
{
 GorillaCompressed VAR_2 = { 0 };
 CompressedGorillaData VAR_3 = {
  .header = &VAR_2,
 };

 VAR_2.has_nulls = FUNC_4(VAR_1);
 if (VAR_2.has_nulls != 0 && VAR_2.has_nulls != 1)
  FUNC_3(VAR_0, "invalid recv in gorilla: bad bool");

 VAR_2.last_value = FUNC_5(VAR_1);
 VAR_3.tag0s = FUNC_6(VAR_1);
 VAR_3.tag1s = FUNC_6(VAR_1);
 VAR_3.leading_zeros = FUNC_1(VAR_1);
 VAR_3.num_bits_used_per_xor = FUNC_6(VAR_1);
 VAR_3.xors = FUNC_1(VAR_1);

 if (VAR_2.has_nulls)
  VAR_3.nulls = FUNC_6(VAR_1);

 FUNC_0(FUNC_2(&VAR_3));
}
