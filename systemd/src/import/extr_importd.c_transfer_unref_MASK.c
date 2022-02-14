
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ pid; int stdout_fd; int stdin_fd; int log_fd; int object_path; int format; int local; int remote; int log_event_source; int pid_event_source; int id; TYPE_1__* manager; } ;
typedef TYPE_2__ Transfer ;
struct TYPE_7__ {int transfers; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (scalar_t__,int ) ;
 TYPE_2__* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__,int *) ;

__attribute__((used)) static Transfer *FUNC_8(Transfer *VAR_1) {
        if (!VAR_1)
                return ((void*)0);

        if (VAR_1->manager)
                FUNC_2(VAR_1->manager->transfers, FUNC_0(VAR_1->id));

        FUNC_6(VAR_1->pid_event_source);
        FUNC_6(VAR_1->log_event_source);

        FUNC_1(VAR_1->remote);
        FUNC_1(VAR_1->local);
        FUNC_1(VAR_1->format);
        FUNC_1(VAR_1->object_path);

        if (VAR_1->pid > 0) {
                (void) FUNC_3(VAR_1->pid, VAR_0);
                (void) FUNC_7(VAR_1->pid, ((void*)0));
        }

        FUNC_5(VAR_1->log_fd);
        FUNC_5(VAR_1->stdin_fd);
        FUNC_5(VAR_1->stdout_fd);

        return FUNC_4(VAR_1);
}
