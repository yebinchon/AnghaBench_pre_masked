
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;


struct TYPE_20__ {TYPE_6__* sys; } ;
typedef TYPE_5__ audio_output_t ;
struct TYPE_16__ {scalar_t__ p_obj; int p_data; } ;
struct TYPE_17__ {TYPE_1__ bytebuffer; } ;
struct TYPE_18__ {TYPE_2__ u; int i_size; } ;
struct TYPE_21__ {TYPE_3__ circular; } ;
typedef TYPE_6__ aout_sys_t ;
struct TYPE_22__ {int (* ExceptionClear ) (TYPE_7__**) ;scalar_t__ (* ExceptionCheck ) (TYPE_7__**) ;scalar_t__ (* NewDirectByteBuffer ) (TYPE_7__**,int ,int ) ;int (* DeleteLocalRef ) (TYPE_7__**,scalar_t__) ;} ;
struct TYPE_19__ {int ERROR; int WRITE_NON_BLOCKING; } ;
struct TYPE_15__ {TYPE_4__ AudioTrack; } ;
typedef TYPE_7__* JNIEnv ;


 int FUNC_0 (int ,scalar_t__,size_t,int ) ;
 TYPE_12__ VAR_0 ;
 int FUNC_1 (TYPE_7__**,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_7__**,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_7__**) ;
 int FUNC_4 (TYPE_7__**) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_5( JNIEnv *VAR_2, audio_output_t *VAR_3,
                           size_t VAR_4, size_t VAR_5 )
{
    aout_sys_t *VAR_6 = VAR_3->sys;




    if( VAR_5 == 0 )
    {


        if( VAR_6->circular.u.bytebuffer.p_obj )
            (*VAR_2)->DeleteLocalRef( VAR_2, VAR_6->circular.u.bytebuffer.p_obj );

        VAR_6->circular.u.bytebuffer.p_obj = (*VAR_2)->NewDirectByteBuffer( VAR_2,
                                            VAR_6->circular.u.bytebuffer.p_data,
                                            VAR_6->circular.i_size );
        if( !VAR_6->circular.u.bytebuffer.p_obj )
        {
            if( (*VAR_2)->ExceptionCheck( VAR_2 ) )
                (*VAR_2)->ExceptionClear( VAR_2 );
            return VAR_0.AudioTrack.ERROR;
        }
    }

    return FUNC_0( VAR_1, VAR_6->circular.u.bytebuffer.p_obj,
                            VAR_4,
                            VAR_0.AudioTrack.WRITE_NON_BLOCKING );
}
