
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inotify_event {int mask; } ;
struct inotify_context {int delete_self_handler_called; } ;
typedef int sd_event_source ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,struct inotify_context*) ;

__attribute__((used)) static int FUNC_3(sd_event_source *VAR_3, const struct inotify_event *VAR_4, void *VAR_5) {
        struct inotify_context *VAR_6 = VAR_5;

        if (VAR_4->mask & VAR_2) {
                FUNC_1("delete-self-handler: overflow");
                VAR_6->delete_self_handler_called = 1;
        } else if (VAR_4->mask & VAR_0) {
                FUNC_1("delete-self-handler: delete-self");
                VAR_6->delete_self_handler_called = 1;
        } else if (VAR_4->mask & VAR_1) {
                FUNC_1("delete-self-handler: ignore");
        } else
                FUNC_0("unexpected inotify event (delete-self)");

        FUNC_2(VAR_3, VAR_6);
        return 1;
}
