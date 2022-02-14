
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int vlc_fourcc_t ;
typedef int transcode_encoder_config_t ;
struct TYPE_8__ {int i_cat; } ;
typedef TYPE_1__ es_format_t ;




 int VAR_0 ;
 int FUNC_0 (int *,int const*,TYPE_1__ const*,int ,TYPE_1__*) ;
 int FUNC_1 (int *,int const*,TYPE_1__ const*,int ,TYPE_1__*) ;

int FUNC_2( vlc_object_t *VAR_1,
                            const transcode_encoder_config_t *VAR_2,
                            const es_format_t *VAR_3,
                            vlc_fourcc_t VAR_4,
                            es_format_t *VAR_5 )
{
    switch ( VAR_3->i_cat )
    {
        case 128:
            return FUNC_1( VAR_1, VAR_2, VAR_3,
                                                 VAR_4, VAR_5 );
        case 129:
            return FUNC_0( VAR_1, VAR_2, VAR_3,
                                                 VAR_4, VAR_5 );
        default:
            return VAR_0;
    }
}
