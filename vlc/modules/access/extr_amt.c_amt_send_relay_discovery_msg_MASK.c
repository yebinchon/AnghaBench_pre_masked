
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ulNonce ;
struct sockaddr {int dummy; } ;
struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
typedef int chaSendBuffer ;
struct TYPE_6__ {unsigned int glob_ulNonce; int relayDiscoAddr; int sAMT; } ;
typedef TYPE_2__ access_sys_t ;


 int VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (char*,unsigned int*,int) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (TYPE_1__*,char*,char*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*,int,int ,struct sockaddr*,int) ;
 int FUNC_6 (unsigned int) ;
 scalar_t__ FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8( stream_t *VAR_3, char *VAR_4 )
{
    char VAR_5[VAR_0];
    unsigned int VAR_6;
    int VAR_7;
    access_sys_t *VAR_8 = VAR_3->p_sys;


    FUNC_2( VAR_5, 0, sizeof(VAR_5) );
    VAR_6 = 0;
    VAR_7 = 0;
    VAR_5[0] = VAR_1;
    VAR_5[1] = 0;
    VAR_5[2] = 0;
    VAR_5[3] = 0;


    FUNC_6( (unsigned int)FUNC_7(((void*)0)) );
    VAR_6 = FUNC_0( FUNC_4() );
    FUNC_1( &VAR_5[4], &VAR_6, sizeof(VAR_6) );
    VAR_8->glob_ulNonce = VAR_6;


    VAR_7 = FUNC_5( VAR_8->sAMT, VAR_5, sizeof(VAR_5), 0, (struct sockaddr *)&VAR_8->relayDiscoAddr, sizeof(struct sockaddr) );


    if( VAR_7 < 0)
        FUNC_3( VAR_3, "Sendto failed to %s with error %d.", VAR_4, VAR_2);
}
