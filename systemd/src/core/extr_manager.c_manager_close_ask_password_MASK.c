
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int have_ask_password; int ask_password_inotify_fd; int ask_password_event_source; } ;
typedef TYPE_1__ Manager ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(Manager *VAR_1) {
        FUNC_0(VAR_1);

        VAR_1->ask_password_event_source = FUNC_2(VAR_1->ask_password_event_source);
        VAR_1->ask_password_inotify_fd = FUNC_1(VAR_1->ask_password_inotify_fd);
        VAR_1->have_ask_password = -VAR_0;
}
