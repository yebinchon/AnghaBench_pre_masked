
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_10__ {scalar_t__* psz_language; scalar_t__ i_priority; scalar_t__* psz_description; } ;
struct TYPE_11__ {TYPE_1__ fmt; } ;
typedef TYPE_2__ ts_es_t ;
typedef int dvbpsi_pmt_es_t ;
struct TYPE_12__ {int i_length; int* p_data; } ;
typedef TYPE_3__ dvbpsi_descriptor_t ;
struct TYPE_13__ {TYPE_5__* p_sys; } ;
typedef TYPE_4__ demux_t ;
struct TYPE_14__ {scalar_t__ standard; } ;
typedef TYPE_5__ demux_sys_t ;


 size_t FUNC_0 (char const**) ;




 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* FUNC_1 (int const*,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (scalar_t__*) ;
 scalar_t__* FUNC_3 (int) ;
 int FUNC_4 (scalar_t__*,int*,int) ;
 int FUNC_5 (TYPE_4__*,char*,scalar_t__*) ;
 scalar_t__* FUNC_6 (char const*) ;

__attribute__((used)) static void FUNC_7( demux_t *VAR_4, ts_es_t *VAR_5,
                                           const dvbpsi_pmt_es_t *VAR_6 )
{
    demux_sys_t *VAR_7 = VAR_4->p_sys;

    if( VAR_7->standard == VAR_2 ||
        VAR_7->standard == VAR_3 )
    {
        const dvbpsi_descriptor_t *VAR_8 = FUNC_1( VAR_6, 0x7F );
        if( VAR_8 && VAR_8->i_length > 1 && VAR_8->p_data[0] == 0x06 )
        {
            static const char *VAR_9[] = {
                129,
                131,
                130,
                128,
            };

            uint8_t VAR_10 = (VAR_8->p_data[1] & 0x7F) >> 2;

            if( VAR_10 < FUNC_0(VAR_9) )
            {
                FUNC_2( VAR_5->fmt.psz_description );
                VAR_5->fmt.psz_description = FUNC_6(VAR_9[VAR_10]);
            }

            if( VAR_10 == 0x00 )
                VAR_5->fmt.i_priority = VAR_1 + 1;

            if( (VAR_8->p_data[1] & 0x80) == 0x00 )
                VAR_5->fmt.i_priority = VAR_0;

            if( (VAR_8->p_data[1] & 0x01) && VAR_8->i_length >= 5 )
            {
                FUNC_2( VAR_5->fmt.psz_language );
                VAR_5->fmt.psz_language = FUNC_3( 4 );
                if( VAR_5->fmt.psz_language )
                {
                    FUNC_4( VAR_5->fmt.psz_language, &VAR_8->p_data[2], 3 );
                    VAR_5->fmt.psz_language[3] = 0;
                    FUNC_5( VAR_4, "      found language: %s", VAR_5->fmt.psz_language );
                }
            }
        }
    }
}
