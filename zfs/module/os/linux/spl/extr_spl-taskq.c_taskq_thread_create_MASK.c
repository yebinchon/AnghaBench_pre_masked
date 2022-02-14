
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * tqt_thread; int tqt_id; TYPE_2__* tqt_tq; int tqt_active_list; int tqt_thread_list; } ;
typedef TYPE_1__ taskq_thread_t ;
struct TYPE_9__ {int tq_pri; int tq_name; } ;
typedef TYPE_2__ taskq_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 TYPE_1__* FUNC_2 (int,int ) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int ) ;
 int * FUNC_7 (int ,TYPE_1__*,char*,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (int *) ;

__attribute__((used)) static taskq_thread_t *
FUNC_9(taskq_t *VAR_5)
{
 static int VAR_6 = 0;
 taskq_thread_t *VAR_7;

 VAR_7 = FUNC_2(sizeof (*VAR_7), VAR_0);
 FUNC_0(&VAR_7->tqt_thread_list);
 FUNC_0(&VAR_7->tqt_active_list);
 VAR_7->tqt_tq = VAR_5;
 VAR_7->tqt_id = VAR_1;

 VAR_7->tqt_thread = FUNC_7(VAR_4, VAR_7,
     "%s", VAR_5->tq_name);
 if (VAR_7->tqt_thread == ((void*)0)) {
  FUNC_3(VAR_7, sizeof (taskq_thread_t));
  return (((void*)0));
 }

 if (VAR_2) {
  VAR_6 = (VAR_6 + 1) % FUNC_5();
  FUNC_4(VAR_7->tqt_thread, VAR_6);
 }

 if (VAR_3)
  FUNC_6(VAR_7->tqt_thread, FUNC_1(VAR_5->tq_pri));

 FUNC_8(VAR_7->tqt_thread);

 return (VAR_7);
}
