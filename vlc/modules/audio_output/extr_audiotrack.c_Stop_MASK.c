
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_19__ {TYPE_6__* sys; } ;
typedef TYPE_5__ audio_output_t ;
struct TYPE_16__ {int * p_data; } ;
struct TYPE_17__ {TYPE_2__ bytebuffer; int * p_floatarray; int * p_shortarray; int * p_bytearray; } ;
struct TYPE_18__ {TYPE_3__ u; } ;
struct TYPE_15__ {int * p_obj; } ;
struct TYPE_20__ {int b_thread_running; int b_audiotrack_exception; int i_write_type; int b_error; int b_passthrough; TYPE_4__ circular; TYPE_1__ timestamp; int * p_audiotrack; int lock; int thread; int thread_cond; } ;
typedef TYPE_6__ aout_sys_t ;
struct TYPE_21__ {int (* DeleteGlobalRef ) (TYPE_7__**,int *) ;} ;
typedef TYPE_7__* JNIEnv ;


 int FUNC_0 (char*) ;
 TYPE_7__** FUNC_1 () ;
 int FUNC_2 (int ) ;





 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (TYPE_7__**,int *) ;
 int FUNC_5 (TYPE_7__**,int *) ;
 int FUNC_6 (TYPE_7__**,int *) ;
 int FUNC_7 (TYPE_7__**,int *) ;
 int FUNC_8 (TYPE_7__**,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void
FUNC_13( audio_output_t *VAR_2 )
{
    aout_sys_t *VAR_3 = VAR_2->sys;
    JNIEnv *VAR_4;

    if( !( VAR_4 = FUNC_1() ) )
        return;


    FUNC_11( &VAR_3->lock );
    if( VAR_3->b_thread_running )
    {
        VAR_3->b_thread_running = 0;
        FUNC_9( &VAR_3->thread_cond );
        FUNC_12( &VAR_3->lock );
        FUNC_10( VAR_3->thread, ((void*)0) );
    }
    else
        FUNC_12( &VAR_3->lock );


    if( VAR_3->p_audiotrack )
    {
        if( !VAR_3->b_audiotrack_exception )
        {
            FUNC_2( VAR_1 );
            if( !FUNC_0( "stop" ) )
                FUNC_2( VAR_0 );
        }
        (*VAR_4)->DeleteGlobalRef( VAR_4, VAR_3->p_audiotrack );
        VAR_3->p_audiotrack = ((void*)0);
    }


    if( VAR_3->timestamp.p_obj )
    {
        (*VAR_4)->DeleteGlobalRef( VAR_4, VAR_3->timestamp.p_obj );
        VAR_3->timestamp.p_obj = ((void*)0);
    }


    switch( VAR_3->i_write_type )
    {
    case 132:
    case 131:
        if( VAR_3->circular.u.p_bytearray )
        {
            (*VAR_4)->DeleteGlobalRef( VAR_4, VAR_3->circular.u.p_bytearray );
            VAR_3->circular.u.p_bytearray = ((void*)0);
        }
        break;
    case 128:
        if( VAR_3->circular.u.p_shortarray )
        {
            (*VAR_4)->DeleteGlobalRef( VAR_4, VAR_3->circular.u.p_shortarray );
            VAR_3->circular.u.p_shortarray = ((void*)0);
        }
        break;
    case 129:
        if( VAR_3->circular.u.p_floatarray )
        {
            (*VAR_4)->DeleteGlobalRef( VAR_4, VAR_3->circular.u.p_floatarray );
            VAR_3->circular.u.p_floatarray = ((void*)0);
        }
        break;
    case 130:
        FUNC_3( VAR_3->circular.u.bytebuffer.p_data );
        VAR_3->circular.u.bytebuffer.p_data = ((void*)0);
        break;
    }

    VAR_3->b_audiotrack_exception = 0;
    VAR_3->b_error = 0;
    VAR_3->b_passthrough = 0;
}
