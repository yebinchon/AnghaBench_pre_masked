
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int s; TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_7__ {scalar_t__ i_cur_chunk; scalar_t__ i_stuff_cnt; int eof; int i_num_recs; int i_seq_rec; int b_first_chunk; int* rec_hdrs; scalar_t__ i_cur_rec; } ;
typedef TYPE_2__ demux_sys_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int const*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int*) ;
 int FUNC_2 (TYPE_1__*,char*,scalar_t__) ;
 int* FUNC_3 (int*,int,int*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int const**,int) ;
 int FUNC_6 (int ,int*,int) ;
 int* FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(demux_t *VAR_3)
{
    int VAR_4, VAR_5;
    uint8_t *VAR_6;
    const uint8_t *VAR_7;
    demux_sys_t *VAR_8 = VAR_3->p_sys;
    int VAR_9;

    FUNC_2(VAR_3, "parsing ty chunk #%d", VAR_8->i_cur_chunk );


    if (VAR_8->i_stuff_cnt > 0) {
        if(FUNC_6(VAR_3->s, ((void*)0), VAR_8->i_stuff_cnt) != VAR_8->i_stuff_cnt)
            return 0;
        VAR_8->i_stuff_cnt = 0;
    }


    VAR_4 = FUNC_5( VAR_3->s, &VAR_7, 4 );
    VAR_8->i_cur_chunk++;

    if ( (VAR_4 < 4) || ( FUNC_0(&VAR_7[ 0 ] ) == 0 ))
    {

        VAR_8->eof = 1;
        return 0;
    }


    if( FUNC_0( &VAR_7[ 0 ] ) == VAR_1 )
    {

        if(FUNC_4(VAR_3) != VAR_2)
            return 0;
        return FUNC_8(VAR_3);
    }


    if (VAR_7[3] & 0x80)
    {

        VAR_8->i_num_recs = VAR_5 = (VAR_7[1] << 8) + VAR_7[0];
        VAR_8->i_seq_rec = (VAR_7[3] << 8) + VAR_7[2];
        if (VAR_8->i_seq_rec != 0xffff)
        {
            VAR_8->i_seq_rec &= ~0x8000;
        }
    }
    else
    {

        VAR_8->i_num_recs = VAR_5 = VAR_7[0];
        VAR_8->i_seq_rec = VAR_7[1];
    }
    VAR_8->i_cur_rec = 0;
    VAR_8->b_first_chunk = 0;



    FUNC_1(VAR_8->rec_hdrs);
    VAR_8->rec_hdrs = ((void*)0);


    if(FUNC_6(VAR_3->s, ((void*)0), 4) != 4)
        return 0;


    VAR_6 = FUNC_7(VAR_5 * 16);
    if (FUNC_6(VAR_3->s, VAR_6, VAR_5 * 16) < VAR_5 * 16) {
        FUNC_1( VAR_6 );
        VAR_8->eof = 1;
        return 0;
    }

    VAR_8->rec_hdrs = FUNC_3(VAR_6, VAR_5,
            &VAR_9);
    FUNC_1(VAR_6);

    VAR_8->i_stuff_cnt = VAR_0 - 4 -
        (VAR_8->i_num_recs * 16) - VAR_9;
    if (VAR_8->i_stuff_cnt > 0)
        FUNC_2( VAR_3, "chunk has %d stuff bytes at end",
                 VAR_8->i_stuff_cnt );
    return 1;
}
