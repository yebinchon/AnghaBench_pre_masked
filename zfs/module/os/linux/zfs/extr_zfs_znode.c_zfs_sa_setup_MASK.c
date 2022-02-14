
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int sa_attr_type_t ;
typedef int objset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ,int ,int **) ;
 int FUNC_1 (int *,int ,int ,int,int,int *) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_2(objset_t *VAR_5, sa_attr_type_t **VAR_6)
{
 uint64_t VAR_7 = 0;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_5, VAR_1, VAR_2, 8, 1, &VAR_7);
 if (VAR_8 != 0 && VAR_8 != VAR_0)
  return (VAR_8);

 VAR_8 = FUNC_0(VAR_5, VAR_7, VAR_4, VAR_3, VAR_6);
 return (VAR_8);
}
