
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_stat_t ;
typedef int uint64_t ;
typedef int sa_handle_t ;
typedef int sa_attr_type_t ;
typedef int objset_t ;
typedef int dmu_buf_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int **,int **,int ) ;
 int FUNC_1 (int *,int ,int *,int *,char*,int) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int **) ;

int
FUNC_5(objset_t *VAR_1, uint64_t VAR_2, zfs_stat_t *VAR_3,
    char *VAR_4, int VAR_5)
{
 char *VAR_6 = VAR_4 + VAR_5 - 1;
 sa_attr_type_t *VAR_7;
 sa_handle_t *VAR_8;
 dmu_buf_t *VAR_9;
 int VAR_10;

 *VAR_6 = '\0';

 VAR_10 = FUNC_4(VAR_1, &VAR_7);
 if (VAR_10 != 0)
  return (VAR_10);

 VAR_10 = FUNC_0(VAR_1, VAR_2, &VAR_8, &VAR_9, VAR_0);
 if (VAR_10 != 0)
  return (VAR_10);

 VAR_10 = FUNC_2(VAR_8, VAR_7, VAR_3);
 if (VAR_10 != 0) {
  FUNC_3(VAR_8, VAR_9, VAR_0);
  return (VAR_10);
 }

 VAR_10 = FUNC_1(VAR_1, VAR_2, VAR_8, VAR_7, VAR_4, VAR_5);

 FUNC_3(VAR_8, VAR_9, VAR_0);
 return (VAR_10);
}
