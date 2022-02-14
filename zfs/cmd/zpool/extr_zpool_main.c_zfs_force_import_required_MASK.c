
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;
typedef scalar_t__ mmp_state_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,scalar_t__*) ;

__attribute__((used)) static boolean_t
FUNC_5(nvlist_t *VAR_8)
{
 uint64_t VAR_9;
 uint64_t VAR_10 = 0;
 nvlist_t *VAR_11;

 VAR_9 = FUNC_1(VAR_8, VAR_7);
 (void) FUNC_4(VAR_8, VAR_4, &VAR_10);

 if (VAR_9 != VAR_3 && VAR_10 != FUNC_2())
  return (VAR_1);

 VAR_11 = FUNC_0(VAR_8, VAR_5);
 if (FUNC_3(VAR_11, VAR_6)) {
  mmp_state_t VAR_12 = FUNC_1(VAR_11,
      VAR_6);

  if (VAR_12 != VAR_2)
   return (VAR_1);
 }

 return (VAR_0);
}
