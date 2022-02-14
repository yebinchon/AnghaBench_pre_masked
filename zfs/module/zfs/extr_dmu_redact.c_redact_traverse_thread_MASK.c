
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct redact_thread_arg {int error_code; int current_record; int q; void* deleted_objs; int resume; int txg; int ds; } ;
struct redact_record {int eos_marker; } ;
struct TYPE_6__ {TYPE_1__* os_phys; } ;
typedef TYPE_2__ objset_t ;
struct TYPE_5__ {scalar_t__ os_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_2__**) ;
 struct redact_record* FUNC_2 (int,int ) ;
 void* FUNC_3 () ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int *,int *,struct redact_record*) ;
 int VAR_6 ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ,int *,int,int ,struct redact_thread_arg*) ;
 void* FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_9(void *VAR_7)
{
 struct redact_thread_arg *VAR_8 = VAR_7;
 int VAR_9;
 struct redact_record *VAR_10;
 objset_t *VAR_11;
 FUNC_0(FUNC_1(VAR_8->ds, &VAR_11));






 VAR_8->deleted_objs = FUNC_3();


 VAR_9 = FUNC_7(VAR_8->ds, VAR_8->txg,
     &VAR_8->resume, VAR_4 | VAR_5,
     VAR_6, VAR_8);

 if (VAR_9 != VAR_2)
  VAR_8->error_code = VAR_9;
 FUNC_4(VAR_8->deleted_objs);
 VAR_10 = FUNC_2(sizeof (*VAR_10), VAR_3);
 VAR_10->eos_marker = VAR_0;
 FUNC_5(&VAR_8->q, &VAR_8->current_record, VAR_10);
 FUNC_6();
}
