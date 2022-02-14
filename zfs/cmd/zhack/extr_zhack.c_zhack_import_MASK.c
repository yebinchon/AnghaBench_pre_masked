
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int nvlist_t ;
typedef void* boolean_t ;
struct TYPE_3__ {void* can_be_active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ,char*,char*,...) ;
 TYPE_1__ VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 int FUNC_3 (int) ;
 int VAR_14 ;
 scalar_t__ FUNC_4 (int *,int ,int) ;
 scalar_t__ FUNC_5 (int **,int ,int ) ;
 int FUNC_6 (char*,int *,int *,int ) ;
 int VAR_15 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int) ;
 int VAR_16 ;
 int FUNC_9 (int *,char*,int **,TYPE_1__*,int *) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void
FUNC_11(char *VAR_17, boolean_t VAR_18)
{
 nvlist_t *VAR_19;
 nvlist_t *VAR_20;
 int VAR_21;

 FUNC_3(VAR_18 ? VAR_4 : (VAR_4 | VAR_6));

 FUNC_1(VAR_2, VAR_15);

 VAR_13 = VAR_18;
 VAR_11.can_be_active = VAR_18;
 VAR_12 = FUNC_7(VAR_17);

 VAR_21 = FUNC_9(((void*)0), VAR_17, &VAR_19, &VAR_11,
     &VAR_14);
 if (VAR_21)
  FUNC_2(((void*)0), VAR_5, "cannot import '%s'", VAR_17);

 VAR_20 = ((void*)0);
 if (VAR_18) {
  FUNC_0(FUNC_5(&VAR_20, VAR_7, 0) == 0);
  FUNC_0(FUNC_4(VAR_20,
      FUNC_10(VAR_10), 1) == 0);
 }

 VAR_16 = VAR_1;
 VAR_21 = FUNC_6(VAR_17, VAR_19, VAR_20,
     (VAR_18 ? VAR_9 : VAR_8));
 VAR_16 = VAR_0;
 if (VAR_21 == VAR_3)
  VAR_21 = 0;

 if (VAR_21)
  FUNC_2(((void*)0), VAR_5, "can't import '%s': %s", VAR_17,
      FUNC_8(VAR_21));
}
