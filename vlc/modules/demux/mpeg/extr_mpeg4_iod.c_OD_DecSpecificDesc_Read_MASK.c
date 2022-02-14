
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int uint8_t ;
struct TYPE_4__ {TYPE_2__* p_dec_config; } ;
typedef TYPE_1__ od_read_params_t ;
struct TYPE_5__ {unsigned int i_extra; scalar_t__ p_extra; } ;
typedef TYPE_2__ decoder_config_descriptor_t ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (scalar_t__,int const*,unsigned int) ;

__attribute__((used)) static bool FUNC_3( vlc_object_t *VAR_0, unsigned VAR_1, const uint8_t *VAR_2,
                                      od_read_params_t VAR_3 )
{
    FUNC_0(VAR_0);
    decoder_config_descriptor_t *VAR_4 = VAR_3.p_dec_config;

    VAR_4->p_extra = FUNC_1( VAR_1 );
    if( VAR_4->p_extra )
    {
        VAR_4->i_extra = VAR_1;
        FUNC_2( VAR_4->p_extra, VAR_2, VAR_4->i_extra );
    }

    return !!VAR_4->i_extra;
}
