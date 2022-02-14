
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zpool_handle_t ;
typedef int nvlist_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned int,int) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,int ,int,int) ;
 scalar_t__ FUNC_2 (int *,int ,int **) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int * FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(zpool_handle_t *VAR_2, int VAR_3, int VAR_4, boolean_t VAR_5)
{
 nvlist_t *VAR_6, *VAR_7;
 int VAR_8 = VAR_3;

 if ((VAR_6 = FUNC_5(VAR_2, ((void*)0))) != ((void*)0)) {
  FUNC_4(FUNC_2(VAR_6, VAR_1,
      &VAR_7) == 0);
  unsigned int VAR_9 = FUNC_3(FUNC_6(VAR_2));
  if (VAR_5 == VAR_0) {
   VAR_8 = FUNC_0(VAR_9, VAR_3);
  } else {
   VAR_8 = FUNC_0(VAR_9,
       FUNC_1(VAR_2, VAR_7, 0, VAR_3, VAR_4));
  }
 }

 return (VAR_8);
}
