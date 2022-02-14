
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint_fast8_t ;
typedef void* uint8_t ;
typedef int uint16_t ;
struct TYPE_13__ {int i_id; int i_version; TYPE_3__* c_8b; TYPE_2__* c_4b; TYPE_1__* c_2b; struct TYPE_13__* p_next; } ;
typedef TYPE_4__ dvbsub_clut_t ;
struct TYPE_14__ {TYPE_6__* p_sys; } ;
typedef TYPE_5__ decoder_t ;
struct TYPE_15__ {TYPE_4__ default_clut; TYPE_4__* p_cluts; } ;
typedef TYPE_6__ decoder_sys_t ;
typedef int bs_t ;
struct TYPE_12__ {void* T; void* Cb; void* Cr; void* Y; } ;
struct TYPE_11__ {void* T; void* Cb; void* Cr; void* Y; } ;
struct TYPE_10__ {void* T; void* Cb; void* Cr; void* Y; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 TYPE_4__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_5__*,char*,int) ;

__attribute__((used)) static void FUNC_4( decoder_t *VAR_0, bs_t *VAR_1, uint16_t VAR_2 )
{
    decoder_sys_t *VAR_3 = VAR_0->p_sys;
    uint16_t VAR_4;
    dvbsub_clut_t *VAR_5, *VAR_6;
    int VAR_7, VAR_8;

    VAR_7 = FUNC_0( VAR_1, 8 );
    VAR_8 = FUNC_0( VAR_1, 4 );


    for( VAR_5 = VAR_3->p_cluts; VAR_5 != ((void*)0); VAR_5 = VAR_5->p_next )
    {
        if( VAR_5->i_id == VAR_7 ) break;
    }


    if( VAR_5 && ( VAR_5->i_version == VAR_8 ) )
    {

        FUNC_1( VAR_1, 8 * VAR_2 - 12 );
        return;
    }

    if( !VAR_5 )
    {



        VAR_5 = FUNC_2( sizeof( dvbsub_clut_t ) );
        if( !VAR_5 )
            return;
        VAR_5->p_next = VAR_3->p_cluts;
        VAR_3->p_cluts = VAR_5;
    }


    VAR_6 = VAR_5->p_next;
    *VAR_5 = VAR_3->default_clut;
    VAR_5->p_next = VAR_6;


    VAR_5->i_version = VAR_8;
    VAR_5->i_id = VAR_7;
    FUNC_1( VAR_1, 4 );
    VAR_4 = 2;
    while( VAR_4 < VAR_2 )
    {
        uint8_t VAR_9, VAR_10, VAR_11, VAR_12;
        uint_fast8_t VAR_13 = FUNC_0( VAR_1, 8 );
        uint_fast8_t VAR_14 = FUNC_0( VAR_1, 3 );

        FUNC_1( VAR_1, 4 );

        if( FUNC_0( VAR_1, 1 ) )
        {
            VAR_9 = FUNC_0( VAR_1, 8 );
            VAR_11 = FUNC_0( VAR_1, 8 );
            VAR_10 = FUNC_0( VAR_1, 8 );
            VAR_12 = FUNC_0( VAR_1, 8 );
            VAR_4 += 6;
        }
        else
        {
            VAR_9 = FUNC_0( VAR_1, 6 ) << 2;
            VAR_11 = FUNC_0( VAR_1, 4 ) << 4;
            VAR_10 = FUNC_0( VAR_1, 4 ) << 4;
            VAR_12 = FUNC_0( VAR_1, 2 ) << 6;
            VAR_4 += 4;
        }




        if( VAR_9 == 0 )
        {
            VAR_11 = VAR_10 = 0;
            VAR_12 = 0xff;
        }




        if( ( VAR_14 & 0x04 ) && ( VAR_13 < 4 ) )
        {
            VAR_5->c_2b[VAR_13].Y = VAR_9;
            VAR_5->c_2b[VAR_13].Cr = VAR_11;
            VAR_5->c_2b[VAR_13].Cb = VAR_10;
            VAR_5->c_2b[VAR_13].T = VAR_12;
        }
        if( ( VAR_14 & 0x02 ) && ( VAR_13 < 16 ) )
        {
            VAR_5->c_4b[VAR_13].Y = VAR_9;
            VAR_5->c_4b[VAR_13].Cr = VAR_11;
            VAR_5->c_4b[VAR_13].Cb = VAR_10;
            VAR_5->c_4b[VAR_13].T = VAR_12;
        }
        if( VAR_14 & 0x01 )
        {
            VAR_5->c_8b[VAR_13].Y = VAR_9;
            VAR_5->c_8b[VAR_13].Cr = VAR_11;
            VAR_5->c_8b[VAR_13].Cb = VAR_10;
            VAR_5->c_8b[VAR_13].T = VAR_12;
        }
    }
}
