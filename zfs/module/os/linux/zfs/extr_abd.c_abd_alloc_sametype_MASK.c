
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int boolean_t ;
struct TYPE_8__ {int abd_flags; } ;
typedef TYPE_1__ abd_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (size_t,int) ;
 TYPE_1__* FUNC_1 (size_t,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;

abd_t *
FUNC_4(abd_t *VAR_1, size_t VAR_2)
{
 boolean_t VAR_3 = (VAR_1->abd_flags & VAR_0) != 0;
 if (FUNC_2(VAR_1) &&
     !FUNC_3(VAR_1)) {
  return (FUNC_1(VAR_2, VAR_3));
 } else {
  return (FUNC_0(VAR_2, VAR_3));
 }
}
