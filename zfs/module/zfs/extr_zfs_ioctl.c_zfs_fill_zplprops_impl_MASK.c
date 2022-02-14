
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_6__ {TYPE_1__* os_phys; } ;
typedef TYPE_2__ objset_t ;
typedef int nvlist_t ;
typedef int boolean_t ;
struct TYPE_5__ {scalar_t__ os_type; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_3 (int *,int ,scalar_t__) ;
 int FUNC_4 (int *,int ,scalar_t__*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (TYPE_2__*,int ,scalar_t__*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(objset_t *VAR_14, uint64_t VAR_15,
    boolean_t VAR_16, boolean_t VAR_17, nvlist_t *VAR_18,
    nvlist_t *VAR_19, boolean_t *VAR_20)
{
 uint64_t VAR_21 = VAR_6;
 uint64_t VAR_22 = VAR_6;
 uint64_t VAR_23 = VAR_6;
 int VAR_24;

 FUNC_0(VAR_19 != ((void*)0));


 if (VAR_14 != ((void*)0) && VAR_14->os_phys->os_type != VAR_0)
  return (FUNC_1(VAR_3));




 if (VAR_18) {
  (void) FUNC_4(VAR_18,
      FUNC_7(VAR_8), &VAR_15);
  (void) FUNC_4(VAR_18,
      FUNC_7(VAR_5), &VAR_22);
  (void) FUNC_5(VAR_18,
      FUNC_7(VAR_5));
  (void) FUNC_4(VAR_18,
      FUNC_7(VAR_7), &VAR_23);
  (void) FUNC_5(VAR_18,
      FUNC_7(VAR_7));
  (void) FUNC_4(VAR_18,
      FUNC_7(VAR_4), &VAR_21);
  (void) FUNC_5(VAR_18,
      FUNC_7(VAR_4));
 }







 if ((VAR_15 < VAR_11 || VAR_15 > VAR_9) ||
     (VAR_15 >= VAR_10 && !VAR_16) ||
     (VAR_15 >= VAR_13 && !VAR_17) ||
     (VAR_15 < VAR_12 &&
     (VAR_22 != VAR_6 || VAR_23 != VAR_6 ||
     VAR_21 != VAR_6)))
  return (FUNC_1(VAR_1));




 FUNC_2(FUNC_3(VAR_19,
     FUNC_7(VAR_8), VAR_15) == 0);

 if (VAR_22 == VAR_6 &&
     (VAR_24 = FUNC_6(VAR_14, VAR_5, &VAR_22)) != 0)
  return (VAR_24);
 FUNC_2(FUNC_3(VAR_19,
     FUNC_7(VAR_5), VAR_22) == 0);




 if (VAR_22)
  VAR_23 = 1;
 if (VAR_23 == VAR_6 &&
     (VAR_24 = FUNC_6(VAR_14, VAR_7, &VAR_23)) != 0)
  return (VAR_24);
 FUNC_2(FUNC_3(VAR_19,
     FUNC_7(VAR_7), VAR_23) == 0);

 if (VAR_21 == VAR_6 &&
     (VAR_24 = FUNC_6(VAR_14, VAR_4, &VAR_21)) != 0)
  return (VAR_24);
 FUNC_2(FUNC_3(VAR_19,
     FUNC_7(VAR_4), VAR_21) == 0);

 if (VAR_20)
  *VAR_20 = (VAR_21 == VAR_2);

 return (0);
}
