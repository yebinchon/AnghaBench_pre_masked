
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct send_range {int dummy; } ;
struct redact_list_thread_arg {int error_code; int q; int resume; int * rl; int mark_redact; int num_blocks_visited; int cancel; } ;
struct redact_list_cb_arg {int mark_redact; int num_blocks_visited; int * q; int * cancel; int member_0; } ;
typedef int fstrans_cookie_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct send_range*,int) ;
 int FUNC_1 (int *,int *,int ,struct redact_list_cb_arg*) ;
 struct send_range* FUNC_2 (int ,int ,int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(void *VAR_4)
{
 struct redact_list_thread_arg *VAR_5 = VAR_4;
 struct send_range *VAR_6;
 fstrans_cookie_t VAR_7 = FUNC_3();
 if (VAR_5->rl != ((void*)0)) {
  struct redact_list_cb_arg VAR_8 = {0};
  VAR_8.cancel = &VAR_5->cancel;
  VAR_8.q = &VAR_5->q;
  VAR_8.num_blocks_visited = VAR_5->num_blocks_visited;
  VAR_8.mark_redact = VAR_5->mark_redact;
  int VAR_9 = FUNC_1(VAR_5->rl,
      &VAR_5->resume, VAR_3, &VAR_8);
  if (VAR_9 != VAR_2)
   VAR_5->error_code = VAR_9;
 }
 VAR_6 = FUNC_2(VAR_1, 0, 0, 0, VAR_0);
 FUNC_0(&VAR_5->q, VAR_6, sizeof (*VAR_6));
 FUNC_4(VAR_7);
}
