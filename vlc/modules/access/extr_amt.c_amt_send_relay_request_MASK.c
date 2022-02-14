
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
typedef int chaSendBuffer ;
struct TYPE_6__ {int sAMT; scalar_t__ glob_ulNonce; } ;
typedef TYPE_2__ access_sys_t ;


 char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,scalar_t__*,int) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (TYPE_1__*,char*,char*,int ) ;
 int FUNC_3 (int ,char*,int,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5( stream_t *VAR_3, char *VAR_4 )
{
    char VAR_5[VAR_1];
    uint32_t VAR_6;
    int VAR_7;
    access_sys_t *VAR_8 = VAR_3->p_sys;

    FUNC_1( VAR_5, 0, sizeof(VAR_5) );

    VAR_6 = 0;
    VAR_7 = 0;
    VAR_5[0] = VAR_0;
    VAR_5[1] = 0;
    VAR_5[2] = 0;
    VAR_5[3] = 0;

    VAR_6 = VAR_8->glob_ulNonce;
    FUNC_0( &VAR_5[4], &VAR_6, sizeof(uint32_t) );

    VAR_7 = FUNC_3( VAR_8->sAMT, VAR_5, sizeof(VAR_5), 0 );

    if( VAR_7 < 0 )
        FUNC_2(VAR_3, "Error sending relay request to %s error: %s", VAR_4, FUNC_4(VAR_2) );
}
