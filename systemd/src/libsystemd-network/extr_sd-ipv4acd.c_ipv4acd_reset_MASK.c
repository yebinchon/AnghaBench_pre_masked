
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fd; int receive_message_event_source; int timer_event_source; } ;
typedef TYPE_1__ sd_ipv4acd ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(sd_ipv4acd *VAR_1) {
        FUNC_0(VAR_1);

        (void) FUNC_1(VAR_1->timer_event_source);
        VAR_1->receive_message_event_source = FUNC_4(VAR_1->receive_message_event_source);

        VAR_1->fd = FUNC_3(VAR_1->fd);

        FUNC_2(VAR_1, VAR_0, 1);
}
