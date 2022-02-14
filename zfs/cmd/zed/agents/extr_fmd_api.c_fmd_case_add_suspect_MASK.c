
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int nvlist_t ;
typedef int int64_t ;
typedef int fmd_hdl_t ;
struct TYPE_5__ {int tv_usec; int tv_sec; } ;
struct TYPE_4__ {char const* ci_uuid; TYPE_2__ ci_tv; } ;
typedef TYPE_1__ fmd_case_t ;


 int VAR_0 ;
 int VAR_1 ;
 char const* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 char* FUNC_0 (int *) ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (int *,int ,int *,int) ;
 int FUNC_4 (int *,int ,int **,int) ;
 int FUNC_5 (int *,int ,char const*) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *,char const*,char const*) ;
 int FUNC_11 (char const*,int *,int *) ;

void
FUNC_12(fmd_hdl_t *VAR_10, fmd_case_t *VAR_11, nvlist_t *VAR_12)
{
 nvlist_t *VAR_13;
 const char *VAR_14 = FUNC_0(VAR_12);
 int64_t VAR_15[2];
 int VAR_16 = 0;





 (void) FUNC_2(&VAR_11->ci_tv, ((void*)0));
 VAR_15[0] = VAR_11->ci_tv.tv_sec;
 VAR_15[1] = VAR_11->ci_tv.tv_usec;

 VAR_13 = FUNC_1(VAR_10, VAR_0);

 VAR_16 |= FUNC_7(VAR_13, VAR_9, VAR_8);
 VAR_16 |= FUNC_5(VAR_13, VAR_1, VAR_2);
 VAR_16 |= FUNC_5(VAR_13, VAR_7, VAR_11->ci_uuid);
 VAR_16 |= FUNC_5(VAR_13, VAR_3, VAR_14);
 VAR_16 |= FUNC_3(VAR_13, VAR_4, VAR_15, 2);
 VAR_16 |= FUNC_6(VAR_13, VAR_6, 1);
 VAR_16 |= FUNC_4(VAR_13, VAR_5, &VAR_12, 1);

 if (VAR_16)
  FUNC_9("failed to populate nvlist");

 FUNC_10(VAR_12, VAR_11->ci_uuid, VAR_14);
 FUNC_11(VAR_2, ((void*)0), VAR_13);

 FUNC_8(VAR_13);
 FUNC_8(VAR_12);
}
