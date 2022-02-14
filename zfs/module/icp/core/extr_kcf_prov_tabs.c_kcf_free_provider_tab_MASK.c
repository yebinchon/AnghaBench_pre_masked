
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint_t ;
typedef int kcf_provider_desc_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int **,int) ;

void
FUNC_2(uint_t VAR_0, kcf_provider_desc_t **VAR_1)
{
 kcf_provider_desc_t *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if ((VAR_2 = VAR_1[VAR_3]) != ((void*)0)) {
   FUNC_0(VAR_2);
  }
 }
 FUNC_1(VAR_1, VAR_0 * sizeof (kcf_provider_desc_t *));
}
