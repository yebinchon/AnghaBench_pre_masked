
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef int jshort ;
typedef int jfloat ;
typedef int jbyte ;
struct TYPE_22__ {size_t i_buffer; scalar_t__ p_buffer; } ;
typedef TYPE_5__ block_t ;
struct TYPE_23__ {TYPE_7__* sys; } ;
typedef TYPE_6__ audio_output_t ;
struct TYPE_19__ {int p_data; } ;
struct TYPE_20__ {TYPE_2__ bytebuffer; int p_floatarray; int p_shortarray; int p_bytearray; } ;
struct TYPE_21__ {size_t i_size; size_t i_write; size_t i_read; TYPE_3__ u; } ;
struct TYPE_18__ {scalar_t__ i_format; } ;
struct TYPE_24__ {int i_write_type; int lock; int thread_cond; int b_thread_waiting; TYPE_4__ circular; scalar_t__ b_error; int aout_cond; TYPE_1__ fmt; int p_chan_table; scalar_t__ i_chans_to_reorder; scalar_t__ b_passthrough; } ;
typedef TYPE_7__ aout_sys_t ;
struct TYPE_25__ {int (* SetFloatArrayRegion ) (TYPE_8__**,int ,size_t,size_t,int *) ;int (* SetShortArrayRegion ) (TYPE_8__**,int ,size_t,size_t,int *) ;int (* SetByteArrayRegion ) (TYPE_8__**,int ,size_t,size_t,int *) ;} ;
typedef TYPE_8__* JNIEnv ;


 scalar_t__ FUNC_0 (TYPE_6__*,TYPE_5__*) ;
 TYPE_8__** FUNC_1 () ;
 scalar_t__ VAR_0 ;





 size_t FUNC_2 (size_t,size_t) ;
 int FUNC_3 (scalar_t__,size_t,scalar_t__,int ,scalar_t__) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (int ,int ,size_t) ;
 int FUNC_6 (TYPE_8__**,int ,size_t,size_t,int *) ;
 int FUNC_7 (TYPE_8__**,int ,size_t,size_t,int *) ;
 int FUNC_8 (TYPE_8__**,int ,size_t,size_t,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void
FUNC_13( audio_output_t *VAR_1, block_t *VAR_2, vlc_tick_t VAR_3 )
{
    JNIEnv *VAR_4 = ((void*)0);
    size_t VAR_5 = 0;
    aout_sys_t *VAR_6 = VAR_1->sys;

    if( VAR_6->b_passthrough && VAR_6->fmt.i_format == VAR_0
     && FUNC_0( VAR_1, VAR_2 ) != 0 )
    {
        FUNC_4(VAR_2);
        return;
    }

    FUNC_11( &VAR_6->lock );

    if( VAR_6->b_error || !( VAR_4 = FUNC_1() ) )
        goto bailout;

    if( VAR_6->i_chans_to_reorder )
       FUNC_3( VAR_2->p_buffer, VAR_2->i_buffer,
                            VAR_6->i_chans_to_reorder, VAR_6->p_chan_table,
                            VAR_6->fmt.i_format );

    while( VAR_5 < VAR_2->i_buffer && !VAR_6->b_error )
    {
        size_t VAR_7;
        size_t VAR_8;
        size_t VAR_9;


        while( !VAR_6->b_error && ( VAR_7 = VAR_6->circular.i_size -
               ( VAR_6->circular.i_write - VAR_6->circular.i_read ) ) == 0 )
            FUNC_10( &VAR_6->aout_cond, &VAR_6->lock );
        if( VAR_6->b_error )
            goto bailout;

        VAR_8 = VAR_6->circular.i_write % VAR_6->circular.i_size;
        VAR_9 = FUNC_2( VAR_2->i_buffer - VAR_5,
                             VAR_6->circular.i_size - VAR_8 );
        VAR_9 = FUNC_2( VAR_9, VAR_7 );

        switch( VAR_6->i_write_type )
        {
        case 132:
        case 131:
            (*VAR_4)->SetByteArrayRegion( VAR_4, VAR_6->circular.u.p_bytearray,
                                        VAR_8, VAR_9,
                                        (jbyte *)VAR_2->p_buffer
                                        + VAR_5);
            break;
        case 128:
            VAR_8 &= ~1;
            VAR_9 &= ~1;
            (*VAR_4)->SetShortArrayRegion( VAR_4, VAR_6->circular.u.p_shortarray,
                                         VAR_8 / 2, VAR_9 / 2,
                                         (jshort *)VAR_2->p_buffer
                                         + VAR_5 / 2);
            break;
        case 129:
            VAR_8 &= ~3;
            VAR_9 &= ~3;
            (*VAR_4)->SetFloatArrayRegion( VAR_4, VAR_6->circular.u.p_floatarray,
                                         VAR_8 / 4, VAR_9 / 4,
                                         (jfloat *)VAR_2->p_buffer
                                         + VAR_5 / 4);

            break;
        case 130:
            FUNC_5( VAR_6->circular.u.bytebuffer.p_data + VAR_8,
                    VAR_2->p_buffer + VAR_5, VAR_9 );
            break;
        }

        VAR_5 += VAR_9;
        VAR_6->circular.i_write += VAR_9;

        if( !VAR_6->b_thread_waiting )
            FUNC_9( &VAR_6->thread_cond );
    }

bailout:
    FUNC_12( &VAR_6->lock );
    FUNC_4( VAR_2 );
    (void) VAR_3;
}
