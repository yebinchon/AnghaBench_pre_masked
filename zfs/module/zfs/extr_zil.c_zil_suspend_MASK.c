
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int zl_suspend; int zl_lock; int zl_cv_suspend; scalar_t__ zl_suspending; int zl_dmu_pool; TYPE_2__* zl_header; } ;
typedef TYPE_1__ zilog_t ;
struct TYPE_14__ {int zh_flags; int zh_log; } ;
typedef TYPE_2__ zil_header_t ;
struct TYPE_15__ {scalar_t__ os_encrypted; } ;
typedef TYPE_3__ objset_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (char const*,int ,TYPE_3__**) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,int ) ;
 TYPE_1__* FUNC_9 (TYPE_3__*) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int VAR_5 ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (TYPE_1__*,int ) ;
 int FUNC_20 (TYPE_1__*,scalar_t__) ;
 int FUNC_21 (TYPE_3__*) ;

int
FUNC_22(const char *VAR_6, void **VAR_7)
{
 objset_t *VAR_8;
 zilog_t *VAR_9;
 const zil_header_t *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_6(VAR_6, VAR_5, &VAR_8);
 if (VAR_11 != 0)
  return (VAR_11);
 VAR_9 = FUNC_9(VAR_8);

 FUNC_16(&VAR_9->zl_lock);
 VAR_10 = VAR_9->zl_header;

 if (VAR_10->zh_flags & VAR_4) {
  FUNC_17(&VAR_9->zl_lock);
  FUNC_8(VAR_8, VAR_5);
  return (FUNC_2(VAR_3));
 }







 if (VAR_7 == ((void*)0) && !VAR_9->zl_suspending &&
     (VAR_9->zl_suspend > 0 || FUNC_1(&VAR_10->zh_log))) {
  FUNC_17(&VAR_9->zl_lock);
  FUNC_8(VAR_8, VAR_5);
  return (0);
 }

 FUNC_11(FUNC_5(VAR_8), VAR_5);
 FUNC_15(FUNC_7(VAR_8), VAR_5);

 VAR_9->zl_suspend++;

 if (VAR_9->zl_suspend > 1) {





  while (VAR_9->zl_suspending)
   FUNC_4(&VAR_9->zl_cv_suspend, &VAR_9->zl_lock);
  FUNC_17(&VAR_9->zl_lock);

  if (VAR_7 == ((void*)0))
   FUNC_21(VAR_8);
  else
   *VAR_7 = VAR_8;
  return (0);
 }






 if (FUNC_1(&VAR_10->zh_log)) {
  FUNC_0(VAR_7 != ((void*)0));

  *VAR_7 = VAR_8;
  FUNC_17(&VAR_9->zl_lock);
  return (0);
 }







 if (VAR_8->os_encrypted &&
     FUNC_10(FUNC_5(VAR_8)) != 0) {
  VAR_9->zl_suspend--;
  FUNC_17(&VAR_9->zl_lock);
  FUNC_12(FUNC_5(VAR_8), VAR_5);
  FUNC_13(FUNC_5(VAR_8), VAR_5);
  return (FUNC_2(VAR_2));
 }

 VAR_9->zl_suspending = VAR_1;
 FUNC_17(&VAR_9->zl_lock);
 FUNC_19(VAR_9, 0);






 FUNC_18(VAR_9->zl_dmu_pool, 0);

 FUNC_20(VAR_9, VAR_0);

 FUNC_16(&VAR_9->zl_lock);
 VAR_9->zl_suspending = VAR_0;
 FUNC_3(&VAR_9->zl_cv_suspend);
 FUNC_17(&VAR_9->zl_lock);

 if (VAR_8->os_encrypted)
  FUNC_14(FUNC_5(VAR_8));

 if (VAR_7 == ((void*)0))
  FUNC_21(VAR_8);
 else
  *VAR_7 = VAR_8;
 return (0);
}
