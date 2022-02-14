
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
typedef int objset_t ;
struct TYPE_5__ {int * dn_dirty_link; } ;
typedef TYPE_1__ dnode_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,TYPE_1__**) ;
 int FUNC_3 (TYPE_1__*,int ,int *,int,int,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ VAR_6 ;

int
FUNC_7(objset_t *VAR_7, uint64_t VAR_8, boolean_t VAR_9, uint64_t *VAR_10)
{
 dnode_t *VAR_11;
 int VAR_12, VAR_13;
 boolean_t VAR_14 = VAR_1;

 VAR_13 = FUNC_2(VAR_7, VAR_8, VAR_4, &VAR_11);
 if (VAR_13)
  return (VAR_13);




 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
  if (FUNC_5(&VAR_11->dn_dirty_link[VAR_12])) {
   VAR_14 = VAR_0;
   break;
  }
 }





 if (!VAR_14 && VAR_6) {
  VAR_14 = VAR_1;
  FUNC_4(VAR_11, VAR_4);
  FUNC_6(FUNC_1(VAR_7), 0);
  VAR_13 = FUNC_2(VAR_7, VAR_8, VAR_4, &VAR_11);
  if (VAR_13)
   return (VAR_13);
 }

 if (VAR_14)
  VAR_13 = FUNC_3(VAR_11,
      (VAR_9 ? VAR_2 : 0), VAR_10, 1, 1, 0);
 else
  VAR_13 = FUNC_0(VAR_3);

 FUNC_4(VAR_11, VAR_4);

 return (VAR_13);
}
