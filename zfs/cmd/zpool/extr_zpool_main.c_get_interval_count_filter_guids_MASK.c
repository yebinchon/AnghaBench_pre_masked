
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int iostat_cbdata_t ;


 int FUNC_0 (int,char**,int *,int *) ;
 int FUNC_1 (int*,char**,float*,unsigned long*) ;

__attribute__((used)) static void
FUNC_2(int *VAR_0, char **VAR_1, float *VAR_2,
    unsigned long *VAR_3, iostat_cbdata_t *VAR_4)
{
 char **VAR_5 = VAR_1;
 int VAR_6 = 0;


 if (*VAR_0 >= 1 && !FUNC_0(1, &VAR_1[*VAR_0 - 1], ((void*)0), VAR_4)) {




  VAR_6++;

  if (*VAR_0 >= 2 &&
      !FUNC_0(1, &VAR_1[*VAR_0 - 2], ((void*)0), VAR_4)) {




   VAR_6++;
  }
 }


 VAR_5 = &VAR_1[*VAR_0 - VAR_6];

 *VAR_0 = *VAR_0 - VAR_6;
 FUNC_1(&VAR_6, VAR_5,
     VAR_2, VAR_3);
}
