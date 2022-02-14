
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_12__ {int DoublePipe; } ;
struct TYPE_11__ {int DoublePipe; } ;
struct TYPE_10__ {int DoublePipe; } ;
struct TYPE_9__ {int hashbitlen; int unprocessed_bits; int bits_processed; } ;
typedef TYPE_1__ EdonRState ;


 int FUNC_0 (int ) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int ,int ,int) ;
 TYPE_6__* FUNC_3 (TYPE_1__*) ;
 TYPE_4__* FUNC_4 (TYPE_1__*) ;
 TYPE_2__* FUNC_5 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void
FUNC_6(EdonRState *VAR_4, size_t VAR_5)
{
 FUNC_0(FUNC_1(VAR_5));
 switch (VAR_5) {
 case 224:
  VAR_4->hashbitlen = 224;
  VAR_4->bits_processed = 0;
  VAR_4->unprocessed_bits = 0;
  FUNC_2(VAR_0, FUNC_3(VAR_4)->DoublePipe,
      16 * sizeof (uint32_t));
  break;

 case 256:
  VAR_4->hashbitlen = 256;
  VAR_4->bits_processed = 0;
  VAR_4->unprocessed_bits = 0;
  FUNC_2(VAR_1, FUNC_4(VAR_4)->DoublePipe,
      16 * sizeof (uint32_t));
  break;

 case 384:
  VAR_4->hashbitlen = 384;
  VAR_4->bits_processed = 0;
  VAR_4->unprocessed_bits = 0;
  FUNC_2(VAR_2, FUNC_5(VAR_4)->DoublePipe,
      16 * sizeof (uint64_t));
  break;

 case 512:
  VAR_4->hashbitlen = 512;
  VAR_4->bits_processed = 0;
  VAR_4->unprocessed_bits = 0;
  FUNC_2(VAR_3, FUNC_3(VAR_4)->DoublePipe,
      16 * sizeof (uint64_t));
  break;
 }
}
