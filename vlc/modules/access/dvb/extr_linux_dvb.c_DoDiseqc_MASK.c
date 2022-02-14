
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_13__ {int* msg; } ;
struct TYPE_12__ {int member_0; int member_1; int member_2; int member_3; int member_4; int member_5; } ;
struct TYPE_11__ {int member_1; TYPE_2__ member_0; } ;
struct diseqc_cmd_t {int wait; TYPE_3__ cmd; int member_1; TYPE_1__ member_0; } ;
typedef scalar_t__ fe_sec_voltage_t ;
typedef TYPE_3__* fe_sec_tone_mode_t ;
struct TYPE_14__ {int i_frontend_handle; } ;
typedef TYPE_4__ dvb_sys_t ;


 TYPE_3__* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* VAR_5 ;
 TYPE_3__* VAR_6 ;
 TYPE_3__* VAR_7 ;
 TYPE_3__* VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int) ;
 int VAR_11 ;
 scalar_t__ FUNC_3 (int ,int ,...) ;
 int FUNC_4 (int *,char*,char*,...) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,char*,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10( vlc_object_t *VAR_12, dvb_sys_t *VAR_13 )
{
    int VAR_14;
    bool VAR_15;
    int VAR_16, VAR_17;
    fe_sec_voltage_t VAR_18;
    fe_sec_tone_mode_t VAR_19;

    VAR_16 = FUNC_6( VAR_12, "dvb-frequency" );
    VAR_17 = FUNC_6( VAR_12, "dvb-lnb-slof" );

    VAR_14 = FUNC_6( VAR_12, "dvb-tone" );
    if( VAR_14 == -1 )
    {
        if( VAR_16 >= VAR_17 )
            VAR_14 = 1;
        else
            VAR_14 = 0;
        FUNC_7( VAR_12, "dvb-tone", VAR_14 );
    }

    VAR_18 = FUNC_1( VAR_12 );
    VAR_19 = FUNC_0( VAR_12 );


    if( FUNC_3( VAR_13->i_frontend_handle, VAR_3, VAR_7 ) < 0 )
    {
        FUNC_4( VAR_12, "switching tone %s error: %s", "off",
                 FUNC_8(VAR_11) );
        return VAR_10;
    }


    if( FUNC_3( VAR_13->i_frontend_handle, VAR_4, VAR_18 ) < 0 )
    {
        FUNC_4( VAR_12, "voltage error: %s", FUNC_8(VAR_11) );
        return VAR_10;
    }

    VAR_15 = FUNC_5( VAR_12, "dvb-high-voltage" );
    if( FUNC_3( VAR_13->i_frontend_handle,
               VAR_2, VAR_15 ) < 0 && VAR_15 )
    {
        FUNC_4( VAR_12, "high LNB voltage error: %s",
                 FUNC_8(VAR_11) );
    }


    FUNC_9(FUNC_2(15));

    VAR_14 = FUNC_6( VAR_12, "dvb-satno" );
    if( VAR_14 > 0 && VAR_14 < 5 )
    {





        struct diseqc_cmd_t VAR_20 = { {{0xe0, 0x10, 0x38, 0xf0, 0x00, 0x00}, 4}, 0 };




        VAR_20.cmd.msg[3] = 0xf0
                          | (((VAR_14 - 1) * 4) & 0xc)
                          | (VAR_18 == VAR_9 ? 0 : 2)
                          | (VAR_19 == VAR_8 ? 1 : 0);

        if( FUNC_3( VAR_13->i_frontend_handle, VAR_1,
                   &VAR_20.cmd ) )
        {
            FUNC_4( VAR_12, "master command sending error: %s",
                     FUNC_8(VAR_11) );
            return VAR_10;
        }

        FUNC_9(FUNC_2(15 + VAR_20.wait));


        if( FUNC_3( VAR_13->i_frontend_handle, VAR_0,
                  ((VAR_14 - 1) % 2) ? VAR_6 : VAR_5 ) )
        {
            FUNC_4( VAR_12, "burst sending error: %s",
                     FUNC_8(VAR_11) );
            return VAR_10;
        }

        FUNC_9(FUNC_2(15));
    }

    if( FUNC_3( VAR_13->i_frontend_handle, VAR_3, VAR_19 ) )
    {
        FUNC_4( VAR_12, "switching tone %s error: %s",
                 (VAR_19 == VAR_8) ? "on" : "off",
                 FUNC_8(VAR_11) );
        return VAR_10;
    }

    FUNC_9(FUNC_2(50));
    return 0;
}
