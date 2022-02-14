
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int io_spa; } ;
typedef TYPE_2__ zio_t ;
struct TYPE_7__ {scalar_t__ tx_sync_thread; } ;
struct TYPE_9__ {int dp_spa; TYPE_1__ dp_tx; } ;
typedef TYPE_3__ dsl_pool_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_3__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;

boolean_t
FUNC_3(zio_t *VAR_5)
{

 dsl_pool_t *VAR_6 = FUNC_0(VAR_5->io_spa);


 if (VAR_6 && VAR_4 == VAR_6->dp_tx.tx_sync_thread)
  return (VAR_1);


 if (VAR_6 && FUNC_1(VAR_6->dp_spa) &&
     !FUNC_2(VAR_5, VAR_2) &&
     !FUNC_2(VAR_5, VAR_3))
  return (VAR_1);


 return (VAR_0);
}
