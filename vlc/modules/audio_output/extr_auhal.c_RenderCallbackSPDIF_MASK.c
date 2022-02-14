
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
struct TYPE_16__ {TYPE_3__* sys; } ;
typedef TYPE_2__ audio_output_t ;
struct TYPE_17__ {size_t i_stream_index; } ;
typedef TYPE_3__ aout_sys_t ;
struct TYPE_18__ {int mFlags; int mHostTime; TYPE_1__* mBuffers; } ;
struct TYPE_15__ {size_t mDataByteSize; int * mData; } ;
typedef int OSStatus ;
typedef TYPE_4__ AudioTimeStamp ;
typedef TYPE_4__ const* AudioDeviceID ;
typedef TYPE_4__ AudioBufferList ;


 int FUNC_0 (TYPE_4__ const*) ;
 int FUNC_1 (TYPE_2__*,int ,int ,int *,size_t) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static OSStatus
FUNC_2(AudioDeviceID VAR_2, const AudioTimeStamp * VAR_3,
                    const AudioBufferList * VAR_4,
                    const AudioTimeStamp * VAR_5,
                    AudioBufferList * VAR_6,
                    const AudioTimeStamp * VAR_7, void *VAR_8)
{
    FUNC_0(VAR_3);
    FUNC_0(VAR_2);
    FUNC_0(VAR_4);
    FUNC_0(VAR_5);
    FUNC_0(VAR_7);

    audio_output_t * VAR_9 = VAR_8;
    aout_sys_t *VAR_10 = VAR_9->sys;
    uint8_t *VAR_11 = VAR_6->mBuffers[VAR_10->i_stream_index].mData;
    size_t VAR_12 = VAR_6->mBuffers[VAR_10->i_stream_index].mDataByteSize;

    uint64_t VAR_13 = (VAR_3->mFlags & VAR_0)
                         ? VAR_3->mHostTime : 0;

    FUNC_1(VAR_9, 0, VAR_13, VAR_11, VAR_12);

    return VAR_1;
}
