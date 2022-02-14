
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * p_address; } ;
typedef TYPE_1__ vlc_value_t ;
typedef int vlc_object_t ;
typedef int audio_output_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static int FUNC_1 (vlc_object_t *VAR_1, const char *VAR_2,
                              vlc_value_t VAR_3, vlc_value_t VAR_4, void *VAR_5)
{
    if( VAR_4.p_address != ((void*)0) )
        FUNC_0((audio_output_t *)VAR_1, VAR_4.p_address );
    (void) VAR_2; (void) VAR_5; (void) VAR_3;
    return VAR_0;
}
