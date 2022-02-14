
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct vlc_timer* vlc_timer_t ;
struct vlc_timer {void (* func ) (void*) ;int quit; int tid; scalar_t__ interval; int htimer; int hev; void* data; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *,int,struct vlc_timer*) ;
 struct vlc_timer* FUNC_2 (int) ;
 int VAR_4 ;

int FUNC_3 (vlc_timer_t *VAR_5, void (*VAR_6) (void *), void *VAR_7)
{
    struct vlc_timer *VAR_8 = FUNC_2 (sizeof (*VAR_8));

    if (VAR_8 == ((void*)0))
        return VAR_1;

    VAR_8->func = VAR_6;
    VAR_8->data = VAR_7;

    FUNC_0 (((void*)0), &VAR_8->hev, VAR_0, VAR_2);
    VAR_8->htimer = VAR_3;
    VAR_8->interval = 0;
    VAR_8->quit = 0;
    VAR_8->tid = FUNC_1 (VAR_4, ((void*)0), 1024 * 1024, VAR_8);

    *VAR_5 = VAR_8;
    return 0;
}
