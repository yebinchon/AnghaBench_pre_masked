
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlc_object_t ;
typedef int vlc_clock_t ;
struct input_decoder_callbacks {int dummy; } ;
typedef int sout_instance_t ;
typedef int input_resource_t ;
typedef int es_format_t ;
typedef int decoder_t ;


 int * FUNC_0 (int *,int *,int *,int *,int *,int,struct input_decoder_callbacks const*,void*) ;

decoder_t *FUNC_1( vlc_object_t *VAR_0, es_format_t *VAR_1,
                             vlc_clock_t *VAR_2, input_resource_t *VAR_3,
                             sout_instance_t *VAR_4, bool VAR_5,
                             const struct input_decoder_callbacks *VAR_6,
                             void *VAR_7)
{
    return FUNC_0( VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
                        VAR_6, VAR_7 );
}
