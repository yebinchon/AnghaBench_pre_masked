
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int uint8_t ;
struct TYPE_5__ {TYPE_2__* p_dec_config; } ;
typedef TYPE_1__ od_read_params_t ;
struct TYPE_6__ {int i_streamType; int i_extra; void* i_objectTypeIndication; } ;
typedef TYPE_2__ decoder_config_descriptor_t ;


 void* FUNC_0 (unsigned int*,int const**,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned int*,int const**,int ,int,TYPE_1__) ;
 int FUNC_2 (int *,char*,void*,int,int ) ;

__attribute__((used)) static bool FUNC_3( vlc_object_t *VAR_1, unsigned VAR_2, const uint8_t *VAR_3,
                                    od_read_params_t VAR_4 )
{
    decoder_config_descriptor_t *VAR_5 = VAR_4.p_dec_config;

    if( VAR_2 < 13 )
        return 0;

    VAR_5->i_objectTypeIndication = FUNC_0( &VAR_2, &VAR_3, 1 );
    uint8_t VAR_6 = FUNC_0( &VAR_2, &VAR_3, 1 );
    VAR_5->i_streamType = VAR_6 >> 2;

    FUNC_0( &VAR_2, &VAR_3, 3 );
    FUNC_0( &VAR_2, &VAR_3, 4 );
    FUNC_0( &VAR_2, &VAR_3, 4 );


    FUNC_1( VAR_1, &VAR_2, &VAR_3,
                   VAR_0, 1, VAR_4 );

    FUNC_2( VAR_1, "   * read decoder objecttype: %x streamtype:%x extra: %u",
               VAR_5->i_objectTypeIndication, VAR_5->i_streamType, VAR_5->i_extra );

    return 1;
}
