
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int nulls; TYPE_1__* header; int xors; int num_bits_used_per_xor; int leading_zeros; int tag1s; int tag0s; } ;
struct TYPE_7__ {int bits_used_in_last_xor_bucket; int num_xor_buckets; int bits_used_in_last_leading_zeros_bucket; int num_leading_zeroes_buckets; scalar_t__ has_nulls; int compression_algorithm; int last_value; int vl_len_; } ;
struct TYPE_6__ {scalar_t__ has_nulls; int last_value; } ;
typedef scalar_t__ Size ;
typedef TYPE_2__ GorillaCompressed ;
typedef TYPE_3__ CompressedGorillaData ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;
 char* FUNC_3 (char*,scalar_t__,int ) ;
 char* FUNC_4 (char*,scalar_t__,int *,int *,int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int) ;
 char* FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static GorillaCompressed *
FUNC_10(CompressedGorillaData *VAR_4)
{
 Size VAR_5 = FUNC_9(VAR_4->tag0s);
 Size VAR_6 = FUNC_9(VAR_4->tag1s);
 Size VAR_7 = FUNC_2(&VAR_4->leading_zeros);
 Size VAR_8 = FUNC_9(VAR_4->num_bits_used_per_xor);
 Size VAR_9 = FUNC_2(&VAR_4->xors);
 Size VAR_10 = 0;

 Size VAR_11;
 char *VAR_12;
 GorillaCompressed *VAR_13;
 if (VAR_4->header->has_nulls)
  VAR_10 = FUNC_9(VAR_4->nulls);

 VAR_11 = sizeof(GorillaCompressed) + VAR_5 + VAR_6 + VAR_7 +
       VAR_8 + VAR_9;
 if (VAR_4->header->has_nulls)
  VAR_11 += VAR_10;

 if (!FUNC_0(VAR_11))
  FUNC_5(VAR_2,
    (FUNC_6(VAR_1),
     FUNC_7("compressed size exceeds the maximum allowed (%d)", (int) VAR_3)));

 VAR_12 = FUNC_8(VAR_11);
 VAR_13 = (GorillaCompressed *) VAR_12;
 FUNC_1(&VAR_13->vl_len_, VAR_11);

 VAR_13->last_value = VAR_4->header->last_value;
 VAR_13->compression_algorithm = VAR_0;
 VAR_13->has_nulls = VAR_4->header->has_nulls;
 VAR_12 += sizeof(GorillaCompressed);

 VAR_12 = FUNC_3(VAR_12, VAR_5, VAR_4->tag0s);
 VAR_12 = FUNC_3(VAR_12, VAR_6, VAR_4->tag1s);
 VAR_12 = FUNC_4(VAR_12,
            VAR_7,
            &VAR_4->leading_zeros,
            &VAR_13->num_leading_zeroes_buckets,
            &VAR_13->bits_used_in_last_leading_zeros_bucket);
 VAR_12 = FUNC_3(VAR_12,
            VAR_8,
            VAR_4->num_bits_used_per_xor);
 VAR_12 = FUNC_4(VAR_12,
            VAR_9,
            &VAR_4->xors,
            &VAR_13->num_xor_buckets,
            &VAR_13->bits_used_in_last_xor_bucket);

 if (VAR_4->header->has_nulls)
  VAR_12 = FUNC_3(VAR_12, VAR_10, VAR_4->nulls);
 return VAR_13;
}
