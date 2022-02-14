
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zpool_handle_t ;
typedef int uint64_t ;
typedef int nvlist_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int *,char const*,int *,int *,int *) ;

__attribute__((used)) static uint64_t
FUNC_3(zpool_handle_t *VAR_2, const char *VAR_3,
    boolean_t *VAR_4, boolean_t *VAR_5, boolean_t *VAR_6)
{
 uint64_t VAR_7;
 boolean_t VAR_8 = VAR_0, VAR_9 = VAR_0, VAR_10 = VAR_0;
 nvlist_t *VAR_11;

 if ((VAR_11 = FUNC_2(VAR_2, VAR_3, &VAR_8, &VAR_9,
     &VAR_10)) == ((void*)0))
  return (0);

 FUNC_1(FUNC_0(VAR_11, VAR_1, &VAR_7) == 0);
 if (VAR_4 != ((void*)0))
  *VAR_4 = VAR_8;
 if (VAR_5 != ((void*)0))
  *VAR_5 = VAR_9;
 if (VAR_6 != ((void*)0))
  *VAR_6 = VAR_10;

 return (VAR_7);
}
