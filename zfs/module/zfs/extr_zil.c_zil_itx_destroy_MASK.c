
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ lrc_txtype; } ;
struct TYPE_6__ {int itx_size; int itx_callback_data; int (* itx_callback ) (int ) ;TYPE_1__ itx_lr; } ;
typedef TYPE_2__ itx_t ;


 int FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;

void
FUNC_3(itx_t *VAR_1)
{
 FUNC_0(VAR_1->itx_lr.lrc_txtype == VAR_0, VAR_1->itx_callback == ((void*)0));
 FUNC_0(VAR_1->itx_callback != ((void*)0), VAR_1->itx_lr.lrc_txtype != VAR_0);

 if (VAR_1->itx_callback != ((void*)0))
  VAR_1->itx_callback(VAR_1->itx_callback_data);

 FUNC_2(VAR_1, VAR_1->itx_size);
}
