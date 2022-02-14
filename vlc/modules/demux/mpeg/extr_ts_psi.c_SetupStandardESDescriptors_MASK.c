
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int i_bitrate; int i_cat; } ;
struct TYPE_13__ {TYPE_1__ fmt; } ;
typedef TYPE_2__ ts_es_t ;
struct TYPE_14__ {TYPE_5__* p_first_descriptor; } ;
typedef TYPE_3__ dvbpsi_pmt_es_t ;
struct TYPE_15__ {int i_max_bitrate; } ;
typedef TYPE_4__ dvbpsi_max_bitrate_dr_t ;
struct TYPE_16__ {int i_tag; struct TYPE_16__* p_next; } ;
typedef TYPE_5__ dvbpsi_descriptor_t ;
typedef int demux_t ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_2__*,TYPE_5__*) ;
 TYPE_4__* FUNC_1 (TYPE_5__*) ;

__attribute__((used)) static void FUNC_2( demux_t *VAR_1, ts_es_t *VAR_2,
                                        const dvbpsi_pmt_es_t *VAR_3 )
{
    for( dvbpsi_descriptor_t *VAR_4 = VAR_3->p_first_descriptor;
                              VAR_4; VAR_4 = VAR_4->p_next )
    {
        switch( VAR_4->i_tag )
        {
            case 0x0a:
                if( VAR_2->fmt.i_cat == VAR_0 )
                    FUNC_0( VAR_1, VAR_2, VAR_4 );
                break;

            case 0x0E:
            {
                dvbpsi_max_bitrate_dr_t *VAR_5 = FUNC_1( VAR_4 );
                if( VAR_5 && !VAR_2->fmt.i_bitrate )
                    VAR_2->fmt.i_bitrate = VAR_5->i_max_bitrate * 50 * 8;
            }
            break;
        }
    }
}
