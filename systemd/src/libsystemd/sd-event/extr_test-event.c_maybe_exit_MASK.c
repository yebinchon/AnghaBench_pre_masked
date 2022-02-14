
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inotify_context {unsigned int create_overflow; unsigned int n_create_events; unsigned int* create_called; int delete_self_handler_called; } ;
typedef struct inotify_context sd_event_source ;


 int FUNC_0 (struct inotify_context*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct inotify_context*) ;

__attribute__((used)) static void FUNC_3(sd_event_source *VAR_0, struct inotify_context *VAR_1) {
        unsigned VAR_2;

        FUNC_0(VAR_0);
        FUNC_0(VAR_1);

        if (!VAR_1->delete_self_handler_called)
                return;

        for (VAR_2 = 0; VAR_2 < 3; VAR_2++) {
                unsigned VAR_3;

                if (VAR_1->create_overflow & (1U << VAR_2))
                        continue;

                for (VAR_3 = 0; VAR_3 < VAR_1->n_create_events; VAR_3++)
                        if (!(VAR_1->create_called[VAR_3] & (1U << VAR_2)))
                                return;
        }

        FUNC_1(FUNC_2(VAR_0), 0);
}
