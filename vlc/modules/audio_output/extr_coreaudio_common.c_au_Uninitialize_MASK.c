
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int audio_output_t ;
typedef scalar_t__ OSStatus ;
typedef int AudioUnit ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;

void
FUNC_3(audio_output_t *VAR_1, AudioUnit VAR_2)
{
    OSStatus VAR_3 = FUNC_0(VAR_2);
    if (VAR_3 != VAR_0)
        FUNC_1("AudioUnitUninitialize failed");

    FUNC_2(VAR_1);
}
