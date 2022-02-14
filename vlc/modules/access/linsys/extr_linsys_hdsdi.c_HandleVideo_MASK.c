
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct block_extension_t {int b_progressive; int i_nb_fields; int b_top_field_first; scalar_t__ i_aspect; } ;
struct TYPE_7__ {int out; TYPE_2__* p_sys; } ;
typedef TYPE_1__ demux_t ;
struct TYPE_8__ {int i_vblock_size; int i_width; int i_height; scalar_t__ i_incr; int i_next_vdate; int p_es_video; scalar_t__ i_aspect; scalar_t__ i_forced_aspect; } ;
typedef TYPE_2__ demux_sys_t ;
struct TYPE_9__ {int i_pts; int i_dts; int * p_buffer; } ;
typedef TYPE_3__ block_t ;


 int FUNC_0 (int const*,unsigned int,int *,int *,int *) ;
 int FUNC_1 (int const*,unsigned int,int *,int *,int *) ;
 int FUNC_2 (int const*,unsigned int,int *,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_3 (int) ;
 int FUNC_4 (int ,int ,TYPE_3__*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,struct block_extension_t*,int) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8( demux_t *VAR_2, const uint8_t *VAR_3 )
{
    demux_sys_t *VAR_4 = VAR_2->p_sys;
    block_t *VAR_5 = FUNC_3( VAR_4->i_vblock_size );
    if( FUNC_7( !VAR_5 ) )
        return VAR_0;
    uint8_t *VAR_6 = VAR_5->p_buffer;
    uint8_t *VAR_7 = VAR_6 + VAR_4->i_width * VAR_4->i_height;
    uint8_t *VAR_8 = VAR_7 + VAR_4->i_width * VAR_4->i_height / 4;
    unsigned int VAR_9 = VAR_4->i_width * 2;
    unsigned int VAR_10;
    struct block_extension_t VAR_11;

    for ( VAR_10 = 0; VAR_10 < VAR_4->i_height;
          VAR_10++ )
    {
        bool VAR_12 = (VAR_10 >= VAR_4->i_height / 2);
        unsigned int VAR_13 = VAR_12 ?
            VAR_10 - (VAR_4->i_height + 1) / 2 :
            VAR_10;
        unsigned int VAR_14 = VAR_12 + VAR_13 * 2;
        const uint8_t *VAR_15 = VAR_3 + VAR_10 * VAR_4->i_width * 2;

        if ( !(VAR_13 % 2) && !VAR_12 )
            FUNC_0( VAR_15, VAR_9,
                      VAR_6 + VAR_4->i_width * VAR_14,
                      VAR_7 + (VAR_4->i_width / 2) * (VAR_14 / 2),
                      VAR_8 + (VAR_4->i_width / 2) * (VAR_14 / 2) );
        else if ( !(VAR_13 % 2) )
            FUNC_0( VAR_15, VAR_9,
                      VAR_6 + VAR_4->i_width * VAR_14,
                      VAR_7 + (VAR_4->i_width / 2) * (VAR_14 / 2 + 1),
                      VAR_8 + (VAR_4->i_width / 2) * (VAR_14 / 2 + 1) );
       else if ( !VAR_12 )
            FUNC_1( VAR_15, VAR_9,
                     VAR_6 + VAR_4->i_width * VAR_14,
                     VAR_7 + (VAR_4->i_width / 2) * (VAR_14 / 2 - 1),
                     VAR_8 + (VAR_4->i_width / 2) * (VAR_14 / 2 - 1) );
       else
            FUNC_2( VAR_15, VAR_9,
                     VAR_6 + VAR_4->i_width * VAR_14,
                     VAR_7 + (VAR_4->i_width / 2) * (VAR_14 / 2),
                     VAR_8 + (VAR_4->i_width / 2) * (VAR_14 / 2) );
    }


    VAR_11.b_progressive = 0;
    VAR_11.i_nb_fields = 2;
    VAR_11.b_top_field_first = 1;
    VAR_11.i_aspect = VAR_4->i_forced_aspect ? VAR_4->i_forced_aspect :
                   VAR_4->i_aspect;

    FUNC_6( &VAR_5->p_buffer[VAR_4->i_vblock_size
                                          - sizeof(struct block_extension_t)],
            &VAR_11, sizeof(struct block_extension_t) );

    VAR_5->i_dts = VAR_5->i_pts = VAR_4->i_next_vdate;
    FUNC_4( VAR_2->out, VAR_4->p_es_video, VAR_5 );

    FUNC_5( VAR_2->out, VAR_4->i_next_vdate );
    VAR_4->i_next_vdate += VAR_4->i_incr;
    return VAR_1;
}
