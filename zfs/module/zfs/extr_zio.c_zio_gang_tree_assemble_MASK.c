
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int io_bookmark; int io_priority; int io_spa; struct TYPE_10__* io_gang_leader; } ;
typedef TYPE_1__ zio_t ;
struct TYPE_11__ {int gn_gbh; } ;
typedef TYPE_2__ zio_gang_node_t ;
typedef int blkptr_t ;
typedef int abd_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int * FUNC_3 (int ,int ) ;
 TYPE_2__* FUNC_4 (TYPE_2__**) ;
 int VAR_1 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,int ,int *,int *,int ,int ,TYPE_2__*,int ,int ,int *) ;

__attribute__((used)) static void
FUNC_7(zio_t *VAR_2, blkptr_t *VAR_3, zio_gang_node_t **VAR_4)
{
 zio_gang_node_t *VAR_5 = FUNC_4(VAR_4);
 abd_t *VAR_6 = FUNC_3(VAR_5->gn_gbh, VAR_0);

 FUNC_0(VAR_2->io_gang_leader == VAR_2);
 FUNC_0(FUNC_1(VAR_3));

 FUNC_5(FUNC_6(VAR_2, VAR_2->io_spa, VAR_3, VAR_6, VAR_0,
     VAR_1, VAR_5, VAR_2->io_priority,
     FUNC_2(VAR_2), &VAR_2->io_bookmark));
}
