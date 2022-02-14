
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint64_t ;
struct TYPE_6__ {int spa_meta_objset; } ;
typedef TYPE_1__ spa_t ;
typedef int nvlist_t ;
struct TYPE_7__ {scalar_t__ db_data; } ;
typedef TYPE_2__ dmu_buf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,size_t,int ,TYPE_2__**) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int ,size_t,int ,size_t,char*,int ) ;
 int FUNC_3 (char*,size_t,int **,int ) ;
 char* FUNC_4 (size_t,int ) ;
 int FUNC_5 (char*,size_t) ;

__attribute__((used)) static int
FUNC_6(spa_t *VAR_3, uint64_t VAR_4, nvlist_t **VAR_5)
{
 dmu_buf_t *VAR_6;
 char *VAR_7 = ((void*)0);
 size_t VAR_8 = 0;
 int VAR_9;
 *VAR_5 = ((void*)0);

 VAR_9 = FUNC_0(VAR_3->spa_meta_objset, VAR_4, VAR_1, &VAR_6);
 if (VAR_9)
  return (VAR_9);

 VAR_8 = *(uint64_t *)VAR_6->db_data;
 FUNC_1(VAR_6, VAR_1);

 VAR_7 = FUNC_4(VAR_8, VAR_2);
 VAR_9 = FUNC_2(VAR_3->spa_meta_objset, VAR_4, 0, VAR_8, VAR_7,
     VAR_0);
 if (VAR_9 == 0)
  VAR_9 = FUNC_3(VAR_7, VAR_8, VAR_5, 0);
 FUNC_5(VAR_7, VAR_8);

 return (VAR_9);
}
