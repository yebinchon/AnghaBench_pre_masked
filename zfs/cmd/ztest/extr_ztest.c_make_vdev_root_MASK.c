
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int nvlist_t ;
typedef int boolean_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 char const* VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 char* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_2 (char*,char*,char*,size_t,int ,int,int) ;
 scalar_t__ FUNC_3 (int *,char*,int **,int) ;
 scalar_t__ FUNC_4 (int *,int ,char const*) ;
 scalar_t__ FUNC_5 (int *,int ,int) ;
 scalar_t__ FUNC_6 (int **,int ,int ) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (char const*,char*) ;
 int ** FUNC_9 (int,int ) ;
 int FUNC_10 (int **,int) ;

__attribute__((used)) static nvlist_t *
FUNC_11(char *VAR_7, char *VAR_8, char *VAR_9, size_t VAR_10, uint64_t VAR_11,
    const char *VAR_12, int VAR_13, int VAR_14, int VAR_15)
{
 nvlist_t *VAR_16, **VAR_17;
 int VAR_18;
 boolean_t VAR_19;

 FUNC_0(VAR_15 > 0);

 VAR_19 = (VAR_12 != ((void*)0) && FUNC_8(VAR_12, "log") == 0);

 VAR_17 = FUNC_9(VAR_15 * sizeof (nvlist_t *), VAR_1);

 for (VAR_18 = 0; VAR_18 < VAR_15; VAR_18++) {
  VAR_17[VAR_18] = FUNC_2(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11,
      VAR_13, VAR_14);
  FUNC_1(FUNC_5(VAR_17[VAR_18], VAR_5,
      VAR_19) == 0);

  if (VAR_12 != ((void*)0) && VAR_12[0] != '\0') {
   FUNC_0(VAR_14 > 1 || VAR_19);
   FUNC_1(FUNC_4(VAR_17[VAR_18],
       VAR_3, VAR_12) == 0);
  }
 }

 FUNC_1(FUNC_6(&VAR_16, VAR_0, 0) == 0);
 FUNC_1(FUNC_4(VAR_16, VAR_6, VAR_2) == 0);
 FUNC_1(FUNC_3(VAR_16, VAR_8 ? VAR_8 : VAR_4,
     VAR_17, VAR_15) == 0);

 for (VAR_18 = 0; VAR_18 < VAR_15; VAR_18++)
  FUNC_7(VAR_17[VAR_18]);

 FUNC_10(VAR_17, VAR_15 * sizeof (nvlist_t *));

 return (VAR_16);
}
