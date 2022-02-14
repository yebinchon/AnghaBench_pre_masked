
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int iostat_cbdata_t ;


 scalar_t__ FUNC_0 (int,char**,char*,int *) ;
 int FUNC_1 (int ,char*,char*,char*) ;
 char* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4(int VAR_1, char **VAR_2, char *VAR_3,
    iostat_cbdata_t *VAR_4)
{
 int VAR_5;
 char *VAR_6;
 char *VAR_7;
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_6 = VAR_2[VAR_5];

  if (FUNC_3(VAR_6))
   VAR_7 = FUNC_2("pool");
  else if (FUNC_0(1, &VAR_6, VAR_3, VAR_4))
   VAR_7 = FUNC_2("vdev in this pool");
  else if (FUNC_0(1, &VAR_6, ((void*)0), VAR_4))
   VAR_7 = FUNC_2("vdev in another pool");
  else
   VAR_7 = FUNC_2("unknown");

  FUNC_1(VAR_0, "\t%s (%s)\n", VAR_6, VAR_7);
 }
}
