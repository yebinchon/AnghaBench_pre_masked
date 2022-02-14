
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {int granulepos; int b_o_s; unsigned int bytes; void* packet; scalar_t__ packetno; scalar_t__ e_o_s; } ;
typedef TYPE_3__ ogg_packet ;
struct TYPE_9__ {int i_rate; int i_channels; } ;
struct TYPE_10__ {int i_extra; TYPE_1__ audio; int * p_extra; } ;
struct TYPE_12__ {TYPE_2__ fmt_in; } ;
typedef TYPE_4__ decoder_t ;
typedef int OpusHeader ;


 int FUNC_0 (TYPE_4__*,TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,char*,int) ;
 int FUNC_3 (TYPE_4__*,char*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ,int *) ;
 scalar_t__ FUNC_6 (int **,int*,int *,int ) ;
 scalar_t__ FUNC_7 (unsigned int*,void const**,unsigned int*,int,int *) ;

__attribute__((used)) static int FUNC_8( decoder_t *VAR_4 )
{
    ogg_packet VAR_5;

    unsigned VAR_6[VAR_3];
    const void *VAR_7[VAR_3];
    unsigned VAR_8;

    int VAR_9 = VAR_4->fmt_in.i_extra;
    uint8_t *VAR_10 = VAR_4->fmt_in.p_extra;


    bool VAR_11 = 0;
    if( !VAR_9 ||
        (VAR_9 > 10 && FUNC_2( &VAR_10[2], "OpusHead", 8 )) )
    {
        OpusHeader VAR_12;
        FUNC_5( VAR_4->fmt_in.audio.i_channels,
                             VAR_4->fmt_in.audio.i_rate, &VAR_12 );
        if( FUNC_6( &VAR_10, &VAR_9, &VAR_12,
                               FUNC_4() ) )
            return VAR_1;
        VAR_11 = 1;
    }

    if( FUNC_7( VAR_6, VAR_7, &VAR_8,
                           VAR_9, VAR_10 ) )
    {
        if( VAR_11 )
            FUNC_1( VAR_10 );
        return VAR_0;
    }

    if( VAR_8 < 2 )
    {
        if( VAR_11 )
            FUNC_1( VAR_10 );
        return VAR_0;
    }

    VAR_5.granulepos = -1;
    VAR_5.e_o_s = 0;
    VAR_5.packetno = 0;


    VAR_5.b_o_s = 1;
    VAR_5.bytes = VAR_6[0];
    VAR_5.packet = (void *)VAR_7[0];
    int VAR_13 = FUNC_0( VAR_4, &VAR_5 );

    if (VAR_13 != VAR_2)
        FUNC_3( VAR_4, "initial Opus header is corrupted" );

    if( VAR_11 )
        FUNC_1( VAR_10 );

    return VAR_13;
}
