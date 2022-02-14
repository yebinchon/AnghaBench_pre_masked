
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int objset_t ;
typedef int dnode_t ;
typedef int dmu_object_info_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ,int ,int **) ;
 int FUNC_2 (int *,int ) ;

int
FUNC_3(objset_t *VAR_1, uint64_t VAR_2, dmu_object_info_t *VAR_3)
{
 dnode_t *VAR_4;
 int VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_0, &VAR_4);

 if (VAR_5)
  return (VAR_5);

 if (VAR_3 != ((void*)0))
  FUNC_0(VAR_4, VAR_3);

 FUNC_2(VAR_4, VAR_0);
 return (0);
}
