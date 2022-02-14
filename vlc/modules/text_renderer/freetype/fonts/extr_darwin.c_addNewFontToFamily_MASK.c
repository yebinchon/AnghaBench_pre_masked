
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_family_t ;
typedef int filter_t ;
typedef int CTFontDescriptorRef ;
typedef int CFNumberRef ;
typedef int CFDictionaryRef ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,float*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,int ,int,int,int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int *,char*,int,int,char*) ;

void FUNC_7(filter_t *VAR_4, CTFontDescriptorRef VAR_5, char *VAR_6, vlc_family_t *VAR_7)
{
    bool VAR_8 = 0;
    bool VAR_9 = 0;
    CFDictionaryRef VAR_10 = FUNC_3(VAR_5, VAR_2);
    CFNumberRef VAR_11 = FUNC_0(VAR_10, VAR_3);
    float VAR_12 = 0.;
    FUNC_1(VAR_11, VAR_0, &VAR_12);
    VAR_8 = VAR_12 > 0.23;
    VAR_11 = FUNC_0(VAR_10, VAR_1);
    VAR_12 = 0.;
    FUNC_1(VAR_11, VAR_0, &VAR_12);
    VAR_9 = VAR_12 > 0.03;


    FUNC_6(VAR_4, "New font: bold %i italic %i path '%s'", VAR_8, VAR_9, VAR_6);



    FUNC_4(VAR_6, 0, VAR_8, VAR_9, VAR_7);

    FUNC_2(VAR_10);
}
