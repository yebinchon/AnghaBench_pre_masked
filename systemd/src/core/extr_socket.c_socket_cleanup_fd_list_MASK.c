
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ n_auxiliary_fds; int auxiliary_fds; } ;
typedef TYPE_1__ SocketPort ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(SocketPort *VAR_0) {
        FUNC_0(VAR_0);

        FUNC_1(VAR_0->auxiliary_fds, VAR_0->n_auxiliary_fds);
        VAR_0->auxiliary_fds = FUNC_2(VAR_0->auxiliary_fds);
        VAR_0->n_auxiliary_fds = 0;
}
