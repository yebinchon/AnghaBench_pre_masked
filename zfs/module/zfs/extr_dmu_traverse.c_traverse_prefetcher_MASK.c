
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zilog_t ;
struct TYPE_6__ {scalar_t__ zb_level; } ;
typedef TYPE_1__ zbookmark_phys_t ;
typedef int spa_t ;
struct TYPE_7__ {scalar_t__ pd_bytes_fetched; int pd_flags; int pd_mtx; int pd_cv; scalar_t__ pd_cancel; } ;
typedef TYPE_2__ prefetch_data_t ;
typedef int dnode_phys_t ;
typedef int blkptr_t ;
typedef int arc_flags_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int *,int *,int const*,int *,int *,int ,int,int*,TYPE_1__ const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_2__*,int const*) ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static int
FUNC_10(spa_t *VAR_11, zilog_t *VAR_12, const blkptr_t *VAR_13,
    const zbookmark_phys_t *VAR_14, const dnode_phys_t *VAR_15, void *VAR_16)
{
 prefetch_data_t *VAR_17 = VAR_16;
 int VAR_18 = VAR_6 | VAR_8;
 arc_flags_t VAR_19 = VAR_0 | VAR_1 |
     VAR_2;

 FUNC_0(VAR_17->pd_bytes_fetched >= 0);
 if (VAR_14->zb_level == VAR_5)
  return (0);
 if (VAR_17->pd_cancel)
  return (FUNC_3(VAR_3));

 if (!FUNC_9(VAR_17, VAR_13))
  return (0);

 FUNC_7(&VAR_17->pd_mtx);
 while (!VAR_17->pd_cancel && VAR_17->pd_bytes_fetched >= VAR_10)
  FUNC_6(&VAR_17->pd_cv, &VAR_17->pd_mtx);
 VAR_17->pd_bytes_fetched += FUNC_1(VAR_13);
 FUNC_5(&VAR_17->pd_cv);
 FUNC_8(&VAR_17->pd_mtx);

 if ((VAR_17->pd_flags & VAR_4) && FUNC_2(VAR_13))
  VAR_18 |= VAR_7;

 (void) FUNC_4(((void*)0), VAR_11, VAR_13, ((void*)0), ((void*)0), VAR_9,
     VAR_18, &VAR_19, VAR_14);

 return (0);
}
