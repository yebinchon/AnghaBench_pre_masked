
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ use_event; TYPE_3__* event; scalar_t__ count; } ;
typedef TYPE_1__ ngx_cached_open_file_t ;
struct TYPE_6__ {struct TYPE_6__* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ,int ) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_2(ngx_cached_open_file_t *VAR_3)
{
    if (VAR_3->event == ((void*)0)) {
        return;
    }

    (void) FUNC_0(VAR_3->event, VAR_2,
                         VAR_3->count ? VAR_1 : VAR_0);

    FUNC_1(VAR_3->event->data);
    FUNC_1(VAR_3->event);
    VAR_3->event = ((void*)0);
    VAR_3->use_event = 0;
}
