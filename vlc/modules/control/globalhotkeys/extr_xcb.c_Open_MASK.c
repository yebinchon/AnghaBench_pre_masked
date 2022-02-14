
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int xcb_setup_t ;
struct TYPE_13__ {TYPE_1__* data; int rem; } ;
typedef TYPE_2__ xcb_screen_iterator_t ;
typedef int vlc_object_t ;
struct TYPE_14__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ intf_thread_t ;
struct TYPE_15__ {int p_connection; scalar_t__ p_symbols; struct TYPE_15__* p_map; struct TYPE_15__* p_keys; int thread; int root; } ;
typedef TYPE_4__ intf_sys_t ;
struct TYPE_12__ {int root; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__* FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (int *,int ,TYPE_3__*,int ) ;
 int FUNC_5 (int *,int*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int * FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (TYPE_2__*) ;
 TYPE_2__ FUNC_12 (int const*) ;

__attribute__((used)) static int FUNC_13( vlc_object_t *VAR_5 )
{
    intf_thread_t *VAR_6 = (intf_thread_t *)VAR_5;
    intf_sys_t *VAR_7;
    int VAR_8 = VAR_1;

    VAR_6->p_sys = VAR_7 = FUNC_2( 1, sizeof(*VAR_7) );
    if( !VAR_7 )
        return VAR_2;

    int VAR_9;
    VAR_7->p_connection = FUNC_5( ((void*)0), &VAR_9 );

    if( FUNC_6( VAR_7->p_connection ) )
        goto error;


    const xcb_setup_t* VAR_10 = FUNC_8( VAR_7->p_connection );
    if( !VAR_10 )
        goto error;
    xcb_screen_iterator_t VAR_11 = FUNC_12( VAR_10 );
    for( int VAR_12 = 0; VAR_12 < VAR_9; VAR_12++ )
    {
        if( !VAR_11.rem )
            break;
        FUNC_11( &VAR_11 );
    }
    if( !VAR_11.rem )
        goto error;
    VAR_7->root = VAR_11.data->root;


    VAR_7->p_symbols = FUNC_9( VAR_7->p_connection );
    if( !VAR_7->p_symbols )
        goto error;

    if( !FUNC_0( VAR_6 ) )
    {
        VAR_8 = VAR_3;
        VAR_6->p_sys = ((void*)0);
        goto error;
    }
    FUNC_1( VAR_6 );

    if( FUNC_4( &VAR_7->thread, VAR_0, VAR_6, VAR_4 ) )
    {
        if( VAR_7->p_map )
        {
            FUNC_3( VAR_7->p_map->p_keys );
            FUNC_3( VAR_7->p_map );
        }
        goto error;
    }
    return VAR_3;

error:
    if( VAR_7->p_symbols )
        FUNC_10( VAR_7->p_symbols );
    FUNC_7( VAR_7->p_connection );
    FUNC_3( VAR_7 );
    return VAR_8;
}
