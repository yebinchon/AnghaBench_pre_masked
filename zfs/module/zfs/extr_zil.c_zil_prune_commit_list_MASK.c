
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int zl_itx_commit_list; int zl_lock; TYPE_2__* zl_last_lwb_opened; int zl_issuer_lock; } ;
typedef TYPE_1__ zilog_t ;
struct TYPE_11__ {scalar_t__ lwb_state; } ;
typedef TYPE_2__ lwb_t ;
struct TYPE_12__ {scalar_t__ lrc_txtype; } ;
typedef TYPE_3__ lr_t ;
struct TYPE_13__ {TYPE_3__ itx_lr; int * itx_private; } ;
typedef TYPE_4__ itx_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_1 ;
 TYPE_4__* FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_4__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,TYPE_2__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_4__*) ;

__attribute__((used)) static void
FUNC_10(zilog_t *VAR_2)
{
 itx_t *VAR_3;

 FUNC_0(FUNC_2(&VAR_2->zl_issuer_lock));

 while ((VAR_3 = FUNC_3(&VAR_2->zl_itx_commit_list)) != ((void*)0)) {
  lr_t *VAR_4 = &VAR_3->itx_lr;
  if (VAR_4->lrc_txtype != VAR_1)
   break;

  FUNC_5(&VAR_2->zl_lock);

  lwb_t *VAR_5 = VAR_2->zl_last_lwb_opened;
  if (VAR_5 == ((void*)0) ||
      VAR_5->lwb_state == VAR_0) {






   FUNC_8(VAR_3->itx_private);
  } else {
   FUNC_7(VAR_3->itx_private, VAR_5);
   VAR_3->itx_private = ((void*)0);
  }

  FUNC_6(&VAR_2->zl_lock);

  FUNC_4(&VAR_2->zl_itx_commit_list, VAR_3);
  FUNC_9(VAR_3);
 }

 FUNC_1(VAR_3 != ((void*)0), VAR_3->itx_lr.lrc_txtype != VAR_1);
}
