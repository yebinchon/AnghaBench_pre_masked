
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_11__ {TYPE_4__* sys; } ;
typedef TYPE_3__ audio_output_t ;
struct TYPE_9__ {int p_bytearray; } ;
struct TYPE_10__ {TYPE_1__ u; } ;
struct TYPE_12__ {scalar_t__ i_samples_written; int b_error; scalar_t__ i_max_audiotrack_samples; TYPE_2__ circular; } ;
typedef TYPE_4__ aout_sys_t ;
typedef int JNIEnv ;


 scalar_t__ FUNC_0 (int *,TYPE_3__*) ;
 int FUNC_1 (size_t) ;
 size_t FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ,size_t,size_t) ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_3__*,char*) ;
 int FUNC_7 (TYPE_3__*,char*) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_8( JNIEnv *VAR_1, audio_output_t *VAR_2,
                          size_t VAR_3, size_t VAR_4,
                          bool VAR_5 )
{
    aout_sys_t *VAR_6 = VAR_2->sys;
    uint64_t VAR_7;
    uint64_t VAR_8;
    uint64_t VAR_9;

    VAR_8 = FUNC_0( VAR_1, VAR_2 );

    FUNC_5( VAR_8 <= VAR_6->i_samples_written );
    if( VAR_8 > VAR_6->i_samples_written )
    {
        FUNC_6( VAR_2, "audiotrack position is ahead. Should NOT happen" );
        VAR_6->i_samples_written = 0;
        VAR_6->b_error = 1;
        return 0;
    }
    VAR_9 = VAR_6->i_samples_written - VAR_8;


    if( VAR_5 )
    {
        FUNC_7( VAR_2, "Force write. It may block..." );
        VAR_9 = 0;
    } else if( VAR_9 >= VAR_6->i_max_audiotrack_samples )
        return 0;

    VAR_7 = FUNC_4( VAR_6->i_max_audiotrack_samples - VAR_9,
                       FUNC_1( VAR_3 ) );

    VAR_3 = FUNC_2( VAR_7 );

    return FUNC_3( VAR_0, VAR_6->circular.u.p_bytearray,
                            VAR_4, VAR_3 );
}
