
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int input_state_changed; int i_media; int i_schedule; int lock; TYPE_3__** schedule; TYPE_5__** media; int lock_manage; int wait_manage; } ;
typedef TYPE_4__ vlm_t ;
typedef int vlm_message_t ;
struct TYPE_9__ {scalar_t__ b_loop; } ;
struct TYPE_10__ {int i_input; int id; scalar_t__ b_vod; TYPE_1__ broadcast; } ;
struct TYPE_13__ {int i_instance; TYPE_2__ cfg; TYPE_6__** instance; } ;
typedef TYPE_5__ vlm_media_sys_t ;
struct TYPE_14__ {int i_index; int player; int psz_name; } ;
typedef TYPE_6__ vlm_media_instance_sys_t ;
typedef scalar_t__ time_t ;
struct TYPE_11__ {scalar_t__ date; scalar_t__ period; int i_repeat; int i_command; int * command; scalar_t__ b_enabled; } ;


 int FUNC_0 (TYPE_4__*,char*,int **) ;
 int FUNC_1 (int,char**,int ) ;
 int FUNC_2 (int,char**,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__*) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int *,int *,scalar_t__) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int) ;
 int FUNC_16 () ;
 int FUNC_17 (TYPE_4__*,int ,int ,int ,...) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static void* FUNC_19( void* VAR_2 )
{
    vlm_t *VAR_3 = (vlm_t*)VAR_2;
    time_t VAR_4, VAR_5, VAR_6 = 0;

    FUNC_6(&VAR_4);

    for( ;; )
    {
        char **VAR_7 = ((void*)0);
        int VAR_8 = 0;
        bool VAR_9 = 0;

        FUNC_10( &VAR_3->lock_manage );
        FUNC_4( &VAR_3->lock_manage );
        while( !VAR_3->input_state_changed && !VAR_9 )
        {
            if( VAR_6 != 0 )
                VAR_9 = FUNC_8( &VAR_3->wait_manage, &VAR_3->lock_manage, VAR_6 ) != 0;
            else
                FUNC_9( &VAR_3->wait_manage, &VAR_3->lock_manage );
        }
        VAR_3->input_state_changed = 0;
        FUNC_7( );
        FUNC_11( &VAR_3->lock_manage );

        int VAR_10 = FUNC_16 ();

        FUNC_10( &VAR_3->lock );
        for( int VAR_11 = 0; VAR_11 < VAR_3->i_media; VAR_11++ )
        {
            vlm_media_sys_t *VAR_12 = VAR_3->media[VAR_11];

            for( int VAR_13 = 0; VAR_13 < VAR_12->i_instance; )
            {
                vlm_media_instance_sys_t *VAR_14 = VAR_12->instance[VAR_13];

                FUNC_13(VAR_14->player);
                if (!FUNC_12(VAR_14->player))
                {
                    FUNC_14(VAR_14->player);
                    int VAR_15;


                    VAR_15 = VAR_14->i_index + 1;
                    if( !VAR_12->cfg.b_vod && VAR_12->cfg.broadcast.b_loop && VAR_15 >= VAR_12->cfg.i_input )
                        VAR_15 = 0;


                    if( VAR_12->cfg.b_vod || VAR_15 >= VAR_12->cfg.i_input )
                        FUNC_17( VAR_3, VAR_1, VAR_12->cfg.id, VAR_14->psz_name );
                    else
                        FUNC_17( VAR_3, VAR_0, VAR_12->cfg.id, VAR_14->psz_name, VAR_15 );

                    VAR_13 = 0;
                }
                else
                {
                    FUNC_14(VAR_14->player);
                    VAR_13++;
                }
            }
        }


        FUNC_6(&VAR_5);
        VAR_6 = 0;

        for( int VAR_16 = 0; VAR_16 < VAR_3->i_schedule; VAR_16++ )
        {
            time_t VAR_17 = VAR_3->schedule[VAR_16]->date;

            if( VAR_3->schedule[VAR_16]->b_enabled )
            {
                bool VAR_18 = 0;
                if( VAR_3->schedule[VAR_16]->date == 0 )
                {
                    VAR_3->schedule[VAR_16]->date = VAR_5;
                    VAR_17 = VAR_5;
                    VAR_18 = 1;
                }
                else if( VAR_3->schedule[VAR_16]->period != 0 )
                {
                    int VAR_19 = 0;
                    while( ((VAR_3->schedule[VAR_16]->date + VAR_19 *
                             VAR_3->schedule[VAR_16]->period) <= VAR_4) &&
                           ( VAR_3->schedule[VAR_16]->i_repeat > VAR_19 ||
                             VAR_3->schedule[VAR_16]->i_repeat < 0 ) )
                    {
                        VAR_19++;
                    }

                    VAR_17 = VAR_3->schedule[VAR_16]->date + VAR_19 *
                        VAR_3->schedule[VAR_16]->period;
                }

                if( VAR_17 <= VAR_5 )
                {
                    if( VAR_17 > VAR_4 || VAR_18 )
                    {
                        for( int VAR_20 = 0; VAR_20 < VAR_3->schedule[VAR_16]->i_command; VAR_20++ )
                        {
                            FUNC_1( VAR_8,
                                        VAR_7,
                                        FUNC_5(VAR_3->schedule[VAR_16]->command[VAR_20] ) );
                        }
                    }
                }
                else if( VAR_6 == 0 || VAR_17 < VAR_6 )
                {
                    VAR_6 = VAR_17;
                }
            }
        }

        while( VAR_8 )
        {
            vlm_message_t *VAR_21 = ((void*)0);
            char *VAR_22 = VAR_7[0];
            FUNC_0( VAR_3, VAR_22,&VAR_21 );


            FUNC_18( VAR_21 );
            FUNC_2( VAR_8,
                        VAR_7,
                        VAR_22 );
            FUNC_3( VAR_22 );
        }

        VAR_4 = VAR_5;
        FUNC_11( &VAR_3->lock );
        FUNC_15 (VAR_10);
    }

    return ((void*)0);
}
