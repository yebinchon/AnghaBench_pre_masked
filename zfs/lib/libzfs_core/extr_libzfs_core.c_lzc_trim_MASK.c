
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ pool_trim_func_t ;
typedef int nvlist_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char const*,int *,int **) ;

int
FUNC_6(const char *VAR_5, pool_trim_func_t VAR_6, uint64_t VAR_7,
    boolean_t VAR_8, nvlist_t *VAR_9, nvlist_t **VAR_10)
{
 int VAR_11;

 nvlist_t *VAR_12 = FUNC_3();
 FUNC_2(VAR_12, VAR_1, (uint64_t)VAR_6);
 FUNC_1(VAR_12, VAR_4, VAR_9);
 FUNC_2(VAR_12, VAR_2, VAR_7);
 FUNC_0(VAR_12, VAR_3, VAR_8);

 VAR_11 = FUNC_5(VAR_0, VAR_5, VAR_12, VAR_10);

 FUNC_4(VAR_12);

 return (VAR_11);
}
