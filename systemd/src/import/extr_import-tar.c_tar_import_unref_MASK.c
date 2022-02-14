
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int tar_pid; scalar_t__ local; scalar_t__ image_root; scalar_t__ final_path; int tar_fd; int event; int compress; scalar_t__ temp_path; int input_event_source; } ;
typedef TYPE_1__ TarImport ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int ) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,int *) ;

TarImport* FUNC_9(TarImport *VAR_4) {
        if (!VAR_4)
                return ((void*)0);

        FUNC_6(VAR_4->input_event_source);

        if (VAR_4->tar_pid > 1) {
                (void) FUNC_2(VAR_4->tar_pid, VAR_3);
                (void) FUNC_8(VAR_4->tar_pid, ((void*)0));
        }

        if (VAR_4->temp_path) {
                (void) FUNC_4(VAR_4->temp_path, VAR_1|VAR_0|VAR_2);
                FUNC_0(VAR_4->temp_path);
        }

        FUNC_1(&VAR_4->compress);

        FUNC_7(VAR_4->event);

        FUNC_5(VAR_4->tar_fd);

        FUNC_0(VAR_4->final_path);
        FUNC_0(VAR_4->image_root);
        FUNC_0(VAR_4->local);
        return FUNC_3(VAR_4);
}
