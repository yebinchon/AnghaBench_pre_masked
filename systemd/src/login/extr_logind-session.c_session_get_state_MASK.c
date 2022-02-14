
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ fifo_fd; scalar_t__ scope_job; scalar_t__ timer_event_source; scalar_t__ stopping; } ;
typedef int SessionState ;
typedef TYPE_1__ Session ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

SessionState FUNC_2(Session *VAR_4) {
        FUNC_0(VAR_4);


        if (VAR_4->stopping || VAR_4->timer_event_source)
                return VAR_1;

        if (VAR_4->scope_job || VAR_4->fifo_fd < 0)
                return VAR_3;

        if (FUNC_1(VAR_4))
                return VAR_0;

        return VAR_2;
}
