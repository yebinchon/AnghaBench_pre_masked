
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t sources_size; int events; int listen_event; int sigint_event; int sigterm_event; int writers; int _single_writer; scalar_t__ sources; int daemons; } ;
typedef TYPE_1__ RemoteServer ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_4 (TYPE_1__*,size_t) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

void FUNC_8(RemoteServer *VAR_2) {
        size_t VAR_3;





        FUNC_0(VAR_2->sources_size == 0 || VAR_2->sources);
        for (VAR_3 = 0; VAR_3 < VAR_2->sources_size; VAR_3++)
                FUNC_4(VAR_2, VAR_3);
        FUNC_1(VAR_2->sources);

        FUNC_7(VAR_2->_single_writer);
        FUNC_2(VAR_2->writers);

        FUNC_5(VAR_2->sigterm_event);
        FUNC_5(VAR_2->sigint_event);
        FUNC_5(VAR_2->listen_event);
        FUNC_6(VAR_2->events);

        if (VAR_2 == VAR_1)
                VAR_1 = ((void*)0);


}
