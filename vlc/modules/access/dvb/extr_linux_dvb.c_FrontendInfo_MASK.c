
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_7__ {int type; int caps; int notifier_delay; int symbol_rate_tolerance; int symbol_rate_max; int symbol_rate_min; int frequency_tolerance; int frequency_stepsize; int frequency_max; int frequency_min; int name; } ;
struct TYPE_5__ {TYPE_3__ info; } ;
typedef TYPE_1__ frontend_t ;
struct TYPE_6__ {int i_frontend_handle; TYPE_1__* p_frontend; } ;
typedef TYPE_2__ dvb_sys_t ;



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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;





 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 scalar_t__ FUNC_0 (int ,int ,TYPE_3__*) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4( vlc_object_t *VAR_33, dvb_sys_t *VAR_34 )
{
    frontend_t *VAR_35 = VAR_34->p_frontend;


    if( FUNC_0( VAR_34->i_frontend_handle, VAR_27, &VAR_35->info ) < 0 )
    {
        FUNC_2( VAR_33, "frontend info request error: %s",
                 FUNC_3(VAR_32) );
        return VAR_30;
    }


    FUNC_1(VAR_33, "Frontend Info:" );
    FUNC_1(VAR_33, "  name = %s", VAR_35->info.name );
    switch( VAR_35->info.type )
    {
        case 128:
            FUNC_1( VAR_33, "  type = QPSK (DVB-S)" );
            break;
        case 129:
            FUNC_1( VAR_33, "  type = QAM (DVB-C)" );
            break;
        case 130:
            FUNC_1( VAR_33, "  type = OFDM (DVB-T)" );
            break;
        case 133:
            FUNC_1( VAR_33, "  type = ATSC (USA)" );
            break;
        default:
            FUNC_2( VAR_33, "  unknown frontend type (%d)",
                     VAR_35->info.type );
            return VAR_30;
    }
    FUNC_1(VAR_33, "  frequency_min = %u (kHz)",
            VAR_35->info.frequency_min);
    FUNC_1(VAR_33, "  frequency_max = %u (kHz)",
            VAR_35->info.frequency_max);
    FUNC_1(VAR_33, "  frequency_stepsize = %u",
            VAR_35->info.frequency_stepsize);
    FUNC_1(VAR_33, "  frequency_tolerance = %u",
            VAR_35->info.frequency_tolerance);
    FUNC_1(VAR_33, "  symbol_rate_min = %u (kHz)",
            VAR_35->info.symbol_rate_min);
    FUNC_1(VAR_33, "  symbol_rate_max = %u (kHz)",
            VAR_35->info.symbol_rate_max);
    FUNC_1(VAR_33, "  symbol_rate_tolerance (ppm) = %u",
            VAR_35->info.symbol_rate_tolerance);
    FUNC_1(VAR_33, "  notifier_delay (ms) = %u",
            VAR_35->info.notifier_delay );

    FUNC_1(VAR_33, "Frontend Info capability list:");
    if( VAR_35->info.caps == VAR_29)
        FUNC_1(VAR_33, "  no capabilities - frontend is stupid!");
    if( VAR_35->info.caps & VAR_15)
        FUNC_1(VAR_33, "  inversion auto");
    if( VAR_35->info.caps & VAR_4)
        FUNC_1(VAR_33, "  forward error correction 1/2");
    if( VAR_35->info.caps & VAR_5)
        FUNC_1(VAR_33, "  forward error correction 2/3");
    if( VAR_35->info.caps & VAR_6)
        FUNC_1(VAR_33, "  forward error correction 3/4");
    if( VAR_35->info.caps & VAR_7)
        FUNC_1(VAR_33, "  forward error correction 4/5");
    if( VAR_35->info.caps & VAR_8)
        FUNC_1(VAR_33, "  forward error correction 5/6");
    if( VAR_35->info.caps & VAR_9)
        FUNC_1(VAR_33, "  forward error correction 6/7");
    if( VAR_35->info.caps & VAR_10)
        FUNC_1(VAR_33, "  forward error correction 7/8");
    if( VAR_35->info.caps & VAR_11)
        FUNC_1(VAR_33, "  forward error correction 8/9");
    if( VAR_35->info.caps & VAR_12)
        FUNC_1(VAR_33, "  forward error correction auto");
    if( VAR_35->info.caps & VAR_23)
        FUNC_1(VAR_33, "  QPSK modulation");
    if( VAR_35->info.caps & VAR_18)
        FUNC_1(VAR_33, "  QAM 16 modulation");
    if( VAR_35->info.caps & VAR_20)
        FUNC_1(VAR_33, "  QAM 32 modulation");
    if( VAR_35->info.caps & VAR_21)
        FUNC_1(VAR_33, "  QAM 64 modulation");
    if( VAR_35->info.caps & VAR_17)
        FUNC_1(VAR_33, "  QAM 128 modulation");
    if( VAR_35->info.caps & VAR_19)
        FUNC_1(VAR_33, "  QAM 256 modulation");
    if( VAR_35->info.caps & VAR_22)
        FUNC_1(VAR_33, "  QAM auto modulation");
    if( VAR_35->info.caps & VAR_25)
        FUNC_1(VAR_33, "  transmission mode auto");
    if( VAR_35->info.caps & VAR_3)
        FUNC_1(VAR_33, "  bandwidth mode auto");
    if( VAR_35->info.caps & VAR_13)
        FUNC_1(VAR_33, "  guard interval mode auto");
    if( VAR_35->info.caps & VAR_14)
        FUNC_1(VAR_33, "  hierarchy mode auto");
    if( VAR_35->info.caps & VAR_2)
        FUNC_1(VAR_33, "  8-level VSB modulation");
    if( VAR_35->info.caps & VAR_0)
        FUNC_1(VAR_33, "  16-level VSB modulation");
    if( VAR_35->info.caps & VAR_28)
        FUNC_1(VAR_33, "  extended capabilities");
    if( VAR_35->info.caps & VAR_1)
        FUNC_1(VAR_33, "  2nd generation modulation (DVB-S2)");

    if( VAR_35->info.caps & VAR_24)
        FUNC_1(VAR_33, "  cable unplug recovery");
    if( VAR_35->info.caps & VAR_16)
        FUNC_1(VAR_33, "  spurious TS muting");
   FUNC_1(VAR_33, "End of capability list");

    return VAR_31;
}
