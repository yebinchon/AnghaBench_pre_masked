
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef char uint8_t ;
typedef int uint16_t ;
struct sockaddr {int dummy; } ;
struct rist_flow {int peer_socklen; int peer_sockaddr; } ;
struct TYPE_6__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_7__ {int b_disablenacks; int lock; scalar_t__ b_sendnacks; struct rist_flow* flow; } ;
typedef TYPE_2__ stream_sys_t ;
struct TYPE_8__ {int i_buffer; int p_buffer; } ;
typedef TYPE_3__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int*,int ,int ) ;
 int FUNC_3 (int ,int,char*,int,struct sockaddr*,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(stream_t *VAR_5, int VAR_6, block_t *VAR_7, uint16_t VAR_8)
{
    stream_sys_t *VAR_9 = VAR_5->p_sys;
    struct rist_flow *VAR_10 = VAR_9->flow;
    int VAR_11 = 0;

    int VAR_12 = VAR_3 +
        VAR_2 * VAR_8;
    uint8_t *VAR_13 = FUNC_1(VAR_12);
    if ( FUNC_11( VAR_13 == ((void*)0) ) )
        return;


    uint8_t *VAR_14 = VAR_13;
    FUNC_10(VAR_14);
    FUNC_6(VAR_14, VAR_1);
    FUNC_9(VAR_14, VAR_4);
    FUNC_8(VAR_14, 2 + VAR_8);
    uint8_t VAR_15[4] = "RIST";
    FUNC_7(VAR_14, VAR_15);
    VAR_11 += VAR_3;

    uint16_t VAR_16[VAR_0];
    FUNC_2(VAR_16, VAR_7->p_buffer, VAR_7->i_buffer);
    for (int VAR_17 = 0; VAR_17 < VAR_8; VAR_17++)
    {
        uint8_t *VAR_18 = VAR_13 + VAR_11 + VAR_2*VAR_17;
        FUNC_5(VAR_18, VAR_16[VAR_17]);
        FUNC_4(VAR_18, 0);
    }
    VAR_11 += VAR_2 * VAR_8;


    if (VAR_9->b_sendnacks && VAR_9->b_disablenacks == 0)
        FUNC_3(VAR_9->lock, VAR_6, VAR_13, VAR_11,
            (struct sockaddr *)&VAR_10->peer_sockaddr, VAR_10->peer_socklen);
    FUNC_0(VAR_13);
    VAR_13 = ((void*)0);
}
