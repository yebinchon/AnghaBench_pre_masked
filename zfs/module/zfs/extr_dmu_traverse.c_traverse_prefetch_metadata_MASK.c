
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int zbookmark_phys_t ;
struct TYPE_11__ {int td_flags; scalar_t__ td_min_txg; int td_spa; int * td_resume; } ;
typedef TYPE_1__ traverse_data_t ;
struct TYPE_12__ {scalar_t__ blk_birth; } ;
typedef TYPE_2__ blkptr_t ;
typedef int arc_flags_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_2__ const*) ;
 scalar_t__ FUNC_2 (TYPE_2__ const*) ;
 scalar_t__ FUNC_3 (TYPE_2__ const*) ;
 scalar_t__ FUNC_4 (TYPE_2__ const*) ;
 int FUNC_5 (TYPE_2__ const*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int *,int ,TYPE_2__ const*,int *,int *,int ,int,int*,int const*) ;

__attribute__((used)) static void
FUNC_8(traverse_data_t *VAR_9,
    const blkptr_t *VAR_10, const zbookmark_phys_t *VAR_11)
{
 arc_flags_t VAR_12 = VAR_0 | VAR_1;
 int VAR_13 = VAR_5 | VAR_7;

 if (!(VAR_9->td_flags & VAR_4))
  return;





 if (VAR_9->td_resume != ((void*)0) && !FUNC_6(VAR_9->td_resume))
  return;
 if (FUNC_3(VAR_10) || VAR_10->blk_birth <= VAR_9->td_min_txg)
  return;
 if (FUNC_1(VAR_10) == 0 && FUNC_2(VAR_10) != VAR_2)
  return;
 FUNC_0(!FUNC_5(VAR_10));

 if ((VAR_9->td_flags & VAR_3) && FUNC_4(VAR_10))
  VAR_13 |= VAR_6;

 (void) FUNC_7(((void*)0), VAR_9->td_spa, VAR_10, ((void*)0), ((void*)0),
     VAR_8, VAR_13, &VAR_12, VAR_11);
}
