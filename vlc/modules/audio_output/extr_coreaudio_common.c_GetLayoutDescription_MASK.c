
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int audio_output_t ;
typedef int UInt32 ;
struct TYPE_7__ {scalar_t__ mChannelLayoutTag; scalar_t__ mNumberChannelDescriptions; int mChannelBitmap; } ;
typedef scalar_t__ OSStatus ;
typedef int AudioFormatPropertyID ;
typedef int AudioChannelLayoutTag ;
typedef TYPE_1__ AudioChannelLayout ;


 scalar_t__ FUNC_0 (int ,int,void const*,int*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ,int,void const*,int*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (int *,char*) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static AudioChannelLayout *
FUNC_5(audio_output_t *VAR_4,
                     const AudioChannelLayout *VAR_5)
{
    AudioFormatPropertyID VAR_6;
    UInt32 VAR_7;
    const void *VAR_8;


    if (VAR_5->mChannelLayoutTag == VAR_0)
    {
        VAR_6 = VAR_1;
        VAR_7 = sizeof(UInt32);
        VAR_8 = &VAR_5->mChannelBitmap;
    }
    else
    {
        VAR_6 = VAR_2;
        VAR_7 = sizeof(AudioChannelLayoutTag);
        VAR_8 = &VAR_5->mChannelLayoutTag;
    }

    UInt32 VAR_9;
    OSStatus VAR_10 = FUNC_1(VAR_6, VAR_7, VAR_8, &VAR_9);
    if (VAR_10 != VAR_3)
        return ((void*)0);

    AudioChannelLayout *VAR_11 = FUNC_3(VAR_9);
    if (VAR_11 == ((void*)0))
        return ((void*)0);

    VAR_10 = FUNC_0(VAR_6, VAR_7, VAR_8, &VAR_9, VAR_11);
    if (VAR_10 != VAR_3 || VAR_11->mNumberChannelDescriptions == 0)
    {
        FUNC_4(VAR_4, "insufficient number of output channels");
        FUNC_2(VAR_11);
        return ((void*)0);
    }

    return VAR_11;
}
