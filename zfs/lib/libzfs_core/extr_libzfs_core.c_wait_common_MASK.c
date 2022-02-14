
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zpool_wait_activity_t ;
typedef int uint64_t ;
typedef int nvlist_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,char const*,int *,int **) ;

__attribute__((used)) static int
FUNC_6(const char *VAR_4, zpool_wait_activity_t VAR_5, boolean_t VAR_6,
    uint64_t VAR_7, boolean_t *VAR_8)
{
 nvlist_t *VAR_9 = FUNC_2();
 nvlist_t *VAR_10 = ((void*)0);

 FUNC_0(VAR_9, VAR_1, VAR_5);
 if (VAR_6)
  FUNC_1(VAR_9, VAR_2, VAR_7);

 int VAR_11 = FUNC_5(VAR_0, VAR_4, VAR_9, &VAR_10);

 if (VAR_11 == 0 && VAR_8 != ((void*)0))
  *VAR_8 = FUNC_4(VAR_10,
      VAR_3);

 FUNC_3(VAR_9);
 FUNC_3(VAR_10);

 return (VAR_11);
}
