
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_9__ {TYPE_1__* blk_dva; } ;
typedef TYPE_2__ blkptr_t ;
struct TYPE_8__ {scalar_t__* dva_word; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__ const*) ;
 scalar_t__ FUNC_2 (TYPE_2__ const*) ;
 int FUNC_3 (TYPE_2__ const*) ;
 int FUNC_4 (TYPE_2__ const*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_7 (scalar_t__*,int *,int) ;
 int FUNC_8 (int *,int ) ;

void
FUNC_9(const blkptr_t *VAR_2, uint8_t *VAR_3, uint8_t *VAR_4)
{
 uint64_t VAR_5;
 uint32_t VAR_6;

 FUNC_0(FUNC_3(VAR_2));


 if (FUNC_2(VAR_2)) {
  FUNC_8(VAR_3, VAR_1);
  FUNC_8(VAR_4, VAR_0);
  return;
 }

 if (!FUNC_4(VAR_2)) {
  FUNC_7(&VAR_2->blk_dva[2].dva_word[0], VAR_3, sizeof (uint64_t));
  FUNC_7(&VAR_2->blk_dva[2].dva_word[1], VAR_4, sizeof (uint64_t));

  VAR_6 = (uint32_t)FUNC_1(VAR_2);
  FUNC_7(&VAR_6, VAR_4 + sizeof (uint64_t), sizeof (uint32_t));
 } else {
  VAR_5 = FUNC_6(VAR_2->blk_dva[2].dva_word[0]);
  FUNC_7(&VAR_5, VAR_3, sizeof (uint64_t));

  VAR_5 = FUNC_6(VAR_2->blk_dva[2].dva_word[1]);
  FUNC_7(&VAR_5, VAR_4, sizeof (uint64_t));

  VAR_6 = FUNC_5((uint32_t)FUNC_1(VAR_2));
  FUNC_7(&VAR_6, VAR_4 + sizeof (uint64_t), sizeof (uint32_t));
 }
}
