
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int zp_copies; } ;
struct TYPE_8__ {int io_txg; int io_bp; scalar_t__ io_error; TYPE_3__* io_private; int io_spa; TYPE_1__ io_prop; } ;
typedef TYPE_2__ zio_t ;
typedef int zio_link_t ;
typedef int ddt_t ;
typedef int ddt_phys_t ;
struct TYPE_9__ {TYPE_2__** dde_lead_zio; int * dde_phys; } ;
typedef TYPE_3__ ddt_entry_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int * FUNC_5 (int ,int ) ;
 TYPE_2__* FUNC_6 (TYPE_2__*,int **) ;

__attribute__((used)) static void
FUNC_7(zio_t *VAR_0)
{
 int VAR_1 = VAR_0->io_prop.zp_copies;
 ddt_t *VAR_2 = FUNC_5(VAR_0->io_spa, VAR_0->io_bp);
 ddt_entry_t *VAR_3 = VAR_0->io_private;
 ddt_phys_t *VAR_4 = &VAR_3->dde_phys[VAR_1];
 zio_t *VAR_5;

 if (VAR_0->io_error)
  return;

 FUNC_2(VAR_2);

 FUNC_0(VAR_3->dde_lead_zio[VAR_1] == VAR_0);

 FUNC_4(VAR_4, VAR_0->io_bp);

 zio_link_t *VAR_6 = ((void*)0);
 while ((VAR_5 = FUNC_6(VAR_0, &VAR_6)) != ((void*)0))
  FUNC_1(VAR_4, VAR_5->io_bp, VAR_0->io_txg);

 FUNC_3(VAR_2);
}
