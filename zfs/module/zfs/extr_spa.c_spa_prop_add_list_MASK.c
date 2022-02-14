
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zprop_source_t ;
typedef int zpool_prop_t ;
typedef int uint64_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *,char const*,int *) ;
 scalar_t__ FUNC_2 (int *,int ,char*) ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 scalar_t__ FUNC_4 (int **,int ,int ) ;
 int FUNC_5 (int *) ;
 char* FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(nvlist_t *VAR_4, zpool_prop_t VAR_5, char *VAR_6,
    uint64_t VAR_7, zprop_source_t VAR_8)
{
 const char *VAR_9 = FUNC_6(VAR_5);
 nvlist_t *VAR_10;

 FUNC_0(FUNC_4(&VAR_10, VAR_1, VAR_0) == 0);
 FUNC_0(FUNC_3(VAR_10, VAR_2, VAR_8) == 0);

 if (VAR_6 != ((void*)0))
  FUNC_0(FUNC_2(VAR_10, VAR_3, VAR_6) == 0);
 else
  FUNC_0(FUNC_3(VAR_10, VAR_3, VAR_7) == 0);

 FUNC_0(FUNC_1(VAR_4, VAR_9, VAR_10) == 0);
 FUNC_5(VAR_10);
}
