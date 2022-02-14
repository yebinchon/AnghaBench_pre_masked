
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int sio_zb; int sio_flags; } ;
typedef TYPE_1__ scan_io_t ;
typedef int list_t ;
typedef int int64_t ;
struct TYPE_13__ {int scn_bytes_pending; int scn_dp; } ;
typedef TYPE_2__ dsl_scan_t ;
struct TYPE_14__ {TYPE_2__* q_scn; } ;
typedef TYPE_3__ dsl_scan_io_queue_t ;
typedef int boolean_t ;
typedef int blkptr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,int ,int *,TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_3__*,int *) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static boolean_t
FUNC_9(dsl_scan_io_queue_t *VAR_2, list_t *VAR_3)
{
 dsl_scan_t *VAR_4 = VAR_2->q_scn;
 scan_io_t *VAR_5;
 int64_t VAR_6 = 0;
 boolean_t VAR_7 = VAR_0;

 while ((VAR_5 = FUNC_2(VAR_3)) != ((void*)0)) {
  blkptr_t VAR_8;

  if (FUNC_5(VAR_4)) {
   VAR_7 = VAR_1;
   break;
  }

  FUNC_7(VAR_5, &VAR_8);
  VAR_6 += FUNC_0(VAR_5);
  FUNC_4(VAR_4->scn_dp, &VAR_8, VAR_5->sio_flags,
      &VAR_5->sio_zb, VAR_2);
  (void) FUNC_3(VAR_3);
  FUNC_6(VAR_2, &VAR_8);
  FUNC_8(VAR_5);
 }

 FUNC_1(&VAR_4->scn_bytes_pending, -VAR_6);

 return (VAR_7);
}
