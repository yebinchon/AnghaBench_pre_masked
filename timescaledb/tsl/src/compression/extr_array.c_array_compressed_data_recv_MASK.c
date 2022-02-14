
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8 ;
typedef scalar_t__ uint32 ;
struct TYPE_7__ {scalar_t__ val; int is_done; } ;
struct TYPE_6__ {scalar_t__ num_elements; } ;
typedef int StringInfo ;
typedef TYPE_1__ Simple8bRleDecompressionIterator ;
typedef TYPE_2__ Simple8bRleDecompressResult ;
typedef int Oid ;
typedef int DatumDeserializer ;
typedef int Datum ;
typedef int ArrayCompressorSerializationInfo ;
typedef int ArrayCompressor ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ) ;
 int * FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 TYPE_2__ FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int ) ;

ArrayCompressorSerializationInfo *
FUNC_12(StringInfo VAR_2, Oid VAR_3)
{
 ArrayCompressor *VAR_4 = FUNC_1(VAR_3);
 Simple8bRleDecompressionIterator VAR_5;
 uint8 VAR_6;
 DatumDeserializer *VAR_7 = FUNC_6(VAR_3);
 bool VAR_8;
 uint32 VAR_9;
 uint32 VAR_10;

 VAR_6 = FUNC_7(VAR_2) != 0;
 if (VAR_6)
  FUNC_9(&VAR_5,
              FUNC_11(VAR_2));

 VAR_8 = FUNC_7(VAR_2) != 0;


 VAR_9 = FUNC_8(VAR_2);


 if (VAR_6)
  VAR_9 = VAR_5.num_elements;

 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
 {
  Datum VAR_11;
  if (VAR_6)
  {
   Simple8bRleDecompressResult VAR_12 =
    FUNC_10(&VAR_5);
   FUNC_0(!VAR_12.is_done);
   if (VAR_12.val)
   {
    FUNC_3(VAR_4);
    continue;
   }
  }

  VAR_11 = FUNC_5(VAR_7,
          VAR_8 ? VAR_0 : VAR_1,
          VAR_2);

  FUNC_2(VAR_4, VAR_11);
 }

 return FUNC_4(VAR_4);
}
