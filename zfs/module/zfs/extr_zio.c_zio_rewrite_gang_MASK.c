
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int io_bookmark; int io_priority; int io_txg; int io_spa; int io_pipeline; TYPE_1__* io_gang_leader; } ;
typedef TYPE_2__ zio_t ;
struct TYPE_13__ {int gn_gbh; } ;
typedef TYPE_3__ zio_gang_node_t ;
typedef int uint64_t ;
typedef int blkptr_t ;
typedef int abd_t ;
struct TYPE_11__ {int io_flags; TYPE_3__* io_gang_tree; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_2 ;
 int * FUNC_3 (int ,int ) ;
 int * FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*,int ,int *,int ) ;
 int VAR_3 ;
 TYPE_2__* FUNC_7 (TYPE_2__*,int ,int ,int *,int *,int ,int ,int *,int ,int ,int *) ;

__attribute__((used)) static zio_t *
FUNC_8(zio_t *VAR_4, blkptr_t *VAR_5, zio_gang_node_t *VAR_6, abd_t *VAR_7,
    uint64_t VAR_8)
{
 zio_t *VAR_9;

 if (VAR_6 != ((void*)0)) {
  abd_t *VAR_10 =
      FUNC_3(VAR_6->gn_gbh, VAR_0);
  VAR_9 = FUNC_7(VAR_4, VAR_4->io_spa, VAR_4->io_txg, VAR_5,
      VAR_10, VAR_0, VAR_3, ((void*)0),
      VAR_4->io_priority, FUNC_2(VAR_4),
      &VAR_4->io_bookmark);
  if (VAR_6 != VAR_4->io_gang_leader->io_gang_tree) {
   abd_t *VAR_11 = FUNC_4(VAR_7, VAR_8);

   FUNC_6(VAR_9, FUNC_0(VAR_5),
       VAR_11, FUNC_1(VAR_5));

   FUNC_5(VAR_11);
  }




  if (VAR_4->io_gang_leader->io_flags & VAR_1)
   VAR_9->io_pipeline &= ~VAR_2;
 } else {
  VAR_9 = FUNC_7(VAR_4, VAR_4->io_spa, VAR_4->io_txg, VAR_5,
      FUNC_4(VAR_7, VAR_8), FUNC_1(VAR_5),
      VAR_3, ((void*)0), VAR_4->io_priority,
      FUNC_2(VAR_4), &VAR_4->io_bookmark);
 }

 return (VAR_9);
}
