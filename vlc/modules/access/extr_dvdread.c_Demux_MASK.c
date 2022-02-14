
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_12__ {TYPE_3__* p_sys; } ;
typedef TYPE_2__ demux_t ;
struct TYPE_13__ {int i_pack_len; scalar_t__ i_cur_cell; int i_title; int i_titles; scalar_t__ i_cur_block; scalar_t__ i_title_offset; int p_title; TYPE_1__* p_cur_pgc; scalar_t__ i_next_vobu; int p_vts_file; } ;
typedef TYPE_3__ demux_sys_t ;
struct TYPE_11__ {scalar_t__ nr_of_cells; } ;


 int FUNC_0 (int ,scalar_t__,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int *,int) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int,int ,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (TYPE_2__*,char*,int,int,scalar_t__) ;
 int FUNC_7 (TYPE_2__*,char*,int,...) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (TYPE_2__*,int ,int ,int,...) ;

__attribute__((used)) static int FUNC_10( demux_t *VAR_4 )
{
    demux_sys_t *VAR_5 = VAR_4->p_sys;

    if(FUNC_8(!VAR_5->p_vts_file))
        return VAR_2;

    uint8_t VAR_6[VAR_1 * VAR_0];
    int VAR_7, VAR_8;
    if( !VAR_5->i_pack_len )
    {

        if( FUNC_0( VAR_5->p_title, VAR_5->i_next_vobu,
                           1, VAR_6 ) != 1 )
        {
            FUNC_7( VAR_4, "read failed for block %d", VAR_5->i_next_vobu );
            FUNC_9( VAR_4, FUNC_4("Playback failure"),
                          FUNC_4("DVDRead could not read block %d."),
                          VAR_5->i_next_vobu );
            return -1;
        }




        FUNC_1( VAR_4, VAR_6, VAR_1 );


        FUNC_2( VAR_4, VAR_6 );


        if( VAR_5->i_cur_cell >= VAR_5->p_cur_pgc->nr_of_cells )
        {
            int VAR_9 = VAR_5->i_title;


            while( VAR_9 < VAR_5->i_titles && FUNC_3( VAR_4, ++VAR_9, 0, -1 ) != VAR_3 )
            {
                FUNC_7(VAR_4, "Failed next title, trying another: %i", VAR_9 );
                if( VAR_9 >= VAR_5->i_titles )
                    return 0;
            }
        }

        if( VAR_5->i_pack_len >= 1024 )
        {
            FUNC_7( VAR_4, "i_pack_len >= 1024 (%i). "
                     "This shouldn't happen!", VAR_5->i_pack_len );
            return 0;
        }

        VAR_5->i_cur_block++;
        VAR_5->i_title_offset++;
    }

    if( VAR_5->i_cur_cell >= VAR_5->p_cur_pgc->nr_of_cells )
    {
        int VAR_10 = VAR_5->i_title;


        while( VAR_10 < VAR_5->i_titles && FUNC_3( VAR_4, ++VAR_10, 0, -1 ) != VAR_3 )
        {
            FUNC_7(VAR_4, "Failed next title, trying another: %i", VAR_10 );
            if( VAR_10 >= VAR_5->i_titles )
                return 0;
        }
    }




    VAR_7 = FUNC_5( VAR_5->i_pack_len, VAR_0 );
    VAR_5->i_pack_len -= VAR_7;


    VAR_8 = FUNC_0( VAR_5->p_title, VAR_5->i_cur_block,
                            VAR_7, VAR_6 );
    if( VAR_8 != VAR_7 )
    {
        FUNC_7( VAR_4, "read failed for %d/%d blocks at 0x%02x",
                 VAR_8, VAR_7, VAR_5->i_cur_block );
        FUNC_9( VAR_4, FUNC_4("Playback failure"),
                        FUNC_4("DVDRead could not read %d/%d blocks at 0x%02x."),
                        VAR_8, VAR_7, VAR_5->i_cur_block );
        return -1;
    }

    VAR_5->i_cur_block += VAR_8;
    VAR_5->i_title_offset += VAR_8;






    for( int VAR_11 = 0; VAR_11 < VAR_8; VAR_11++ )
    {
        FUNC_1( VAR_4, VAR_6 + VAR_11 * VAR_1,
                    VAR_1 );
    }

    return 1;
}
