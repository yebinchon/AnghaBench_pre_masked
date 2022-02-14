
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {long l_rec_size; int rec_type; int b_ext; } ;
typedef TYPE_1__ ty_rec_hdr_t ;
struct TYPE_20__ {int s; TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_21__ {size_t i_cur_rec; size_t i_num_recs; TYPE_1__* rec_hdrs; scalar_t__ b_first_chunk; scalar_t__ eof; } ;
typedef TYPE_3__ demux_sys_t ;
struct TYPE_22__ {int i_dts; int i_pts; } ;
typedef TYPE_4__ block_t ;


 int FUNC_0 (TYPE_2__*,TYPE_1__*,TYPE_4__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,TYPE_4__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_4__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,char*,int) ;
 TYPE_4__* FUNC_6 (int ,long const) ;

__attribute__((used)) static int FUNC_7( demux_t *VAR_3 )
{
    demux_sys_t *VAR_4 = VAR_3->p_sys;
    ty_rec_hdr_t *VAR_5;
    block_t *VAR_6 = ((void*)0);




    if( VAR_4->eof )
        return VAR_0;
    if( VAR_4->b_first_chunk || VAR_4->i_cur_rec >= VAR_4->i_num_recs )
    {
        if( FUNC_4(VAR_3) == 0 || VAR_4->i_num_recs == 0 )
            return VAR_0;
    }




    VAR_5 = &VAR_4->rec_hdrs[VAR_4->i_cur_rec];

    if( !VAR_5->b_ext )
    {
        const long VAR_7 = VAR_5->l_rec_size;




        if( VAR_7 <= 0 )
        {

            VAR_4->i_cur_rec++;
            return VAR_1;
        }


        if( !( VAR_6 = FUNC_6( VAR_3->s, VAR_7 ) ) )
            return VAR_0;


        VAR_6->i_pts =
        VAR_6->i_dts = VAR_2;
    }
    switch( VAR_5->rec_type )
    {
        case 0xe0:
            FUNC_2( VAR_3, VAR_5, VAR_6 );
            break;

        case 0xc0:
            FUNC_0( VAR_3, VAR_5, VAR_6 );
            break;

        case 0x01:
        case 0x02:

            FUNC_1( VAR_3, VAR_5, VAR_6 );
            break;

        default:
            FUNC_5(VAR_3, "Invalid record type 0x%02x", VAR_5->rec_type );


        case 0x03:
        case 0x05:
            if( VAR_6 )
                FUNC_3( VAR_6 );
    }


    VAR_4->i_cur_rec++;
    return VAR_1;
}
