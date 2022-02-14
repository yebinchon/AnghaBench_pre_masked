
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_9__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ sout_access_out_t ;
struct TYPE_10__ {int p_fifo; int ssrc; int rtp_counter; } ;
typedef TYPE_2__ sout_access_out_sys_t ;
struct TYPE_11__ {int i_dts; int * p_buffer; } ;
typedef TYPE_3__ block_t ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,TYPE_3__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static void FUNC_8( sout_access_out_t *VAR_1, block_t *VAR_2 )
{
    sout_access_out_sys_t *VAR_3 = VAR_1->p_sys;
    uint16_t VAR_4 = VAR_3->rtp_counter++;


    uint8_t *VAR_5 = VAR_2->p_buffer;
    FUNC_3(VAR_5);
    FUNC_7(VAR_5, VAR_0);
    FUNC_5(VAR_5, VAR_4);
    FUNC_4(VAR_5, VAR_3->ssrc);
    uint32_t VAR_6 = FUNC_2(VAR_2->i_dts);
    FUNC_6(VAR_5, VAR_6);

    block_t *VAR_7 = FUNC_0(VAR_2);
    FUNC_1( VAR_3->p_fifo, VAR_7 );
}
