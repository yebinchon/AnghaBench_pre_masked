
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t spa_feature_t ;
typedef int boolean_t ;
struct TYPE_2__ {int fi_type; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;


 int FUNC_1 (char*,int) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static boolean_t
FUNC_2(spa_feature_t VAR_3, void *VAR_4)
{
 switch (VAR_2[VAR_3].fi_type) {
 case 129: {
  boolean_t VAR_5 = (boolean_t)VAR_4;
  FUNC_0(VAR_5 == VAR_0 || VAR_5 == VAR_1);
  return (VAR_5);
 }
 case 128:




  return (VAR_4 != ((void*)0));
 default:
  FUNC_1("Invalid zfeature type %d", VAR_2[VAR_3].fi_type);
  return (VAR_0);
 }
}
