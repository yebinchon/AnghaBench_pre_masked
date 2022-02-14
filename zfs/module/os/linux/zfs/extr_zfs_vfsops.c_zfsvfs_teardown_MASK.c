
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {void* z_suspended; scalar_t__ z_sa_hdl; } ;
typedef TYPE_2__ znode_t ;
struct TYPE_15__ {scalar_t__ z_nr_znodes; int * z_os; int z_teardown_lock; int z_teardown_inactive_lock; void* z_unmounted; int z_znodes_lock; int z_all_znodes; int * z_log; TYPE_1__* z_parent; } ;
typedef TYPE_3__ zfsvfs_t ;
typedef int objset_t ;
typedef void* boolean_t ;
struct TYPE_13__ {int z_sb; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (int ) ;
 TYPE_2__* FUNC_7 (int *) ;
 TYPE_2__* FUNC_8 (int *,TYPE_2__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ,int ) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (TYPE_3__*) ;
 int FUNC_19 (TYPE_3__*) ;
 int FUNC_20 (TYPE_3__*) ;
 int FUNC_21 (TYPE_2__*) ;
 int FUNC_22 (int *) ;

__attribute__((used)) static int
FUNC_23(zfsvfs_t *VAR_6, boolean_t VAR_7)
{
 znode_t *VAR_8;

 FUNC_19(VAR_6);






 if (VAR_6->z_os) {
  int VAR_9 = 0;
  while (VAR_6->z_nr_znodes > 0) {
   FUNC_16(FUNC_5(
       FUNC_4(VAR_6->z_os)), 0);
   if (++VAR_9 > 1 && !VAR_7)
    break;
  }
 }

 FUNC_11(&VAR_6->z_teardown_lock, VAR_4, VAR_3);

 if (!VAR_7) {







  FUNC_15(VAR_6->z_parent->z_sb);
 }





 if (VAR_6->z_log) {
  FUNC_22(VAR_6->z_log);
  VAR_6->z_log = ((void*)0);
 }

 FUNC_13(&VAR_6->z_teardown_inactive_lock, VAR_4);






 if (!VAR_7 && (VAR_6->z_unmounted || VAR_6->z_os == ((void*)0))) {
  FUNC_14(&VAR_6->z_teardown_inactive_lock);
  FUNC_12(&VAR_6->z_teardown_lock, VAR_3);
  return (FUNC_0(VAR_2));
 }
 if (!VAR_7) {
  FUNC_9(&VAR_6->z_znodes_lock);
  for (VAR_8 = FUNC_7(&VAR_6->z_all_znodes); VAR_8 != ((void*)0);
      VAR_8 = FUNC_8(&VAR_6->z_all_znodes, VAR_8)) {
   if (VAR_8->z_sa_hdl)
    FUNC_21(VAR_8);
   if (FUNC_6(FUNC_1(VAR_8)) != ((void*)0))
    VAR_8->z_suspended = VAR_1;

  }
  FUNC_10(&VAR_6->z_znodes_lock);
 }






 if (VAR_7) {
  VAR_6->z_unmounted = VAR_1;
  FUNC_14(&VAR_6->z_teardown_inactive_lock);
  FUNC_12(&VAR_6->z_teardown_lock, VAR_3);
 }







 if (VAR_6->z_os == ((void*)0))
  return (0);




 FUNC_20(VAR_6);





 objset_t *VAR_10 = VAR_6->z_os;
 boolean_t VAR_11 = VAR_0;
 for (int VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
  if (FUNC_3(VAR_10, VAR_12)) {
   VAR_11 = VAR_1;
   break;
  }
 }
 if (!FUNC_18(VAR_6) && VAR_11) {
  FUNC_17(FUNC_4(VAR_6->z_os), 0);
 }
 FUNC_2(VAR_6->z_os);

 return (0);
}
