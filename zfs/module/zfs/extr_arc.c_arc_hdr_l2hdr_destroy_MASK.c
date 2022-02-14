
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_12__ {int l2ad_alloc; int l2ad_vdev; int l2ad_buflist; int l2ad_mtx; } ;
typedef TYPE_1__ l2arc_dev_t ;
struct TYPE_13__ {TYPE_1__* b_dev; } ;
typedef TYPE_2__ l2arc_buf_hdr_t ;
struct TYPE_14__ {TYPE_2__ b_l2hdr; } ;
typedef TYPE_3__ arc_buf_hdr_t ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_8 (int *,TYPE_3__*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ,int ,int ) ;
 int FUNC_11 (int *,int ,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_12(arc_buf_hdr_t *VAR_3)
{
 l2arc_buf_hdr_t *VAR_4 = &VAR_3->b_l2hdr;
 l2arc_dev_t *VAR_5 = VAR_4->b_dev;
 uint64_t VAR_6 = FUNC_3(VAR_3);
 uint64_t VAR_7 = FUNC_9(VAR_5->l2ad_vdev, VAR_6);

 FUNC_1(FUNC_5(&VAR_5->l2ad_mtx));
 FUNC_1(FUNC_4(VAR_3));

 FUNC_8(&VAR_5->l2ad_buflist, VAR_3);

 FUNC_0(VAR_2, -VAR_6);
 FUNC_0(VAR_1, -FUNC_2(VAR_3));

 FUNC_10(VAR_5->l2ad_vdev, -VAR_7, 0, 0);

 (void) FUNC_11(&VAR_5->l2ad_alloc, FUNC_7(VAR_3),
     VAR_3);
 FUNC_6(VAR_3, VAR_0);
}
