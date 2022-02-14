
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int audio_output_t ;
typedef scalar_t__ OSStatus ;
typedef int Boolean ;
typedef int AudioObjectPropertyAddress ;
typedef int AudioObjectID ;


 scalar_t__ FUNC_0 (int ,int const*,int*) ;
 int FUNC_1 (int *,char*,int ,char const*,int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static bool
FUNC_2(audio_output_t *VAR_1, AudioObjectID VAR_2,
                     const AudioObjectPropertyAddress *VAR_3)
{
    Boolean VAR_4;
    OSStatus VAR_5 = FUNC_0(VAR_2, VAR_3, &VAR_4);
    if (VAR_5 != VAR_0)
    {
        FUNC_1(VAR_1, "AudioObjectIsPropertySettable failed, device id: %i, "
                 "prop: [%4.4s], OSStatus: %d", VAR_2, (const char *)&VAR_3[0],
                 (int)VAR_5);
        return 0;
    }
    return VAR_4;
}
