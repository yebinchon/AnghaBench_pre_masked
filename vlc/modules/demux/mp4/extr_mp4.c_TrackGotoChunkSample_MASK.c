
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {size_t i_chunk; size_t i_chunk_count; int b_ok; int b_selected; unsigned int i_sample; TYPE_1__* chunk; int * p_es; int i_track_ID; } ;
typedef TYPE_2__ mp4_track_t ;
struct TYPE_12__ {int out; } ;
typedef TYPE_3__ demux_t ;
struct TYPE_10__ {scalar_t__ i_sample_description_index; scalar_t__ i_sample_first; scalar_t__ i_sample; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*,TYPE_2__*,unsigned int,int **) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int *,...) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_3__*,char*,int ) ;
 int FUNC_4 (TYPE_3__*,char*,int ) ;

__attribute__((used)) static int FUNC_5( demux_t *VAR_4, mp4_track_t *VAR_5,
                                 unsigned int VAR_6, unsigned int VAR_7 )
{
    bool VAR_8 = 0;


    if( VAR_5->i_chunk >= VAR_5->i_chunk_count ||
        VAR_5->chunk[VAR_5->i_chunk].i_sample_description_index !=
            VAR_5->chunk[VAR_6].i_sample_description_index )
    {
        FUNC_4( VAR_4, "recreate ES for track[Id 0x%x]",
                  VAR_5->i_track_ID );

        FUNC_1( VAR_4->out, VAR_0,
                        VAR_5->p_es, &VAR_8 );

        FUNC_2( VAR_4->out, VAR_5->p_es );

        VAR_5->p_es = ((void*)0);

        if( FUNC_0( VAR_4, VAR_5, VAR_6, &VAR_5->p_es ) )
        {
            FUNC_3( VAR_4, "cannot create es for track[Id 0x%x]",
                     VAR_5->i_track_ID );

            VAR_5->b_ok = 0;
            VAR_5->b_selected = 0;
            return VAR_2;
        }
    }


    if( VAR_8 )
    {
        FUNC_1( VAR_4->out, VAR_1, VAR_5->p_es );
    }

    VAR_5->i_chunk = VAR_6;
    VAR_5->chunk[VAR_6].i_sample = VAR_7 - VAR_5->chunk[VAR_6].i_sample_first;
    VAR_5->i_sample = VAR_7;

    return VAR_5->b_selected ? VAR_3 : VAR_2;
}
