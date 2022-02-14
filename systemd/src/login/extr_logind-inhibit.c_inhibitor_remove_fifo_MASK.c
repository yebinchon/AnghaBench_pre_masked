
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ fifo_path; int fifo_fd; int event_source; } ;
typedef TYPE_1__ Inhibitor ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(Inhibitor *VAR_0) {
        FUNC_0(VAR_0);

        VAR_0->event_source = FUNC_3(VAR_0->event_source);
        VAR_0->fifo_fd = FUNC_2(VAR_0->fifo_fd);

        if (VAR_0->fifo_path) {
                (void) FUNC_4(VAR_0->fifo_path);
                VAR_0->fifo_path = FUNC_1(VAR_0->fifo_path);
        }
}
