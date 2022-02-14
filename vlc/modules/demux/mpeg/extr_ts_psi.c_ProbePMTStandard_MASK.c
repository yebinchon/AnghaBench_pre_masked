
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint16_t ;
typedef int ts_standards_e ;
struct TYPE_8__ {TYPE_2__* p_first_es; } ;
typedef TYPE_1__ dvbpsi_pmt_t ;
struct TYPE_9__ {int i_type; struct TYPE_9__* p_next; } ;
typedef TYPE_2__ dvbpsi_pmt_es_t ;
struct TYPE_10__ {int i_length; int p_data; } ;
typedef TYPE_3__ dvbpsi_descriptor_t ;


 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (TYPE_2__*,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static ts_standards_e FUNC_3( const dvbpsi_pmt_t *VAR_2 )
{
    dvbpsi_pmt_es_t *VAR_3;
    for( VAR_3 = VAR_2->p_first_es; VAR_3; VAR_3 = VAR_3->p_next )
    {
        if( VAR_3->i_type == 0x06 )
        {

            dvbpsi_descriptor_t *VAR_4 = FUNC_1( VAR_3, 0xFD );
            if( VAR_4 && VAR_4->i_length >= 2 )
            {
                const uint16_t VAR_5 = FUNC_0(VAR_4->p_data);
                if( ( VAR_5 == 0x0008 &&
                      FUNC_2( VAR_3, 0x30, 0x37 ) ) ||
                    ( VAR_5 == 0x0012 &&
                      FUNC_2( VAR_3, 0x87, 0x88 ) ) )
                    return VAR_0;
            }
        }
    }
    return VAR_1;
}
