
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef void* uint64_t ;
typedef void* uint32_t ;
struct TYPE_8__ {TYPE_1__* blk_dva; } ;
typedef TYPE_2__ blkptr_t ;
struct TYPE_7__ {void** dva_word; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,void*) ;
 int FUNC_3 (TYPE_2__*) ;
 void* FUNC_4 (void*) ;
 void* FUNC_5 (void*) ;
 int FUNC_6 (int *,void**,int) ;

void
FUNC_7(blkptr_t *VAR_0, uint8_t *VAR_1, uint8_t *VAR_2)
{
 uint64_t VAR_3;
 uint32_t VAR_4;

 FUNC_0(FUNC_1(VAR_0));

 if (!FUNC_3(VAR_0)) {
  FUNC_6(VAR_1, &VAR_0->blk_dva[2].dva_word[0], sizeof (uint64_t));
  FUNC_6(VAR_2, &VAR_0->blk_dva[2].dva_word[1], sizeof (uint64_t));
  FUNC_6(VAR_2 + sizeof (uint64_t), &VAR_4, sizeof (uint32_t));
  FUNC_2(VAR_0, VAR_4);
 } else {
  FUNC_6(VAR_1, &VAR_3, sizeof (uint64_t));
  VAR_0->blk_dva[2].dva_word[0] = FUNC_5(VAR_3);

  FUNC_6(VAR_2, &VAR_3, sizeof (uint64_t));
  VAR_0->blk_dva[2].dva_word[1] = FUNC_5(VAR_3);

  FUNC_6(VAR_2 + sizeof (uint64_t), &VAR_4, sizeof (uint32_t));
  FUNC_2(VAR_0, FUNC_4(VAR_4));
 }
}
