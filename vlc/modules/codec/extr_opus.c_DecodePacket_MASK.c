
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
struct TYPE_15__ {int bytes; int packet; } ;
typedef TYPE_2__ ogg_packet ;
struct TYPE_16__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ decoder_t ;
struct TYPE_14__ {int channels; int gain; } ;
struct TYPE_17__ {int end_date; TYPE_1__ header; int p_st; } ;
typedef TYPE_4__ decoder_sys_t ;
struct TYPE_18__ {int i_buffer; int i_nb_samples; scalar_t__ i_pts; scalar_t__ i_length; scalar_t__ p_buffer; } ;
typedef TYPE_5__ block_t ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (TYPE_5__*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int) ;
 TYPE_5__* FUNC_4 (TYPE_3__*,int) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (scalar_t__,scalar_t__,int) ;
 int FUNC_7 (TYPE_3__*,char*) ;
 int FUNC_8 (int ,int ,int ,float*,int,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int) ;
 float FUNC_11 (int,int) ;
 int FUNC_12 (scalar_t__,int) ;
 scalar_t__ FUNC_13 (int,int) ;

__attribute__((used)) static block_t *FUNC_14( decoder_t *VAR_0, ogg_packet *VAR_1,
                              int VAR_2, vlc_tick_t VAR_3 )
{
    decoder_sys_t *VAR_4 = VAR_0->p_sys;

    if( !VAR_1->bytes )
        return ((void*)0);

    int VAR_5;
    VAR_5=FUNC_9(VAR_1->packet,VAR_1->bytes);
    if(VAR_5>0)VAR_5*=FUNC_10(VAR_1->packet,48000);
    if(VAR_5<120||VAR_5>120*48)return ((void*)0);



    if(!VAR_2)
        VAR_2 = VAR_5;

    if( FUNC_5( VAR_0 ) )
        return ((void*)0);
    block_t *VAR_6=FUNC_4( VAR_0, VAR_5 );
    if ( !VAR_6 )
    {
        FUNC_7(VAR_0, "Oops: No new buffer was returned!");
        return ((void*)0);
    }

    VAR_5=FUNC_8(VAR_4->p_st, VAR_1->packet,
         VAR_1->bytes, (float *)VAR_6->p_buffer, VAR_5, 0);

    int VAR_7 = 0;
    if( VAR_3 > 0 && VAR_5 > 0 &&
        VAR_3 < FUNC_13(VAR_2, 48000) )
    {
        VAR_7 = VAR_5 - FUNC_0(FUNC_12(VAR_3, 48000), 0, VAR_5);
    }

    if( VAR_5 < 0 || VAR_2 <= 0 || VAR_7 >= VAR_2)
    {
        FUNC_1(VAR_6);
        if( VAR_5 < 0 )
            FUNC_7( VAR_0, "Error: corrupted stream?" );
        return ((void*)0);
    }

    VAR_6->i_buffer = (VAR_2 - VAR_7) *
                              VAR_4->header.channels * sizeof(float);

    if( VAR_5 > VAR_2 )
    {
        FUNC_6(VAR_6->p_buffer,
            VAR_6->p_buffer
            + (VAR_5 - VAR_2)*VAR_4->header.channels*sizeof(float),
            VAR_6->i_buffer);
    }
    VAR_2 -= VAR_7;


    if(VAR_4->header.gain!=0)
    {
        float VAR_8 = FUNC_11(10., VAR_4->header.gain/5120.);
        float *VAR_9 =(float *)VAR_6->p_buffer;
        for( int VAR_10 = 0; VAR_10 < VAR_2*VAR_4->header.channels; VAR_10++)
            VAR_9[VAR_10] *= VAR_8;
    }

    VAR_6->i_nb_samples = VAR_2;
    VAR_6->i_pts = FUNC_2( &VAR_4->end_date );
    VAR_6->i_length = FUNC_3( &VAR_4->end_date, VAR_2 )
        - VAR_6->i_pts;
    return VAR_6;
}
