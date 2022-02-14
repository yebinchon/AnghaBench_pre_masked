
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct pollfd {int events; int fd; } ;
struct TYPE_10__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ stream_t ;
typedef scalar_t__ ssize_t ;
struct TYPE_9__ {char type; char max_resp_code; scalar_t__ checksum; scalar_t__ ssmIP; char s_qrv; int qqic; scalar_t__ nSrc; } ;
struct TYPE_8__ {scalar_t__ type; scalar_t__* uchaMAC; scalar_t__ ulRcvedNonce; } ;
struct TYPE_11__ {scalar_t__ glob_ulNonce; TYPE_2__ relay_igmp_query; int updateTimer; TYPE_1__ relay_mem_query_msg; int sAMT; int timeout; } ;
typedef TYPE_4__ access_sys_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__*,char*,int) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (TYPE_3__*,char*) ;
 int FUNC_5 (TYPE_3__*,char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (int ,char*,int,int ) ;
 int FUNC_7 (struct pollfd*,int,int ) ;
 int FUNC_8 (int ,int,int ,int ) ;

__attribute__((used)) static bool FUNC_9( stream_t *VAR_7 )
{
    char VAR_8[VAR_6];
    FUNC_3( VAR_8, 0, VAR_6 );
    struct pollfd VAR_9[1];
    access_sys_t *VAR_10 = VAR_7->p_sys;

    VAR_9[0].fd = VAR_10->sAMT;
    VAR_9[0].events = VAR_5;

    switch( FUNC_7(VAR_9, 1, VAR_10->timeout) )
    {
        case 0:
            FUNC_4(VAR_7, "AMT relay membership query receive time-out");

        case -1:
            return 0;
    }

    ssize_t VAR_11 = FUNC_6( VAR_10->sAMT, VAR_8, VAR_6, 0 );

    if (VAR_11 < 0 || VAR_11 != VAR_6)
    {
        FUNC_4(VAR_7, "length less than zero");
        return 0;
    }

    FUNC_2( &VAR_10->relay_mem_query_msg.type, &VAR_8[0], VAR_3 );

    FUNC_2( &VAR_10->relay_mem_query_msg.uchaMAC[0], &VAR_8[VAR_0], VAR_2 );
    FUNC_2( &VAR_10->relay_mem_query_msg.ulRcvedNonce, &VAR_8[VAR_0 + VAR_2], VAR_4 );
    if( VAR_10->relay_mem_query_msg.ulRcvedNonce != VAR_10->glob_ulNonce )
    {
        FUNC_5( VAR_7, "Nonces are different rcvd: %x glob: %x", VAR_10->relay_mem_query_msg.ulRcvedNonce, VAR_10->glob_ulNonce );
        return 0;
    }

    size_t VAR_12 = VAR_0 + VAR_2 + VAR_4 + VAR_1;
    VAR_10->relay_igmp_query.type = VAR_8[VAR_12];
    VAR_12++; FUNC_1( VAR_12 < VAR_6);
    VAR_10->relay_igmp_query.max_resp_code = VAR_8[VAR_12];
    VAR_12++; FUNC_1( VAR_12 < VAR_6);
    FUNC_2( &VAR_10->relay_igmp_query.checksum, &VAR_8[VAR_12], 2 );
    VAR_12 += 2; FUNC_1( VAR_12 < VAR_6);
    FUNC_2( &VAR_10->relay_igmp_query.ssmIP, &VAR_8[VAR_12], 4 );
    VAR_12 += 4; FUNC_1( VAR_12 < VAR_6);
    VAR_10->relay_igmp_query.s_qrv = VAR_8[VAR_12];
    VAR_12++; FUNC_1( VAR_12 < VAR_6);
    if( VAR_8[VAR_12] == 0 )
        VAR_10->relay_igmp_query.qqic = 125;
    else
        VAR_10->relay_igmp_query.qqic = VAR_8[VAR_12];

    VAR_12++; FUNC_1( VAR_12 < VAR_6);
    FUNC_2( &VAR_10->relay_igmp_query.nSrc, &VAR_8[VAR_12], 2 );


    FUNC_8( VAR_10->updateTimer, 0,
                        FUNC_0( VAR_10->relay_igmp_query.qqic ), 0 );

    return 1;
}
