
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint64_t ;
typedef TYPE_2__ const* UInt32 ;
struct TYPE_15__ {TYPE_1__* mBuffers; } ;
struct TYPE_14__ {int mFlags; int mHostTime; } ;
struct TYPE_13__ {int mDataByteSize; int mData; } ;
typedef int OSStatus ;
typedef TYPE_2__ const AudioUnitRenderActionFlags ;
typedef TYPE_2__ AudioTimeStamp ;
typedef TYPE_5__ AudioBufferList ;


 int FUNC_0 (TYPE_2__ const*) ;
 int FUNC_1 (void*,TYPE_2__ const*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static OSStatus
FUNC_2(void *VAR_2, AudioUnitRenderActionFlags *VAR_3,
               const AudioTimeStamp *VAR_4, UInt32 VAR_5,
               UInt32 VAR_6, AudioBufferList *VAR_7)
{
    FUNC_0(VAR_3);
    FUNC_0(VAR_4);
    FUNC_0(VAR_5);

    uint64_t VAR_8 = (VAR_4->mFlags & VAR_0)
                         ? VAR_4->mHostTime : 0;

    FUNC_1(VAR_2, VAR_6, VAR_8, VAR_7->mBuffers[0].mData,
              VAR_7->mBuffers[0].mDataByteSize);

    return VAR_1;
}
