
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_6__ {int has_nulls; int element_type; } ;
struct TYPE_5__ {scalar_t__ compression_algorithm; } ;
typedef int StringInfo ;
typedef TYPE_1__ CompressedDataHeader ;
typedef TYPE_2__ ArrayCompressed ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,char const*,int,int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ) ;

void
FUNC_5(CompressedDataHeader *VAR_1, StringInfo VAR_2)
{
 const char *VAR_3 = (char *) VAR_1;
 uint32 VAR_4;
 ArrayCompressed *VAR_5;

 FUNC_0(VAR_1->compression_algorithm == VAR_0);
 VAR_5 = (ArrayCompressed *) VAR_1;

 VAR_3 += sizeof(*VAR_5);

 VAR_4 = FUNC_1(VAR_5);
 VAR_4 -= sizeof(*VAR_5);

 FUNC_3(VAR_2, VAR_5->has_nulls == 1);

 FUNC_4(VAR_5->element_type, VAR_2);

 FUNC_2(VAR_2,
          VAR_3,
          VAR_4,
          VAR_5->element_type,
          VAR_5->has_nulls);
}
