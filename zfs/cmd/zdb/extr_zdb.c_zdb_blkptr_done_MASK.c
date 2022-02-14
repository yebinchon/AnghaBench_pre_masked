
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ zb_blkid; scalar_t__ zb_level; scalar_t__ zb_object; scalar_t__ zb_objset; } ;
struct TYPE_6__ {int io_error; int io_flags; int io_abd; TYPE_3__ io_bookmark; TYPE_2__* io_private; int * io_bp; TYPE_4__* io_spa; } ;
typedef TYPE_1__ zio_t ;
struct TYPE_7__ {int zcb_haderrors; int * zcb_errors; } ;
typedef TYPE_2__ zdb_cb_t ;
typedef TYPE_3__ zbookmark_phys_t ;
typedef int u_longlong_t ;
struct TYPE_9__ {int spa_scrub_lock; int spa_scrub_io_cv; int spa_load_verify_bytes; } ;
typedef TYPE_4__ spa_t ;
typedef int blkptr_t ;
typedef int blkbuf ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int* VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int,int ,int ,int ,int ,char*) ;
 int FUNC_6 (char*,int,int *) ;

__attribute__((used)) static void
FUNC_7(zio_t *VAR_3)
{
 spa_t *VAR_4 = VAR_3->io_spa;
 blkptr_t *VAR_5 = VAR_3->io_bp;
 int VAR_6 = VAR_3->io_error;
 zdb_cb_t *VAR_7 = VAR_3->io_private;
 zbookmark_phys_t *VAR_8 = &VAR_3->io_bookmark;

 FUNC_1(VAR_3->io_abd);

 FUNC_3(&VAR_4->spa_scrub_lock);
 VAR_4->spa_load_verify_bytes -= FUNC_0(VAR_5);
 FUNC_2(&VAR_4->spa_scrub_io_cv);

 if (VAR_6 && !(VAR_3->io_flags & VAR_1)) {
  char VAR_9[VAR_0];

  VAR_7->zcb_haderrors = 1;
  VAR_7->zcb_errors[VAR_6]++;

  if (VAR_2['b'] >= 2)
   FUNC_6(VAR_9, sizeof (VAR_9), VAR_5);
  else
   VAR_9[0] = '\0';

  (void) FUNC_5("zdb_blkptr_cb: "
      "Got error %d reading "
      "<%llu, %llu, %lld, %llx> %s -- skipping\n",
      VAR_6,
      (u_longlong_t)VAR_8->zb_objset,
      (u_longlong_t)VAR_8->zb_object,
      (u_longlong_t)VAR_8->zb_level,
      (u_longlong_t)VAR_8->zb_blkid,
      VAR_9);
 }
 FUNC_4(&VAR_4->spa_scrub_lock);
}
