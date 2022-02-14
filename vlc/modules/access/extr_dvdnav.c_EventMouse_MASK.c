
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int i_y; int i_x; } ;
typedef TYPE_1__ vlc_mouse_t ;
typedef int pci_t ;
struct TYPE_12__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_13__ {TYPE_1__ oldmouse; int dvdnav; int event_lock; } ;
typedef TYPE_3__ demux_sys_t ;


 int FUNC_0 (TYPE_2__*,int) ;
 int VAR_0 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int ,int ) ;
 int FUNC_3 (int ,int *,int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,TYPE_1__ const*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,TYPE_1__ const*,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9( const vlc_mouse_t *VAR_1, void *VAR_2 )
{
    demux_t *VAR_3 = VAR_2;
    demux_sys_t *VAR_4 = VAR_3->p_sys;

    if( !VAR_1 )
    {
        FUNC_6( &VAR_4->oldmouse );
        return;
    }


    pci_t *VAR_5 = FUNC_1( VAR_4->dvdnav );

    if( FUNC_4( &VAR_4->oldmouse, VAR_1 ) )
        FUNC_3( VAR_4->dvdnav, VAR_5, VAR_1->i_x, VAR_1->i_y );
    if( FUNC_5( &VAR_4->oldmouse, VAR_1, VAR_0 ) )
    {
        FUNC_7( &VAR_4->event_lock );
        FUNC_0( VAR_3, 1 );
        FUNC_8( &VAR_4->event_lock );
        FUNC_2( VAR_4->dvdnav, VAR_5, VAR_1->i_x, VAR_1->i_y );
    }
    VAR_4->oldmouse = *VAR_1;
}
