
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_8__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int users; int input_state_changed; int i_id; int lock_manage; int lock; int wait_manage; int thread; int * p_vod; int schedule; int i_schedule; int media; int i_media; } ;
typedef TYPE_1__ vlm_t ;
typedef int vlm_message_t ;
typedef int vlc_object_t ;
typedef int libvlc_int_t ;
struct TYPE_10__ {TYPE_1__* p_vlm; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int * FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char**,char*,char const*) ;
 int FUNC_3 (char*) ;
 TYPE_8__* FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int *,char*,...) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (TYPE_1__*,char*,int ) ;
 scalar_t__ FUNC_9 (int *,int ,TYPE_1__*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 TYPE_1__* FUNC_12 (int *,int,char*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (TYPE_1__*) ;
 scalar_t__ FUNC_18 (TYPE_1__*,char*,int **) ;
 int FUNC_19 (int *) ;
 int VAR_4 ;

vlm_t *FUNC_20( libvlc_int_t *VAR_5, const char *VAR_6 )
{
    vlm_t *VAR_7 = ((void*)0), **VAR_8 = &(FUNC_4(VAR_5)->p_vlm);
    vlc_object_t *VAR_9 = FUNC_1(VAR_5);


    FUNC_15( &VAR_4 );

    VAR_7 = *VAR_8;
    if( VAR_7 )
    {
        if( FUNC_5( VAR_7->users < VAR_1 ) )
            VAR_7->users++;
        else
            VAR_7 = ((void*)0);
        FUNC_16( &VAR_4 );
        return VAR_7;
    }

    FUNC_6( VAR_9, "creating VLM" );

    VAR_7 = FUNC_12( VAR_9, sizeof( *VAR_7 ), "vlm daemon" );
    if( !VAR_7 )
    {
        FUNC_16( &VAR_4 );
        return ((void*)0);
    }

    FUNC_14( &VAR_7->lock );
    FUNC_14( &VAR_7->lock_manage );
    FUNC_11( &VAR_7->wait_manage );
    VAR_7->users = 1;
    VAR_7->input_state_changed = 0;
    VAR_7->i_id = 1;
    FUNC_0( VAR_7->i_media, VAR_7->media );
    FUNC_0( VAR_7->i_schedule, VAR_7->schedule );
    VAR_7->p_vod = ((void*)0);
    FUNC_8( VAR_7, "intf-event", VAR_3 );

    if( FUNC_9( &VAR_7->thread, VAR_0, VAR_7, VAR_2 ) )
    {
        FUNC_10( &VAR_7->wait_manage );
        FUNC_13( &VAR_7->lock );
        FUNC_13( &VAR_7->lock_manage );
        FUNC_17(VAR_7);
        FUNC_16( &VAR_4 );
        return ((void*)0);
    }

    *VAR_8 = VAR_7;

    FUNC_16( &VAR_4 );


    if( VAR_6 != ((void*)0) )
    {
        vlm_message_t *VAR_10 = ((void*)0);
        char *VAR_11 = ((void*)0);

        FUNC_6( VAR_9, "loading VLM configuration" );
        if( FUNC_2(&VAR_11, "load %s", VAR_6 ) != -1 )
        {
            FUNC_6( VAR_9, "%s", VAR_11 );
            if( FUNC_18( VAR_7, VAR_11, &VAR_10 ) )
                FUNC_7( VAR_9, "error while loading the configuration file" );

            FUNC_19( VAR_10 );
            FUNC_3( VAR_11 );
        }
    }

    return VAR_7;
}
