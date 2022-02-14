
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fd; void* timeout_event_source; void* io_event_source; } ;
typedef TYPE_1__ DnsStream ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (void*) ;

__attribute__((used)) static void FUNC_4(DnsStream *VAR_0) {
        FUNC_0(VAR_0);

        VAR_0->io_event_source = FUNC_3(VAR_0->io_event_source);
        VAR_0->timeout_event_source = FUNC_3(VAR_0->timeout_event_source);
        VAR_0->fd = FUNC_2(VAR_0->fd);


        FUNC_1(VAR_0);
}
