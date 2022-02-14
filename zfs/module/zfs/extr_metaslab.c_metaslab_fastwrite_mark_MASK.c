
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int vdev_pending_fastwrite; } ;
typedef TYPE_1__ vdev_t ;
typedef scalar_t__ uint64_t ;
typedef int spa_t ;
typedef int dva_t ;
struct TYPE_10__ {int * blk_dva; } ;
typedef TYPE_2__ blkptr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__ const*) ;
 scalar_t__ FUNC_2 (TYPE_2__ const*) ;
 int FUNC_3 (TYPE_2__ const*) ;
 int FUNC_4 (TYPE_2__ const*) ;
 int FUNC_5 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (int *,int ,int ,int ) ;
 int FUNC_8 (int *,int ,int ) ;
 TYPE_1__* FUNC_9 (int *,int ) ;

void
FUNC_10(spa_t *VAR_3, const blkptr_t *VAR_4)
{
 const dva_t *VAR_5 = VAR_4->blk_dva;
 int VAR_6 = FUNC_1(VAR_4);
 uint64_t VAR_7 = FUNC_2(VAR_4);
 int VAR_8;
 vdev_t *VAR_9;

 FUNC_0(!FUNC_4(VAR_4));
 FUNC_0(!FUNC_3(VAR_4));
 FUNC_0(VAR_7 > 0);

 FUNC_7(VAR_3, VAR_2, VAR_0, VAR_1);

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  if ((VAR_9 = FUNC_9(VAR_3, FUNC_5(&VAR_5[VAR_8]))) == ((void*)0))
   continue;
  FUNC_6(&VAR_9->vdev_pending_fastwrite, VAR_7);
 }

 FUNC_8(VAR_3, VAR_2, VAR_0);
}
