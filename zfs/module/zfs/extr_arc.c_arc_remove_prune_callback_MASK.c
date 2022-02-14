
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ boolean_t ;
struct TYPE_5__ {int p_refcnt; } ;
typedef TYPE_1__ arc_prune_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int *) ;

void
FUNC_9(arc_prune_t *VAR_5)
{
 boolean_t VAR_6 = VAR_0;
 FUNC_3(&VAR_3);
 FUNC_2(&VAR_2, VAR_5);
 if (FUNC_8(&VAR_5->p_refcnt, &VAR_2) > 0)
  VAR_6 = VAR_1;
 FUNC_4(&VAR_3);


 if (VAR_6)
  FUNC_5(VAR_4, 0);
 FUNC_0(FUNC_6(&VAR_5->p_refcnt));
 FUNC_7(&VAR_5->p_refcnt);
 FUNC_1(VAR_5, sizeof (*VAR_5));
}
