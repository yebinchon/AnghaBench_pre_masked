
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ local; scalar_t__ image_root; scalar_t__ final_path; int output_fd; int input_event_source; int compress; scalar_t__ temp_path; int event; } ;
typedef TYPE_1__ RawImport ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;

RawImport* FUNC_7(RawImport *VAR_0) {
        if (!VAR_0)
                return ((void*)0);

        FUNC_5(VAR_0->event);

        if (VAR_0->temp_path) {
                (void) FUNC_6(VAR_0->temp_path);
                FUNC_0(VAR_0->temp_path);
        }

        FUNC_1(&VAR_0->compress);

        FUNC_4(VAR_0->input_event_source);

        FUNC_3(VAR_0->output_fd);

        FUNC_0(VAR_0->final_path);
        FUNC_0(VAR_0->image_root);
        FUNC_0(VAR_0->local);
        return FUNC_2(VAR_0);
}
