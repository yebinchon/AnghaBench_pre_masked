
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int audio_output_t ;
typedef int LPCWSTR ;
typedef int IMMDevice ;


 char* FUNC_0 (int *) ;
 char* FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,char*,char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(audio_output_t *VAR_2, LPCWSTR VAR_3,
                               IMMDevice *VAR_4)
{
    char *VAR_5 = FUNC_1(VAR_3);
    if (!VAR_5)
        return VAR_0;

    char *VAR_6 = FUNC_0(VAR_4);
    if (VAR_6 == ((void*)0))
        VAR_6 = VAR_5;

    FUNC_2(VAR_2, VAR_5, VAR_6);

    FUNC_3(VAR_5);
    if (VAR_5 != VAR_6)
        FUNC_3(VAR_6);
    return VAR_1;
}
