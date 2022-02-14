
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {int sessions; TYPE_2__* pending_switch; TYPE_2__* active; } ;
struct TYPE_15__ {TYPE_2__* display; int sessions; } ;
struct TYPE_14__ {scalar_t__ fifo_path; scalar_t__ state_file; int fifo_fd; int fifo_event_source; scalar_t__ id; TYPE_1__* manager; scalar_t__ desktop; scalar_t__ service; scalar_t__ remote_user; scalar_t__ remote_host; scalar_t__ display; scalar_t__ tty; int create_message; scalar_t__ scope_job; int leader; scalar_t__ scope; TYPE_7__* seat; TYPE_3__* user; int devices; int timer_event_source; scalar_t__ in_gc_queue; } ;
struct TYPE_13__ {int sessions; int sessions_by_leader; int session_units; int session_gc_queue; } ;
typedef int SessionDevice ;
typedef TYPE_2__ Session ;


 int FUNC_0 (int ,int ,TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ,int ,TYPE_2__*) ;
 TYPE_2__* FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_7__*,TYPE_2__*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_15 (TYPE_3__*) ;

Session* FUNC_16(Session *VAR_3) {
        SessionDevice *VAR_4;

        if (!VAR_3)
                return ((void*)0);

        if (VAR_3->in_gc_queue)
                FUNC_0(VAR_0, VAR_3->manager->session_gc_queue, VAR_3);

        VAR_3->timer_event_source = FUNC_11(VAR_3->timer_event_source);

        FUNC_14(VAR_3);

        while ((VAR_4 = FUNC_3(VAR_3->devices)))
                FUNC_13(VAR_4);

        FUNC_4(VAR_3->devices);

        if (VAR_3->user) {
                FUNC_0(VAR_2, VAR_3->user->sessions, VAR_3);

                if (VAR_3->user->display == VAR_3)
                        VAR_3->user->display = ((void*)0);

                FUNC_15(VAR_3->user);
        }

        if (VAR_3->seat) {
                if (VAR_3->seat->active == VAR_3)
                        VAR_3->seat->active = ((void*)0);
                if (VAR_3->seat->pending_switch == VAR_3)
                        VAR_3->seat->pending_switch = ((void*)0);

                FUNC_12(VAR_3->seat, VAR_3);
                FUNC_0(VAR_1, VAR_3->seat->sessions, VAR_3);
        }

        if (VAR_3->scope) {
                FUNC_5(VAR_3->manager->session_units, VAR_3->scope);
                FUNC_2(VAR_3->scope);
        }

        if (FUNC_8(VAR_3->leader))
                (void) FUNC_6(VAR_3->manager->sessions_by_leader, FUNC_1(VAR_3->leader), VAR_3);

        FUNC_2(VAR_3->scope_job);

        FUNC_10(VAR_3->create_message);

        FUNC_2(VAR_3->tty);
        FUNC_2(VAR_3->display);
        FUNC_2(VAR_3->remote_host);
        FUNC_2(VAR_3->remote_user);
        FUNC_2(VAR_3->service);
        FUNC_2(VAR_3->desktop);

        FUNC_5(VAR_3->manager->sessions, VAR_3->id);

        FUNC_11(VAR_3->fifo_event_source);
        FUNC_9(VAR_3->fifo_fd);



        FUNC_2(VAR_3->state_file);
        FUNC_2(VAR_3->fifo_path);

        return FUNC_7(VAR_3);
}
