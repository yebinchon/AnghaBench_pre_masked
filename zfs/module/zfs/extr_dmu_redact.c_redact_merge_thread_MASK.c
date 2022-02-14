
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct redact_record {int eos_marker; } ;
struct redact_merge_thread_arg {int q; int cancel; int thr_args; int numsnaps; int error_code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct redact_record*,int) ;
 struct redact_record* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int ,int ,int *) ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(void *VAR_2)
{
 struct redact_merge_thread_arg *VAR_3 = VAR_2;
 VAR_3->error_code = FUNC_2(&VAR_3->q,
     VAR_3->numsnaps, VAR_3->thr_args, &VAR_3->cancel);
 struct redact_record *VAR_4 = FUNC_1(sizeof (*VAR_4), VAR_1);
 VAR_4->eos_marker = VAR_0;
 FUNC_0(&VAR_3->q, VAR_4, 1);
 FUNC_3();
}
