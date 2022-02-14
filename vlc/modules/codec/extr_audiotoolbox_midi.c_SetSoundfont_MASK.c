
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int url ;
typedef int decoder_t ;
typedef int UInt8 ;
typedef scalar_t__ OSStatus ;
typedef int * CFURLRef ;
typedef int AudioUnit ;


 scalar_t__ FUNC_0 (int ,int ,int ,int ,int **,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int const*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,char*,scalar_t__) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(decoder_t *VAR_7, AudioUnit VAR_8, const char *VAR_9) {
    if (!VAR_9) {
        FUNC_3(VAR_7, "using default soundfont");
        return VAR_2;
    }

    FUNC_3(VAR_7, "using custom soundfont: '%s'", VAR_9);
    CFURLRef VAR_10 = FUNC_2(VAR_4,
                                                           (const UInt8 *)VAR_9,
                                                           FUNC_5(VAR_9), 0);
    if (FUNC_6(VAR_10 == ((void*)0)))
        return VAR_1;

    OSStatus VAR_11 = FUNC_0(VAR_8,
                                           VAR_5,
                                           VAR_3, 0,
                                           &VAR_10, sizeof(VAR_10));
    FUNC_1(VAR_10);

    if (VAR_11 != VAR_6) {
        FUNC_4(VAR_7, "failed setting custom SoundFont for MIDI synthesis (%i)", VAR_11);
        return VAR_0;
    }
    return VAR_2;
}
