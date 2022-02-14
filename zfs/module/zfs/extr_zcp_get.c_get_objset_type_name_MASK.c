
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_type_t ;
typedef int dsl_dataset_t ;


 int VAR_0 ;



 int FUNC_0 (int *,int*) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static int
FUNC_2(dsl_dataset_t *VAR_1, char *VAR_2)
{
 int VAR_3;
 zfs_type_t VAR_4;
 VAR_3 = FUNC_0(VAR_1, &VAR_4);
 if (VAR_3 != 0)
  return (VAR_3);
 switch (VAR_4) {
 case 129:
  (void) FUNC_1(VAR_2, "snapshot");
  break;
 case 130:
  (void) FUNC_1(VAR_2, "filesystem");
  break;
 case 128:
  (void) FUNC_1(VAR_2, "volume");
  break;
 default:
  return (VAR_0);
 }
 return (0);
}
