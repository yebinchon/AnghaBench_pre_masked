
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vlc_tick_t ;
typedef int vlc_thumbnailer_t ;
typedef int vlc_thumbnailer_request_t ;
struct test_ctx {int b_done; int lock; int cond; } ;
struct TYPE_3__ {int p_libvlc_int; } ;
typedef TYPE_1__ libvlc_instance_t ;
typedef int input_item_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int * FUNC_3 (char const*,char*) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *) ;
 int * FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (int *,scalar_t__,int ,int *,int ,int ,struct test_ctx*) ;
 scalar_t__ FUNC_14 () ;

__attribute__((used)) static void FUNC_15( libvlc_instance_t* VAR_4 )
{
    vlc_thumbnailer_t* VAR_5 = FUNC_11(
                FUNC_0( VAR_4->p_libvlc_int ) );
    FUNC_2( VAR_5 != ((void*)0) );

    struct test_ctx VAR_6;
    FUNC_5( &VAR_6.cond );
    FUNC_7( &VAR_6.lock );

    const char* VAR_7 = "mock://video_track_count=1;audio_track_count=1";
    input_item_t* VAR_8 = FUNC_3( VAR_7, "mock item" );
    FUNC_2( VAR_8 != ((void*)0) );

    FUNC_8( &VAR_6.lock );
    int VAR_9 = 0;
    vlc_thumbnailer_request_t* VAR_10 = FUNC_13( VAR_5,
        FUNC_1( 1 ), VAR_1, VAR_8,
        VAR_2, VAR_3, &VAR_6 );
    FUNC_10( VAR_5, VAR_10 );
    while ( VAR_6.b_done == 0 )
    {
        vlc_tick_t VAR_11 = FUNC_14() + FUNC_1( 1 );
        VAR_9 = FUNC_6( &VAR_6.cond, &VAR_6.lock, VAR_11 );
        FUNC_2( VAR_9 != VAR_0 );
    }
    FUNC_9( &VAR_6.lock );

    FUNC_4( VAR_8 );

    FUNC_12( VAR_5 );
}
