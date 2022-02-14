
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint64_t ;
struct TYPE_7__ {int spa_meta_objset; } ;
typedef TYPE_1__ spa_t ;
typedef int nvlist_t ;
typedef int dmu_tx_t ;
struct TYPE_8__ {scalar_t__ db_data; } ;
typedef TYPE_2__ dmu_buf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (size_t,int ) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,size_t) ;
 scalar_t__ FUNC_3 (int ,size_t,int ,TYPE_2__**) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (int ,size_t,int ,size_t,char*,int *) ;
 scalar_t__ FUNC_7 (int *,char**,size_t*,int ,int ) ;
 scalar_t__ FUNC_8 (int *,size_t*,int ) ;
 char* FUNC_9 (size_t,int ) ;
 int FUNC_10 (char*,size_t) ;

__attribute__((used)) static void
FUNC_11(spa_t *VAR_4, uint64_t VAR_5, nvlist_t *VAR_6, dmu_tx_t *VAR_7)
{
 char *VAR_8 = ((void*)0);
 size_t VAR_9;
 size_t VAR_10 = 0;
 dmu_buf_t *VAR_11;

 FUNC_1(FUNC_8(VAR_6, &VAR_10, VAR_2) == 0);






 VAR_9 = FUNC_0((uint64_t)VAR_10, VAR_3);
 VAR_8 = FUNC_9(VAR_9, VAR_1);

 FUNC_1(FUNC_7(VAR_6, &VAR_8, &VAR_10, VAR_2,
     VAR_1) == 0);
 FUNC_2(VAR_8 + VAR_10, VAR_9 - VAR_10);

 FUNC_6(VAR_4->spa_meta_objset, VAR_5, 0, VAR_9, VAR_8, VAR_7);

 FUNC_10(VAR_8, VAR_9);

 FUNC_1(0 == FUNC_3(VAR_4->spa_meta_objset, VAR_5, VAR_0, &VAR_11));
 FUNC_5(VAR_11, VAR_7);
 *(uint64_t *)VAR_11->db_data = VAR_10;
 FUNC_4(VAR_11, VAR_0);
}
