
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfsvfs_t ;
typedef int objset_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (char const*,int ,int,int ,int *,int **) ;
 int FUNC_2 (int *,int) ;
 int * FUNC_3 (int,int ) ;
 int * FUNC_4 (char const*,char) ;
 int FUNC_5 (int **,int *,int *) ;

int
FUNC_6(const char *VAR_3, boolean_t VAR_4, zfsvfs_t **VAR_5)
{
 objset_t *VAR_6;
 zfsvfs_t *VAR_7;
 int VAR_8;
 boolean_t VAR_9 = (VAR_4 || (FUNC_4(VAR_3, '@') != ((void*)0)));

 VAR_7 = FUNC_3(sizeof (zfsvfs_t), VAR_2);

 VAR_8 = FUNC_1(VAR_3, VAR_1, VAR_9, VAR_0, VAR_7, &VAR_6);
 if (VAR_8 != 0) {
  FUNC_2(VAR_7, sizeof (zfsvfs_t));
  return (VAR_8);
 }

 VAR_8 = FUNC_5(VAR_5, VAR_7, VAR_6);
 if (VAR_8 != 0) {
  FUNC_0(VAR_6, VAR_0, VAR_7);
 }
 return (VAR_8);
}
