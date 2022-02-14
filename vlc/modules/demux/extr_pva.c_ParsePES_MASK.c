
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ stime_t ;
struct TYPE_11__ {int out; TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_12__ {int b_pcr_audio; int p_audio; TYPE_3__* p_pes; } ;
typedef TYPE_2__ demux_sys_t ;
struct TYPE_13__ {unsigned int i_buffer; unsigned int p_buffer; scalar_t__ i_pts; void* i_dts; } ;
typedef TYPE_3__ block_t ;


 void* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_3__*,int*,int) ;
 TYPE_3__* FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ,int ,TYPE_3__*) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (TYPE_1__*,char*,int,int,int,int) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9( demux_t *VAR_1 )
{
    demux_sys_t *VAR_2 = VAR_1->p_sys;
    block_t *VAR_3 = VAR_2->p_pes;
    uint8_t VAR_4[30];

    unsigned VAR_5;
    stime_t VAR_6 = -1;
    stime_t VAR_7 = -1;

    VAR_2->p_pes = ((void*)0);


    FUNC_2( VAR_3, VAR_4, 30 );


    if( VAR_4[0] != 0 || VAR_4[1] != 0 || VAR_4[2] != 1 )
    {
        FUNC_7( VAR_1, "invalid hdr [0x%2.2x:%2.2x:%2.2x:%2.2x]",
                  VAR_4[0], VAR_4[1],VAR_4[2],VAR_4[3] );
        FUNC_4( VAR_3 );
        return;
    }




    VAR_5 = VAR_4[8] + 9;
    if( VAR_4[7]&0x80 )
    {
        VAR_7 = FUNC_1( &VAR_4[9] );

        if( VAR_4[7]&0x40 )
        {
             VAR_6 = FUNC_1( &VAR_4[14] );
        }
    }

    VAR_3 = FUNC_3( VAR_3 );
    if( FUNC_8(VAR_3 == ((void*)0)) )
        return;
    if( VAR_3->i_buffer <= VAR_5 )
    {
        FUNC_4( VAR_3 );
        return;
    }

    VAR_3->i_buffer -= VAR_5;
    VAR_3->p_buffer += VAR_5;

    if( VAR_6 >= 0 )
        VAR_3->i_dts = FUNC_0(VAR_6);
    if( VAR_7 >= 0 )
        VAR_3->i_pts = FUNC_0(VAR_7);


    if( VAR_3->i_pts != VAR_0 )
    {
        FUNC_6( VAR_1->out, VAR_3->i_pts);
        VAR_2->b_pcr_audio = 1;
    }
    FUNC_5( VAR_1->out, VAR_2->p_audio, VAR_3 );
}
