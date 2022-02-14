
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int tar_pid; scalar_t__ path; scalar_t__ buffer; int tar_fd; int event; int compress; scalar_t__ temp_path; int output_event_source; } ;
typedef TYPE_1__ TarExport ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int ) ;
 TYPE_1__* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,int *) ;

TarExport *FUNC_9(TarExport *VAR_2) {
        if (!VAR_2)
                return ((void*)0);

        FUNC_6(VAR_2->output_event_source);

        if (VAR_2->tar_pid > 1) {
                (void) FUNC_3(VAR_2->tar_pid, VAR_1);
                (void) FUNC_8(VAR_2->tar_pid, ((void*)0));
        }

        if (VAR_2->temp_path) {
                (void) FUNC_0(VAR_2->temp_path, VAR_0);
                FUNC_1(VAR_2->temp_path);
        }

        FUNC_2(&VAR_2->compress);

        FUNC_7(VAR_2->event);

        FUNC_5(VAR_2->tar_fd);

        FUNC_1(VAR_2->buffer);
        FUNC_1(VAR_2->path);
        return FUNC_4(VAR_2);
}
