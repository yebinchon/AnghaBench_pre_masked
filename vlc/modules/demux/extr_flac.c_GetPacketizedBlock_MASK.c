
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct flac_stream_info {int dummy; } ;
struct flac_header_info {int i_pts; } ;
struct TYPE_9__ {TYPE_2__* (* pf_packetize ) (TYPE_1__*,TYPE_2__**) ;} ;
typedef TYPE_1__ decoder_t ;
struct TYPE_10__ {scalar_t__ i_buffer; int i_pts; int i_dts; int p_buffer; } ;
typedef TYPE_2__ block_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,struct flac_stream_info const*,int *,struct flac_header_info*) ;
 int FUNC_1 (int) ;
 TYPE_2__* FUNC_2 (TYPE_1__*,TYPE_2__**) ;

__attribute__((used)) static block_t *FUNC_3( decoder_t *VAR_1,
                                    const struct flac_stream_info *VAR_2,
                                    block_t **VAR_3 )
{
    block_t *VAR_4 = VAR_1->pf_packetize( VAR_1, VAR_3 );
    if( VAR_4 )
    {
        if( VAR_4->i_buffer >= VAR_0 )
        {
            struct flac_header_info VAR_5;
            int VAR_6 = FUNC_0( VAR_4->p_buffer, VAR_2, ((void*)0), &VAR_5 );
            FUNC_1( VAR_6 != 0 );

            VAR_4->i_dts = VAR_4->i_pts = VAR_5.i_pts;
        }
    }
    return VAR_4;
}
