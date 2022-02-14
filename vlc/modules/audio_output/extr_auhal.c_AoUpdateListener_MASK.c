
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int audio_output_t ;
typedef scalar_t__ OSStatus ;
typedef int AudioObjectPropertyListenerProc ;
typedef int AudioObjectPropertyAddress ;
typedef int AudioObjectID ;


 scalar_t__ FUNC_0 (int ,int const*,int ,void*) ;
 scalar_t__ FUNC_1 (int ,int const*,int ,void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,char*,char*,int ,char const*,int) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int
FUNC_3(audio_output_t *VAR_3, bool VAR_4, AudioObjectID VAR_5,
                 const AudioObjectPropertyAddress *VAR_6,
                 AudioObjectPropertyListenerProc VAR_7, void *VAR_8)
{
    OSStatus VAR_9 = VAR_4 ?
        FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8) :
        FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8);

    if (VAR_9 != VAR_2)
    {
        FUNC_2(VAR_3, "AudioObject%sPropertyListener failed, device id %i, "
                "prop: [%4.4s], OSStatus: %d", VAR_4 ? "Add" : "Remove", VAR_5,
                (const char *)&VAR_6[0], (int)VAR_9);
        return VAR_0;
    }
    return VAR_1;
}
