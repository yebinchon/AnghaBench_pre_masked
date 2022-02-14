
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int event; void* reply; void* current; void* output_buffer; void* input_buffer; int fd; } ;
typedef TYPE_1__ Varlink ;


 int FUNC_0 (TYPE_1__*) ;
 void* FUNC_1 (void*) ;
 void* FUNC_2 (void*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(Varlink *VAR_0) {
        FUNC_0(VAR_0);

        FUNC_5(VAR_0);

        VAR_0->fd = FUNC_3(VAR_0->fd);

        VAR_0->input_buffer = FUNC_2(VAR_0->input_buffer);
        VAR_0->output_buffer = FUNC_2(VAR_0->output_buffer);

        VAR_0->current = FUNC_1(VAR_0->current);
        VAR_0->reply = FUNC_1(VAR_0->reply);

        VAR_0->event = FUNC_4(VAR_0->event);
}
