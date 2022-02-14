
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int kcf_provider_desc_t ;
typedef size_t crypto_provider_id_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int ** VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

int
FUNC_5(crypto_provider_id_t VAR_6)
{
 kcf_provider_desc_t *VAR_7;

 FUNC_0(VAR_3 != ((void*)0));
 FUNC_0(VAR_5 >= 0);






 FUNC_3(&VAR_4);
 if (VAR_6 >= VAR_2 ||
     ((VAR_7 = VAR_3[VAR_6]) == ((void*)0))) {
  FUNC_4(&VAR_4);
  return (VAR_0);
 }
 FUNC_4(&VAR_4);
 FUNC_2(VAR_7);
 FUNC_1(VAR_7);

 return (VAR_1);
}
