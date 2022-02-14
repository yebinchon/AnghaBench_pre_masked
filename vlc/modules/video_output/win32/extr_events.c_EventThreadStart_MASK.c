
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int bottom; int right; scalar_t__ top; scalar_t__ left; } ;
struct TYPE_10__ {int b_ready; int b_error; int hvideownd; int hparent; int parent_window; int obj; int thread; int lock; int wait; int b_done; TYPE_1__ window_area; int is_projected; } ;
typedef TYPE_2__ event_thread_t ;
struct TYPE_11__ {int hvideownd; int hparent; int parent_window; } ;
typedef TYPE_3__ event_hwnd_t ;
struct TYPE_12__ {int height; int width; int is_projected; } ;
typedef TYPE_4__ event_cfg_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int *,int ,TYPE_2__*,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8( event_thread_t *VAR_4, event_hwnd_t *VAR_5, const event_cfg_t *VAR_6 )
{
    VAR_4->is_projected = VAR_6->is_projected;
    VAR_4->window_area.left = 0;
    VAR_4->window_area.top = 0;
    VAR_4->window_area.right = VAR_6->width;
    VAR_4->window_area.bottom = VAR_6->height;

    VAR_4->b_ready = 0;
    FUNC_0( &VAR_4->b_done, 0);
    VAR_4->b_error = 0;

    if( FUNC_3( &VAR_4->thread, VAR_0, VAR_4,
                   VAR_3 ) )
    {
        FUNC_2( VAR_4->obj, "cannot create Vout EventThread" );
        return VAR_1;
    }

    FUNC_6( &VAR_4->lock );
    while( !VAR_4->b_ready )
        FUNC_4( &VAR_4->wait, &VAR_4->lock );
    const bool VAR_7 = VAR_4->b_error;
    FUNC_7( &VAR_4->lock );

    if( VAR_7 )
    {
        FUNC_5( VAR_4->thread, ((void*)0) );
        VAR_4->b_ready = 0;
        return VAR_1;
    }
    FUNC_1( VAR_4->obj, "Vout EventThread running" );


    VAR_5->parent_window = VAR_4->parent_window;
    VAR_5->hparent = VAR_4->hparent;
    VAR_5->hvideownd = VAR_4->hvideownd;
    return VAR_2;
}
