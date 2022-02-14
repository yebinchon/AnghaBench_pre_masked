
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int audio_output_t ;
typedef scalar_t__ OSStatus ;
typedef int AudioObjectPropertyAddress ;
typedef int AudioObjectID ;


 scalar_t__ FUNC_0 (int ,int const*,int ,int *,size_t,void const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,int ,char const*,int) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int
FUNC_2(audio_output_t *VAR_3, AudioObjectID VAR_4,
              const AudioObjectPropertyAddress *VAR_5, size_t VAR_6,
              const void *VAR_7)
{
    OSStatus VAR_8 =
        FUNC_0(VAR_4, VAR_5, 0, ((void*)0), VAR_6, VAR_7);

    if (VAR_8 != VAR_2)
    {
        FUNC_1(VAR_3, "AudioObjectSetPropertyData failed, device id: %i, "
                 "prop: [%4.4s], OSStatus: %d", VAR_4, (const char *)&VAR_5[0],
                 (int)VAR_8);
        return VAR_0;
    }
    return VAR_1;
}
