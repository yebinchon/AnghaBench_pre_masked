
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int dvr ;
struct TYPE_3__ {int i_handle; } ;
typedef TYPE_1__ dvb_sys_t ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (char*,int,char*,unsigned int,unsigned int) ;
 unsigned int FUNC_5 (int *,char*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int ) ;

int FUNC_8( vlc_object_t *VAR_7, dvb_sys_t *VAR_8 )
{
    unsigned int VAR_9, VAR_10;
    char VAR_11[128];

    VAR_9 = FUNC_5( VAR_7, "dvb-adapter" );
    VAR_10 = FUNC_5( VAR_7, "dvb-device" );

    if( FUNC_4( VAR_11, sizeof(VAR_11), VAR_0, VAR_9, VAR_10 )
            >= (int)sizeof(VAR_11) )
    {
        FUNC_2( VAR_7, "snprintf() truncated string for DVR" );
        VAR_11[sizeof(VAR_11) - 1] = '\0';
    }

    FUNC_1( VAR_7, "Opening device %s", VAR_11 );
    if( (VAR_8->i_handle = FUNC_6(VAR_11, VAR_3)) < 0 )
    {
        FUNC_2( VAR_7, "DVROpen: opening device failed: %s",
                 FUNC_7(VAR_6) );
        return VAR_4;
    }

    if( FUNC_0( VAR_8->i_handle, VAR_1, VAR_2 ) == -1 )
    {
        FUNC_3( VAR_7, "DVROpen: couldn't set non-blocking mode: %s",
                  FUNC_7(VAR_6) );
    }

    return VAR_5;
}
