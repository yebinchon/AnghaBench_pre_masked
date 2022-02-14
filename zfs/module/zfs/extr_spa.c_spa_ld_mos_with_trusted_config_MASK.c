
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int spa_t ;
typedef int spa_import_type_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static int
FUNC_4(spa_t *VAR_3, spa_import_type_t VAR_4,
    boolean_t *VAR_5)
{
 int VAR_6;






 VAR_6 = FUNC_0(VAR_3, VAR_4);
 if (VAR_6 != 0)
  return (VAR_6);





 VAR_6 = FUNC_2(VAR_3, VAR_4, VAR_0);
 if (VAR_6 == VAR_2) {
  if (VAR_5 != ((void*)0))
   *VAR_5 = VAR_1;





  FUNC_1(VAR_3);
  FUNC_3(VAR_3, "RELOADING");
  VAR_6 = FUNC_0(VAR_3, VAR_4);
  if (VAR_6 != 0)
   return (VAR_6);

  VAR_6 = FUNC_2(VAR_3, VAR_4, VAR_1);
  if (VAR_6 != 0)
   return (VAR_6);

 } else if (VAR_6 != 0) {
  return (VAR_6);
 }

 return (0);
}
