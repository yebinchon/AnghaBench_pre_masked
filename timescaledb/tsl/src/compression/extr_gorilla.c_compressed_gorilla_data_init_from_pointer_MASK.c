
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * nulls; TYPE_1__ const* header; int xors; void* num_bits_used_per_xor; int leading_zeros; void* tag1s; void* tag0s; } ;
struct TYPE_5__ {scalar_t__ compression_algorithm; int has_nulls; int bits_used_in_last_xor_bucket; int num_xor_buckets; int bits_used_in_last_leading_zeros_bucket; int num_leading_zeroes_buckets; } ;
typedef TYPE_1__ GorillaCompressed ;
typedef TYPE_2__ CompressedGorillaData ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int *,char const*,int ,int ) ;
 void* FUNC_1 (char const**) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void
FUNC_3(CompressedGorillaData *VAR_2,
            const GorillaCompressed *VAR_3)
{
 bool VAR_4;
 const char *VAR_5 = (char *) VAR_3;

 VAR_2->header = VAR_3;
 if (VAR_2->header->compression_algorithm != VAR_0)
  FUNC_2(VAR_1, "unknown compression algorithm");

 VAR_4 = VAR_2->header->has_nulls == 1;
 VAR_5 += sizeof(GorillaCompressed);

 VAR_2->tag0s = FUNC_1(&VAR_5);
 VAR_2->tag1s = FUNC_1(&VAR_5);

 VAR_5 = FUNC_0(&VAR_2->leading_zeros,
             VAR_5,
             VAR_2->header->num_leading_zeroes_buckets,
             VAR_2->header
              ->bits_used_in_last_leading_zeros_bucket);

 VAR_2->num_bits_used_per_xor = FUNC_1(&VAR_5);

 VAR_5 = FUNC_0(&VAR_2->xors,
             VAR_5,
             VAR_2->header->num_xor_buckets,
             VAR_2->header->bits_used_in_last_xor_bucket);

 if (VAR_4)
  VAR_2->nulls = FUNC_1(&VAR_5);
 else
  VAR_2->nulls = ((void*)0);
}
