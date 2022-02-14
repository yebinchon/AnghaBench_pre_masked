
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zbookmark_phys_t ;
struct TYPE_5__ {TYPE_1__* td_pfd; int td_rootbp; int td_objset; int * td_resume; TYPE_1__* td_arg; int td_func; } ;
typedef TYPE_2__ traverse_data_t ;
typedef int fstrans_cookie_t ;
struct TYPE_4__ {int pd_mtx; int pd_cv; int pd_exited; int pd_resume; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 int FUNC_6 (TYPE_2__*,int *,int ,int *) ;

__attribute__((used)) static void
FUNC_7(void *VAR_5)
{
 traverse_data_t *VAR_6 = VAR_5;
 traverse_data_t VAR_7 = *VAR_6;
 zbookmark_phys_t VAR_8;
 fstrans_cookie_t VAR_9 = FUNC_4();

 VAR_7.td_func = VAR_4;
 VAR_7.td_arg = VAR_6->td_pfd;
 VAR_7.td_pfd = ((void*)0);
 VAR_7.td_resume = &VAR_6->td_pfd->pd_resume;

 FUNC_0(&VAR_8, VAR_7.td_objset,
     VAR_3, VAR_2, VAR_1);
 (void) FUNC_6(&VAR_7, ((void*)0), VAR_7.td_rootbp, &VAR_8);

 FUNC_2(&VAR_6->td_pfd->pd_mtx);
 VAR_6->td_pfd->pd_exited = VAR_0;
 FUNC_1(&VAR_6->td_pfd->pd_cv);
 FUNC_3(&VAR_6->td_pfd->pd_mtx);
 FUNC_5(VAR_9);
}
