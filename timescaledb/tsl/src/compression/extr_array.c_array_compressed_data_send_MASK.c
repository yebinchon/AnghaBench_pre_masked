
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* sizes; int * nulls; } ;
struct TYPE_7__ {int val; scalar_t__ is_null; int is_done; } ;
struct TYPE_6__ {int num_elements; } ;
typedef int StringInfo ;
typedef int Size ;
typedef int Oid ;
typedef int DecompressionIterator ;
typedef TYPE_2__ DecompressResult ;
typedef int DatumSerializer ;
typedef scalar_t__ BinaryStringEncoding ;
typedef TYPE_3__ ArrayCompressedData ;


 scalar_t__ VAR_0 ;
 TYPE_3__ FUNC_0 (char const*,int ,int ,int) ;
 int * FUNC_1 (char const*,int ,int ,int) ;
 TYPE_2__ FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int *) ;

void
FUNC_9(StringInfo VAR_1, const char *VAR_2, Size VAR_3,
         Oid VAR_4, bool VAR_5)
{
 ArrayCompressedData VAR_6;
 DecompressionIterator *VAR_7;
 DecompressResult VAR_8;
 DatumSerializer *VAR_9 = FUNC_3(VAR_4);
 BinaryStringEncoding VAR_10 = FUNC_5(VAR_9);

 VAR_6 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5);

 FUNC_6(VAR_1, VAR_6.nulls != ((void*)0));
 if (VAR_6.nulls != ((void*)0))
  FUNC_8(VAR_1, VAR_6.nulls);

 FUNC_6(VAR_1, VAR_10 == VAR_0);







 FUNC_7(VAR_1, VAR_6.sizes->num_elements);
 VAR_7 = FUNC_1(VAR_2,
                 VAR_3,
                 VAR_4,
                 VAR_5);
 for (VAR_8 = FUNC_2(VAR_7); !VAR_8.is_done;
   VAR_8 = FUNC_2(VAR_7))
 {
  if (VAR_8.is_null)
   continue;

  FUNC_4(VAR_9, VAR_10, VAR_1, VAR_8.val);
 }
}
