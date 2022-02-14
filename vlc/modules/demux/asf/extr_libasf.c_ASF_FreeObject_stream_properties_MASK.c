
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int p_error_correction_data; int p_type_specific_data; } ;
struct TYPE_4__ {TYPE_2__ stream_properties; } ;
typedef TYPE_1__ asf_object_t ;
typedef TYPE_2__ asf_object_stream_properties_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1( asf_object_t *VAR_0 )
{
    asf_object_stream_properties_t *VAR_1 = &VAR_0->stream_properties;

    FUNC_0( VAR_1->p_type_specific_data );
    FUNC_0( VAR_1->p_error_correction_data );
}
