
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_8__ {int * zc_word; } ;
struct TYPE_9__ {TYPE_1__ blk_cksum; } ;
typedef TYPE_2__ blkptr_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_2__ const*) ;
 scalar_t__ FUNC_2 (TYPE_2__ const*) ;
 int FUNC_3 (TYPE_2__ const*) ;
 scalar_t__ FUNC_4 (TYPE_2__ const*) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (int *,int ) ;

void
FUNC_8(const blkptr_t *VAR_2, uint8_t *VAR_3)
{
 uint64_t VAR_4;

 FUNC_0(FUNC_4(VAR_2) || FUNC_2(VAR_2));


 if (FUNC_1(VAR_2) == VAR_0) {
  FUNC_7(VAR_3, VAR_1);
  return;
 }

 if (!FUNC_3(VAR_2)) {
  FUNC_6(&VAR_2->blk_cksum.zc_word[2], VAR_3, sizeof (uint64_t));
  FUNC_6(&VAR_2->blk_cksum.zc_word[3], VAR_3 + sizeof (uint64_t),
      sizeof (uint64_t));
 } else {
  VAR_4 = FUNC_5(VAR_2->blk_cksum.zc_word[2]);
  FUNC_6(&VAR_4, VAR_3, sizeof (uint64_t));

  VAR_4 = FUNC_5(VAR_2->blk_cksum.zc_word[3]);
  FUNC_6(&VAR_4, VAR_3 + sizeof (uint64_t), sizeof (uint64_t));
 }
}
