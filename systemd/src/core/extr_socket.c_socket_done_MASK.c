
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int Unit ;
struct TYPE_9__ {int timer_event_source; void* fdname; void* group; void* user; int symlinks; void* smack_ip_out; void* smack_ip_in; void* smack; void* bind_to_device; void* tcp_congestion; int service; int dynamic_creds; int * control_command; int exec_command; int exec_runtime; int peers_by_address; } ;
struct TYPE_8__ {int * socket; } ;
typedef TYPE_1__ SocketPeer ;
typedef TYPE_2__ Socket ;


 TYPE_2__* FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int) ;
 void* FUNC_5 (void*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 TYPE_1__* FUNC_8 (int ) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(Unit *VAR_1) {
        Socket *VAR_2 = FUNC_0(VAR_1);
        SocketPeer *VAR_3;

        FUNC_1(VAR_2);

        FUNC_9(VAR_2);

        while ((VAR_3 = FUNC_8(VAR_2->peers_by_address)))
                VAR_3->socket = ((void*)0);

        VAR_2->peers_by_address = FUNC_7(VAR_2->peers_by_address);

        VAR_2->exec_runtime = FUNC_4(VAR_2->exec_runtime, 0);
        FUNC_3(VAR_2->exec_command, VAR_0);
        VAR_2->control_command = ((void*)0);

        FUNC_2(&VAR_2->dynamic_creds);

        FUNC_10(VAR_2);

        FUNC_12(&VAR_2->service);

        VAR_2->tcp_congestion = FUNC_5(VAR_2->tcp_congestion);
        VAR_2->bind_to_device = FUNC_5(VAR_2->bind_to_device);

        VAR_2->smack = FUNC_5(VAR_2->smack);
        VAR_2->smack_ip_in = FUNC_5(VAR_2->smack_ip_in);
        VAR_2->smack_ip_out = FUNC_5(VAR_2->smack_ip_out);

        FUNC_11(VAR_2->symlinks);

        VAR_2->user = FUNC_5(VAR_2->user);
        VAR_2->group = FUNC_5(VAR_2->group);

        VAR_2->fdname = FUNC_5(VAR_2->fdname);

        VAR_2->timer_event_source = FUNC_6(VAR_2->timer_event_source);
}
