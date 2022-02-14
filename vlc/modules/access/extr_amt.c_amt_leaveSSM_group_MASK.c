
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_17__ {int s_addr; } ;
struct TYPE_14__ {int s_addr; } ;
struct TYPE_11__ {int s_addr; } ;
struct ip_mreq_source {TYPE_7__ imr_interface; TYPE_4__ imr_sourceaddr; TYPE_1__ imr_multiaddr; } ;
struct TYPE_18__ {TYPE_9__* p_sys; } ;
typedef TYPE_8__ stream_t ;
typedef int imr ;
struct TYPE_15__ {int s_addr; } ;
struct TYPE_16__ {TYPE_5__ sin_addr; } ;
struct TYPE_12__ {int s_addr; } ;
struct TYPE_13__ {TYPE_2__ sin_addr; } ;
struct TYPE_19__ {int sAMT; TYPE_6__ mcastSrcAddr; TYPE_3__ mcastGroupAddr; } ;
typedef TYPE_9__ access_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*,int) ;

__attribute__((used)) static int FUNC_1( stream_t *VAR_3 )
{
    struct ip_mreq_source VAR_4;
    access_sys_t *VAR_5 = VAR_3->p_sys;

    VAR_4.imr_multiaddr.s_addr = VAR_5->mcastGroupAddr.sin_addr.s_addr;
    VAR_4.imr_sourceaddr.s_addr = VAR_5->mcastSrcAddr.sin_addr.s_addr;
    VAR_4.imr_interface.s_addr = VAR_0;

    return FUNC_0( VAR_5->sAMT, VAR_1, VAR_2, (char *)&VAR_4, sizeof(VAR_4) );
}
