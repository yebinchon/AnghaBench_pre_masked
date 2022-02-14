
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_tick_t ;
struct test_ctx {size_t test_idx; int b_done; int lock; int cond; } ;
struct TYPE_5__ {scalar_t__ i_chroma; } ;
struct TYPE_6__ {int date; TYPE_1__ format; } ;
typedef TYPE_2__ picture_t ;
struct TYPE_7__ {int b_use_pos; int f_pos; int i_add_video_track_at; int i_time; scalar_t__ b_expected_success; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 TYPE_4__* VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4( void* VAR_5, picture_t* VAR_6 )
{
    struct test_ctx* VAR_7 = VAR_5;
    FUNC_2( &VAR_7->lock );

    if ( VAR_6 != ((void*)0) )
    {
        FUNC_0( VAR_4[VAR_7->test_idx].b_expected_success &&
                "Expected failure but got a thumbnail" );
        FUNC_0( VAR_6->format.i_chroma == VAR_1 );
    }
    else
        FUNC_0( !VAR_4[VAR_7->test_idx].b_expected_success &&
                "Expected a thumbnail but got a failure" );

    VAR_7->b_done = 1;
    FUNC_1( &VAR_7->cond );
    FUNC_3( &VAR_7->lock );
}
