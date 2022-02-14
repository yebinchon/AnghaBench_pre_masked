
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_14__ {TYPE_5__* sys; } ;
typedef TYPE_4__ audio_output_t ;
struct TYPE_11__ {int * p_obj; } ;
struct TYPE_12__ {TYPE_1__ bytebuffer; } ;
struct TYPE_13__ {size_t i_read; size_t i_write; size_t i_size; TYPE_2__ u; } ;
struct TYPE_15__ {int b_thread_waiting; int i_max_audiotrack_samples; scalar_t__ i_write_type; TYPE_3__ circular; int lock; int aout_cond; scalar_t__ b_error; scalar_t__ b_thread_running; int thread_cond; scalar_t__ b_thread_paused; } ;
typedef TYPE_5__ aout_sys_t ;
struct TYPE_16__ {int (* DeleteLocalRef ) (TYPE_6__**,int *) ;} ;
typedef TYPE_6__* JNIEnv ;


 int FUNC_0 (TYPE_6__**,TYPE_4__*,size_t,size_t,int) ;
 int FUNC_1 (int) ;
 TYPE_6__** FUNC_2 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (int,int) ;
 size_t FUNC_4 (size_t,size_t) ;
 int FUNC_5 (TYPE_6__**,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,scalar_t__) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 () ;

__attribute__((used)) static void *
FUNC_12( void *VAR_1 )
{
    audio_output_t *VAR_2 = VAR_1;
    aout_sys_t *VAR_3 = VAR_2->sys;
    JNIEnv *VAR_4 = FUNC_2();
    vlc_tick_t VAR_5 = 0;
    vlc_tick_t VAR_6 = 0;

    if( !VAR_4 )
        return ((void*)0);

    for( ;; )
    {
        int VAR_7 = 0;
        bool VAR_8;
        size_t VAR_9;
        size_t VAR_10;

        FUNC_9( &VAR_3->lock );


        if( VAR_5 != 0 && FUNC_11() < VAR_5 )
        {


            VAR_3->b_thread_waiting = 1;
            while( VAR_3->b_thread_running && VAR_7 == 0 )
                VAR_7 = FUNC_7( &VAR_3->thread_cond,
                                            &VAR_3->lock,
                                            VAR_5 );
            VAR_5 = 0;
            VAR_3->b_thread_waiting = 0;
        }


        while( VAR_3->b_thread_running && VAR_3->b_thread_paused )
        {
            VAR_6 = 0;
            FUNC_8( &VAR_3->thread_cond, &VAR_3->lock );
        }


        while( VAR_3->b_thread_running
            && VAR_3->circular.i_read >= VAR_3->circular.i_write )
            FUNC_8( &VAR_3->thread_cond, &VAR_3->lock );

        if( !VAR_3->b_thread_running || VAR_3->b_error )
        {
            FUNC_10( &VAR_3->lock );
            break;
        }







        if( VAR_6 != 0 )
            VAR_8 = FUNC_11() - VAR_6 >
                       FUNC_1( VAR_3->i_max_audiotrack_samples ) * 2;
        else
            VAR_8 = 0;

        VAR_9 = VAR_3->circular.i_read % VAR_3->circular.i_size;
        VAR_10 = FUNC_4( VAR_3->circular.i_size - VAR_9,
                             VAR_3->circular.i_write - VAR_3->circular.i_read );

        VAR_7 = FUNC_0( VAR_4, VAR_2, VAR_10, VAR_9,
                                 VAR_8 );
        if( VAR_7 >= 0 )
        {
            if( VAR_3->i_write_type == VAR_0 )
            {
                if( VAR_7 != 0 )
                    VAR_6 = 0;
                else if( VAR_6 == 0 )
                    VAR_6 = FUNC_11();
            }

            if( VAR_7 == 0 )
                VAR_5 = FUNC_11() + FUNC_3( 10000, FUNC_1(
                                  VAR_3->i_max_audiotrack_samples / 5 ) );
            else
                VAR_3->circular.i_read += VAR_7;
        }

        FUNC_6( &VAR_3->aout_cond );
        FUNC_10( &VAR_3->lock );
    }

    if( VAR_3->circular.u.bytebuffer.p_obj )
    {
        (*VAR_4)->DeleteLocalRef( VAR_4, VAR_3->circular.u.bytebuffer.p_obj );
        VAR_3->circular.u.bytebuffer.p_obj = ((void*)0);
    }

    return ((void*)0);
}
