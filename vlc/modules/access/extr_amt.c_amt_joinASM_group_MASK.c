
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int s_addr; } ;
struct TYPE_8__ {int s_addr; } ;
struct ip_mreq {TYPE_4__ imr_interface; TYPE_1__ imr_multiaddr; } ;
struct TYPE_12__ {TYPE_6__* p_sys; } ;
typedef TYPE_5__ stream_t ;
typedef int imr ;
struct TYPE_9__ {int s_addr; } ;
struct TYPE_10__ {TYPE_2__ sin_addr; } ;
struct TYPE_13__ {int sAMT; TYPE_3__ mcastGroupAddr; } ;
typedef TYPE_6__ access_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*,int) ;

__attribute__((used)) static int FUNC_1( stream_t *VAR_3 )
{
    struct ip_mreq VAR_4;
    access_sys_t *VAR_5 = VAR_3->p_sys;

    VAR_4.imr_multiaddr.s_addr = VAR_5->mcastGroupAddr.sin_addr.s_addr;
    VAR_4.imr_interface.s_addr = VAR_0;

    return FUNC_0( VAR_5->sAMT, VAR_1, VAR_2, (char *)&VAR_4, sizeof(VAR_4) );
}
