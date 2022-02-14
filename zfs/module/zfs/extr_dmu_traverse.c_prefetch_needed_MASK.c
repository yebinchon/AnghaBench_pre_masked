
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pd_flags; } ;
typedef TYPE_1__ prefetch_data_t ;
typedef int boolean_t ;
typedef int blkptr_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int const*) ;
 scalar_t__ FUNC_4 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static boolean_t
FUNC_5(prefetch_data_t *VAR_4, const blkptr_t *VAR_5)
{
 FUNC_0(VAR_4->pd_flags & VAR_3);
 if (FUNC_3(VAR_5) || FUNC_2(VAR_5) ||
     FUNC_1(VAR_5) == VAR_2 || FUNC_4(VAR_5))
  return (VAR_0);
 return (VAR_1);
}
