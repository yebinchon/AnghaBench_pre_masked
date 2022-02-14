
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * vdev_ops; } ;
typedef TYPE_1__ vdev_t ;
typedef int uint64_t ;
typedef int spa_t ;
typedef int dva_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,int ,int) ;
 int FUNC_5 (TYPE_1__*,int ,size_t) ;
 int VAR_3 ;
 TYPE_1__* FUNC_6 (int *,int ) ;

__attribute__((used)) static boolean_t
FUNC_7(spa_t *VAR_4, const dva_t *VAR_5, size_t VAR_6,
    uint64_t VAR_7)
{
 vdev_t *VAR_8;

 VAR_8 = FUNC_6(VAR_4, FUNC_2(VAR_5));

 if (VAR_8->vdev_ops == &VAR_3) {







  return (VAR_1);
 }

 if (FUNC_0(VAR_5)) {
  return (VAR_1);
 }





 if (!FUNC_4(VAR_8, VAR_2, VAR_7, 1))
  return (VAR_0);







 if (!FUNC_5(VAR_8, FUNC_1(VAR_5), VAR_6))
  return (VAR_0);





 if (!FUNC_3(VAR_8))
  return (VAR_0);

 return (VAR_1);
}
