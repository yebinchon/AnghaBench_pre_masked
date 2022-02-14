
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
typedef int spa_t ;
typedef int kmutex_t ;
typedef int blkptr_t ;
struct TYPE_8__ {int b_refcnt; } ;
struct TYPE_9__ {TYPE_1__ b_l1hdr; } ;
typedef TYPE_2__ arc_buf_hdr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_4 (int ,TYPE_2__*,int *) ;
 int FUNC_5 (TYPE_2__*) ;
 TYPE_2__* FUNC_6 (int ,int const*,int **) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *) ;

void
FUNC_10(spa_t *VAR_1, const blkptr_t *VAR_2)
{
 arc_buf_hdr_t *VAR_3;
 kmutex_t *VAR_4;
 uint64_t VAR_5 = FUNC_8(VAR_1);

 FUNC_0(!FUNC_1(VAR_2));

 VAR_3 = FUNC_6(VAR_5, VAR_2, &VAR_4);
 if (VAR_3 == ((void*)0))
  return;
 if (!FUNC_2(VAR_3) || (!FUNC_3(VAR_3) &&
     FUNC_9(&VAR_3->b_l1hdr.b_refcnt))) {
  FUNC_4(VAR_0, VAR_3, VAR_4);
  FUNC_5(VAR_3);
  FUNC_7(VAR_4);
 } else {
  FUNC_7(VAR_4);
 }

}
