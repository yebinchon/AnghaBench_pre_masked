
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ io_error; int * io_bp; } ;
typedef TYPE_2__ zio_t ;
struct TYPE_8__ {TYPE_1__* dsa_zgd; } ;
typedef TYPE_3__ dmu_sync_arg_t ;
struct TYPE_9__ {int db_size; } ;
typedef TYPE_4__ dmu_buf_t ;
typedef int blkptr_t ;
typedef int arc_buf_t ;
struct TYPE_6__ {TYPE_4__* zgd_db; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void
FUNC_6(zio_t *VAR_0, arc_buf_t *VAR_1, void *VAR_2)
{
 dmu_sync_arg_t *VAR_3 = VAR_2;
 dmu_buf_t *VAR_4 = VAR_3->dsa_zgd->zgd_db;
 blkptr_t *VAR_5 = VAR_0->io_bp;

 if (VAR_0->io_error == 0) {
  if (FUNC_3(VAR_5)) {




   FUNC_5(VAR_5, VAR_4->db_size);
  } else if (!FUNC_2(VAR_5)) {
   FUNC_0(FUNC_1(VAR_5) == 0);
   FUNC_4(VAR_5, 1);
  }
 }
}
