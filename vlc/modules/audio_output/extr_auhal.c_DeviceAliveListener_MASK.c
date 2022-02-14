
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int audio_output_t ;
typedef int const* UInt32 ;
typedef int OSStatus ;
typedef int AudioObjectPropertyAddress ;
typedef int const* AudioObjectID ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char*) ;
 int VAR_1 ;

__attribute__((used)) static OSStatus
FUNC_3(AudioObjectID VAR_2, UInt32 VAR_3,
                    const AudioObjectPropertyAddress VAR_4[],
                    void *VAR_5)
{
    FUNC_0(VAR_2);
    FUNC_0(VAR_3);
    FUNC_0(VAR_4);

    audio_output_t *VAR_6 = (audio_output_t *)VAR_5;
    if (!VAR_6)
        return -1;

    FUNC_2(VAR_6, "audio device died, resetting aout");
    FUNC_1(VAR_6, VAR_0);

    return VAR_1;
}
