
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int i_profile; } ;
struct TYPE_7__ {TYPE_2__ fmt; } ;
typedef TYPE_1__ ts_es_t ;
typedef TYPE_2__ es_format_t ;
struct TYPE_9__ {int i_type; int i_pid; } ;
typedef TYPE_3__ dvbpsi_pmt_es_t ;
typedef int demux_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (int *,char*,int ,int) ;

__attribute__((used)) static bool FUNC_2( demux_t *VAR_12, ts_es_t *VAR_13,
                            const dvbpsi_pmt_es_t *VAR_14 )
{
    es_format_t *VAR_15 = &VAR_13->fmt;


    switch( VAR_14->i_type )
    {
    case 0x80:
        FUNC_0( VAR_15, VAR_0, VAR_5 );
        break;
    case 0x81:
        FUNC_0( VAR_15, VAR_0, VAR_4 );
        break;
    case 0x85:
    case 0x86:
        FUNC_0( VAR_15, VAR_0, VAR_8 );
        VAR_15->i_profile = VAR_1;
        break;
    case 0x82:
    case 0xA2:
        FUNC_0( VAR_15, VAR_0, VAR_8 );
        break;

    case 0x83:
        FUNC_0( VAR_15, VAR_0, VAR_10 );
        break;

    case 0x84:
    case 0xA1:
        FUNC_0( VAR_15, VAR_0, VAR_9 );
        break;
    case 0x90:
        FUNC_0( VAR_15, VAR_2, VAR_6 );
        break;
    case 0x91:
        return 0;
    case 0x92:
        FUNC_0( VAR_15, VAR_2, VAR_7 );
        break;
    case 0xEA:
        FUNC_0( VAR_15, VAR_3, VAR_11 );
        break;
    default:
        FUNC_1( VAR_12, "HDMV registration not implemented for pid 0x%x type 0x%x",
                  VAR_14->i_pid, VAR_14->i_type );
        return 0;
    }
    return 1;
}
