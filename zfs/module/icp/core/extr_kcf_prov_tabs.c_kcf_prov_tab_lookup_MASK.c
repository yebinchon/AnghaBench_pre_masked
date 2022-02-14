
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int kcf_provider_desc_t ;
typedef size_t crypto_provider_id_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int ** VAR_0 ;
 int VAR_1 ;

kcf_provider_desc_t *
FUNC_3(crypto_provider_id_t VAR_2)
{
 kcf_provider_desc_t *VAR_3;

 FUNC_1(&VAR_1);

 VAR_3 = VAR_0[VAR_2];

 if (VAR_3 == ((void*)0)) {
  FUNC_2(&VAR_1);
  return (((void*)0));
 }

 FUNC_0(VAR_3);

 FUNC_2(&VAR_1);

 return (VAR_3);
}
