
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nspid; void* machine; int server_id; void* exec_path; int exec_argv; scalar_t__ sockaddr_size; int sockaddr; } ;
typedef TYPE_1__ sd_bus ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 void* FUNC_1 (void*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(sd_bus *VAR_1) {
        FUNC_0(VAR_1);

        FUNC_3(VAR_1->sockaddr);
        VAR_1->sockaddr_size = 0;
        VAR_1->exec_argv = FUNC_2(VAR_1->exec_argv);
        VAR_1->exec_path = FUNC_1(VAR_1->exec_path);
        VAR_1->server_id = VAR_0;
        VAR_1->machine = FUNC_1(VAR_1->machine);
        VAR_1->nspid = 0;
}
