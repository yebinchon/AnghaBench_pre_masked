
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct sockaddr {int dummy; } ;
struct rist_flow {int peer_socklen; int peer_sockaddr; int fd_nack; int cname; } ;
struct TYPE_4__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_5__ {int lock; } ;
typedef TYPE_2__ stream_sys_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int *,int,struct sockaddr*,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,int ,int) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;

__attribute__((used)) static void FUNC_14(stream_t *VAR_2, struct rist_flow *VAR_3)
{
    stream_sys_t *VAR_4 = VAR_2->p_sys;
    int VAR_5 = FUNC_12(VAR_3->cname) + 1;


    if ((VAR_5 - 2) & 0x3)
        VAR_5 = ((((VAR_5 - 2) >> 2) + 1) << 2) + 2;

    int VAR_6 = VAR_0 + VAR_1 + VAR_5;
    uint8_t *VAR_7 = FUNC_1(VAR_6);
    if ( FUNC_13( VAR_7 == ((void*)0) ) )
        return;


    uint8_t *VAR_8 = VAR_7;
    FUNC_10(VAR_8);
    FUNC_4(VAR_8);
    FUNC_8(VAR_8, 1);
    FUNC_3(VAR_8, 0);


    uint8_t *VAR_9 = (VAR_7 + VAR_0);
    FUNC_10(VAR_9);
    FUNC_9(VAR_9, 1);
    FUNC_7(VAR_9);
    FUNC_8(VAR_9, (VAR_5 >> 2) + 2);
    FUNC_5(VAR_9, 1);
    FUNC_6(VAR_9, FUNC_12(VAR_3->cname));
    uint8_t *VAR_10 = (VAR_7 + VAR_0 + VAR_1);
    FUNC_11((char *)VAR_10, VAR_3->cname, VAR_5);


    FUNC_2(VAR_4->lock, VAR_3->fd_nack, VAR_7, VAR_6,
        (struct sockaddr *)&VAR_3->peer_sockaddr, VAR_3->peer_socklen);
    FUNC_0(VAR_7);
    VAR_7 = ((void*)0);
}
