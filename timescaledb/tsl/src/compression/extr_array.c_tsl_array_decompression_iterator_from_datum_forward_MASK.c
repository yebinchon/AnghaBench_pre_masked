
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_3__ {scalar_t__ compression_algorithm; scalar_t__ element_type; int has_nulls; } ;
typedef scalar_t__ Oid ;
typedef int DecompressionIterator ;
typedef int Datum ;
typedef TYPE_1__ ArrayCompressed ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int * FUNC_3 (char const*,int,scalar_t__,int) ;
 int FUNC_4 (int ,char*) ;

DecompressionIterator *
FUNC_5(Datum VAR_2, Oid VAR_3)
{
 ArrayCompressed *VAR_4;
 uint32 VAR_5;
 const char *VAR_6 = (void *) FUNC_1(VAR_2);

 VAR_4 = (ArrayCompressed *) VAR_6;
 VAR_6 += sizeof(*VAR_4);

 FUNC_0(VAR_4->compression_algorithm == VAR_0);

 VAR_5 = FUNC_2(VAR_4);
 VAR_5 -= sizeof(*VAR_4);

 if (VAR_3 != VAR_4->element_type)
  FUNC_4(VAR_1, "trying to decompress the wrong type");

 return FUNC_3(VAR_6,
               VAR_5,
               VAR_4->element_type,
               VAR_4->has_nulls == 1);
}
