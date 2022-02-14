
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inotify_event {int mask; char const* name; } ;
struct inotify_context {unsigned int create_overflow; unsigned int n_create_events; unsigned int* create_called; } ;
typedef int sd_event_source ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char const*,char const*) ;
 int FUNC_3 (char*,char const*,...) ;
 int FUNC_4 (int *,struct inotify_context*) ;
 scalar_t__ FUNC_5 (char const*,unsigned int*) ;
 scalar_t__ FUNC_6 (int *,char const**) ;
 int FUNC_7 (char const*,char*) ;

__attribute__((used)) static int FUNC_8(sd_event_source *VAR_3, const struct inotify_event *VAR_4, void *VAR_5) {
        struct inotify_context *VAR_6 = VAR_5;
        const char *VAR_7;
        unsigned VAR_8, VAR_9;

        FUNC_1(FUNC_6(VAR_3, &VAR_7) >= 0);
        FUNC_1(FUNC_5(VAR_7, &VAR_9) >= 0);

        FUNC_1(VAR_9 <= 3);
        VAR_8 = 1U << VAR_9;

        if (VAR_4->mask & VAR_2) {
                FUNC_3("inotify-handler <%s>: overflow", VAR_7);
                VAR_6->create_overflow |= VAR_8;
        } else if (VAR_4->mask & VAR_0) {
                unsigned VAR_10;

                FUNC_2("inotify-handler <%s>: create on %s", VAR_7, VAR_4->name);

                if (!FUNC_7(VAR_4->name, "sub")) {
                        FUNC_1(FUNC_5(VAR_4->name, &VAR_10) >= 0);

                        FUNC_1(VAR_10 < VAR_6->n_create_events);
                        VAR_6->create_called[VAR_10] |= VAR_8;
                }
        } else if (VAR_4->mask & VAR_1) {
                FUNC_3("inotify-handler <%s>: delete of %s", VAR_7, VAR_4->name);
                FUNC_1(FUNC_7(VAR_4->name, "sub"));
        } else
                FUNC_0("unexpected inotify event");

        FUNC_4(VAR_3, VAR_6);
        return 1;
}
