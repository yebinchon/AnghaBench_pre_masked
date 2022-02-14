
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int i_default_sample_size; int i_default_sample_duration; } ;
struct TYPE_4__ {int i_flags; int i_track_ID; int i_default_sample_size; int i_default_sample_duration; } ;
typedef int MP4_Box_t ;
typedef TYPE_1__ MP4_Box_data_tfhd_t ;


 TYPE_3__* FUNC_0 (int const*) ;
 int * FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2( MP4_Box_t *VAR_2,
                                           const MP4_Box_data_tfhd_t *VAR_3,
                                           uint32_t *VAR_4,
                                           uint32_t *VAR_5 )
{
    if( VAR_3->i_flags & VAR_0 )
        *VAR_5 = VAR_3->i_default_sample_duration;

    if( VAR_3->i_flags & VAR_1 )
        *VAR_4 = VAR_3->i_default_sample_size;

    if( !*VAR_5 || !*VAR_4 )
    {
        const MP4_Box_t *VAR_6 = FUNC_1( VAR_2, VAR_3->i_track_ID );
        if ( VAR_6 )
        {
            if ( !*VAR_5 )
                *VAR_5 = FUNC_0(VAR_6)->i_default_sample_duration;
            if ( !*VAR_4 )
                *VAR_4 = FUNC_0(VAR_6)->i_default_sample_size;
        }
    }
}
