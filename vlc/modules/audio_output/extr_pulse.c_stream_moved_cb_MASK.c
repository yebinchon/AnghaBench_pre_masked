
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pa_stream ;
typedef int audio_output_t ;


 int FUNC_0 (int *,char const*) ;
 int FUNC_1 (int *,char*,char const*) ;
 char* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(pa_stream *VAR_0, void *VAR_1)
{
    audio_output_t *VAR_2 = VAR_1;
    const char *VAR_3 = FUNC_2(VAR_0);

    FUNC_1(VAR_2, "connected to sink %s", VAR_3);
    FUNC_0(VAR_2, VAR_3);
}
