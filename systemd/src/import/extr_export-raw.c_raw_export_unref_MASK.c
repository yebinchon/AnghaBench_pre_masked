
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int path; int buffer; int input_fd; int event; int compress; int output_event_source; } ;
typedef TYPE_1__ RawExport ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

RawExport *FUNC_6(RawExport *VAR_0) {
        if (!VAR_0)
                return ((void*)0);

        FUNC_4(VAR_0->output_event_source);

        FUNC_1(&VAR_0->compress);

        FUNC_5(VAR_0->event);

        FUNC_3(VAR_0->input_fd);

        FUNC_0(VAR_0->buffer);
        FUNC_0(VAR_0->path);
        return FUNC_2(VAR_0);
}
