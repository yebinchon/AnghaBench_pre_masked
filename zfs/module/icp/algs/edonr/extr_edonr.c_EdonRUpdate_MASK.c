
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int const uint64_t ;
typedef int const uint32_t ;
struct TYPE_9__ {scalar_t__ LastPart; int DoublePipe; } ;
struct TYPE_8__ {scalar_t__ LastPart; int DoublePipe; } ;
struct TYPE_7__ {int hashbitlen; int unprocessed_bits; size_t bits_processed; } ;
typedef TYPE_1__ EdonRState ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_2 (size_t,int const*,int ) ;
 size_t FUNC_3 (size_t,int const*,int ) ;
 int FUNC_4 (int const*,scalar_t__,int) ;
 TYPE_4__* FUNC_5 (TYPE_1__*) ;
 TYPE_2__* FUNC_6 (TYPE_1__*) ;

void
FUNC_7(EdonRState *VAR_2, const uint8_t *VAR_3, size_t VAR_4)
{
 uint32_t *VAR_5;
 uint64_t *VAR_6;

 size_t VAR_7;

 FUNC_0(FUNC_1(VAR_2->hashbitlen));
 switch (VAR_2->hashbitlen) {
 case 224:
 case 256:
  if (VAR_2->unprocessed_bits > 0) {

   int VAR_8 = (int)VAR_4 >> 3;

   FUNC_0(VAR_2->unprocessed_bits + VAR_4 <=
       VAR_0 * 8);

   FUNC_4(VAR_3, FUNC_5(VAR_2)->LastPart
       + (VAR_2->unprocessed_bits >> 3), VAR_8);
   VAR_2->unprocessed_bits += (int)VAR_4;
   VAR_4 = VAR_2->unprocessed_bits;

   VAR_5 = (uint32_t *)FUNC_5(VAR_2)->LastPart;
  } else

   VAR_5 = (uint32_t *)VAR_3;

  VAR_7 = FUNC_2(VAR_4, VAR_5,
      FUNC_5(VAR_2)->DoublePipe);
  VAR_2->bits_processed += VAR_7;
  VAR_4 -= VAR_7;
  VAR_2->unprocessed_bits = (int)VAR_4;
  if (VAR_4 > 0) {

   int VAR_9 =
       ((~(((-(int)VAR_4) >> 3) & 0x01ff)) +
       1) & 0x01ff;

   VAR_5 += VAR_7 >> 5;
   FUNC_4(VAR_5, FUNC_5(VAR_2)->LastPart, VAR_9);
  }
  break;

 case 384:
 case 512:
  if (VAR_2->unprocessed_bits > 0) {

   int VAR_10 = (int)VAR_4 >> 3;

   FUNC_0(VAR_2->unprocessed_bits + VAR_4 <=
       VAR_1 * 8);

   FUNC_4(VAR_3, FUNC_6(VAR_2)->LastPart
       + (VAR_2->unprocessed_bits >> 3), VAR_10);
   VAR_2->unprocessed_bits += (int)VAR_4;
   VAR_4 = VAR_2->unprocessed_bits;

   VAR_6 = (uint64_t *)FUNC_6(VAR_2)->LastPart;
  } else

   VAR_6 = (uint64_t *)VAR_3;

  VAR_7 = FUNC_3(VAR_4, VAR_6,
      FUNC_6(VAR_2)->DoublePipe);
  VAR_2->bits_processed += VAR_7;
  VAR_4 -= VAR_7;
  VAR_2->unprocessed_bits = (int)VAR_4;
  if (VAR_4 > 0) {

   int VAR_11 =
       ((~(((-(int)VAR_4) >> 3) & 0x03ff)) +
       1) & 0x03ff;

   VAR_6 += VAR_7 >> 6;
   FUNC_4(VAR_6, FUNC_6(VAR_2)->LastPart, VAR_11);
  }
  break;
 }
}
