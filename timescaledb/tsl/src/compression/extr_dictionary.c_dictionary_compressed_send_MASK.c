
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_6__ {scalar_t__ compression_algorithm; } ;
struct TYPE_5__ {int has_nulls; int element_type; } ;
typedef int StringInfo ;
typedef TYPE_1__ DictionaryCompressed ;
typedef TYPE_2__ CompressedDataHeader ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__ const*) ;
 int FUNC_2 (int ,char const*,int,int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,void*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int ,int ) ;

void
FUNC_7(CompressedDataHeader *VAR_1, StringInfo VAR_2)
{
 uint32 VAR_3;
 uint32 VAR_4;
 const DictionaryCompressed *VAR_5;
 const char *VAR_6;

 FUNC_0(VAR_1->compression_algorithm == VAR_0);
 VAR_5 = (DictionaryCompressed *) VAR_1;

 VAR_6 = (char *) VAR_5;

 VAR_6 += sizeof(*VAR_5);

 VAR_3 = FUNC_1(VAR_5);
 VAR_3 -= sizeof(*VAR_5);

 FUNC_3(VAR_2, VAR_5->has_nulls == 1);

 FUNC_6(VAR_5->element_type, VAR_2);

 VAR_4 = FUNC_5((void *) VAR_6);
 FUNC_4(VAR_2, (void *) VAR_6);
 VAR_6 += VAR_4;
 VAR_3 -= VAR_4;

 if (VAR_5->has_nulls)
 {
  uint32 VAR_7 = FUNC_5((void *) VAR_6);
  FUNC_4(VAR_2, (void *) VAR_6);
  VAR_6 += VAR_7;
  VAR_3 -= VAR_7;
 }

 FUNC_2(VAR_2,
          VAR_6,
          VAR_3,
          VAR_5->element_type,
          0);
}
