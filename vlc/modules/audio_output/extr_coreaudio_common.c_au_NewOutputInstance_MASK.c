
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int audio_output_t ;
struct TYPE_3__ {int componentFlagsMask; int componentFlags; int componentManufacturer; int componentSubType; int componentType; } ;
typedef int OSType ;
typedef scalar_t__ OSStatus ;
typedef int * AudioUnit ;
typedef TYPE_1__ AudioComponentDescription ;
typedef int * AudioComponent ;


 int * FUNC_0 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *,int **) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ VAR_2 ;

AudioUnit
FUNC_4(audio_output_t *VAR_3, OSType VAR_4)
{
    AudioComponentDescription VAR_5 = {
        .componentType = VAR_1,
        .componentSubType = VAR_4,
        .componentManufacturer = VAR_0,
        .componentFlags = 0,
        .componentFlagsMask = 0,
    };

    AudioComponent VAR_6;
    VAR_6 = FUNC_0(((void*)0), &VAR_5);
    if (VAR_6 == ((void*)0))
    {
        FUNC_3(VAR_3, "cannot find any AudioComponent, PCM output failed");
        return ((void*)0);
    }

    AudioUnit VAR_7;
    OSStatus VAR_8 = FUNC_1(VAR_6, &VAR_7);
    if (VAR_8 != VAR_2)
    {
        FUNC_2("cannot open AudioComponent, PCM output failed");
        return ((void*)0);
    }
    return VAR_7;
}
