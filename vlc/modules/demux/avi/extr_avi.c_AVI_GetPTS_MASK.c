
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef unsigned int int64_t ;
struct TYPE_9__ {scalar_t__ i_cat; } ;
struct TYPE_8__ {unsigned int i_size; TYPE_1__* p_entry; } ;
struct TYPE_10__ {unsigned int i_idxposc; unsigned int i_idxposb; unsigned int i_blockno; TYPE_3__ fmt; TYPE_2__ idx; scalar_t__ i_samplesize; } ;
typedef TYPE_4__ avi_track_t ;
struct TYPE_7__ {unsigned int i_lengthtotal; unsigned int i_length; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_4__*,unsigned int) ;

__attribute__((used)) static vlc_tick_t FUNC_1( avi_track_t *VAR_1 )
{

    if( VAR_1->i_samplesize && VAR_1->idx.i_size )
    {
        int64_t VAR_2 = 0;
        unsigned int VAR_3 = VAR_1->i_idxposc;


        if( VAR_3 >= VAR_1->idx.i_size )
        {

            VAR_3 = VAR_1->idx.i_size - 1;
            VAR_2 = VAR_1->idx.p_entry[VAR_3].i_lengthtotal
                    + VAR_1->idx.p_entry[VAR_3].i_length;
        }
        else
        {
            VAR_2 = VAR_1->idx.p_entry[VAR_3].i_lengthtotal;
        }
        return FUNC_0( VAR_1, VAR_2 + VAR_1->i_idxposb );
    }

    if( VAR_1->fmt.i_cat == VAR_0 )
        return FUNC_0( VAR_1, VAR_1->i_blockno );
    else
        return FUNC_0( VAR_1, VAR_1->i_idxposc );
}
