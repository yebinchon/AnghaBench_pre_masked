
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int vlc_tick_t ;
typedef scalar_t__ uint64_t ;
typedef int uint16_t ;
struct stat {int st_size; } ;
struct TYPE_13__ {TYPE_4__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_14__ {int i_time_offset; void* psz_name; } ;
typedef TYPE_2__ seekpoint_t ;
typedef int int64_t ;
struct TYPE_15__ {int i_length; int i_seekpoint; int seekpoint; void* psz_name; } ;
typedef TYPE_3__ input_title_t ;
struct TYPE_16__ {int fps; scalar_t__* offsets; TYPE_3__* p_marks; int b_ts_format; } ;
typedef TYPE_4__ access_sys_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int * FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *,int ,int,scalar_t__*,int*) ;
 scalar_t__ FUNC_4 (char**,size_t*,int *) ;
 int FUNC_5 (int,int ,TYPE_2__*) ;
 int FUNC_6 (int,int ,TYPE_2__*,int ) ;
 char* FUNC_7 (char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (scalar_t__*) ;
 scalar_t__ FUNC_11 (int ,struct stat*) ;
 int FUNC_12 (scalar_t__*,scalar_t__*,int) ;
 void* FUNC_13 (char*) ;
 int FUNC_14 (TYPE_1__*,char*) ;
 int FUNC_15 (TYPE_3__*) ;
 TYPE_3__* FUNC_16 () ;
 TYPE_2__* FUNC_17 () ;
 scalar_t__* FUNC_18 (scalar_t__*,int) ;

__attribute__((used)) static void FUNC_19( stream_t *VAR_3 )
{
    access_sys_t *VAR_4 = VAR_3->p_sys;

    FILE *VAR_5 = FUNC_1( VAR_3, "marks" );
    if( !VAR_5 )
        return;

    FILE *VAR_6 = FUNC_1( VAR_3, "index" );
    if( !VAR_6 )
    {
        FUNC_8( VAR_5 );
        return;
    }


    struct stat VAR_7;
    if( FUNC_11( FUNC_9( VAR_6 ), &VAR_7 ) )
    {
        FUNC_8( VAR_5 );
        FUNC_8( VAR_6 );
        return;
    }
    int64_t VAR_8 = VAR_7.st_size / 8;


    input_title_t *VAR_9 = FUNC_16();
    if( !VAR_9 )
    {
        FUNC_8( VAR_5 );
        FUNC_8( VAR_6 );
        return;
    }
    VAR_9->psz_name = FUNC_13( FUNC_7("VDR Cut Marks") );
    VAR_9->i_length = VAR_8 * (vlc_tick_t)( VAR_0 / VAR_4->fps );

    uint64_t *VAR_10 = ((void*)0);


    int VAR_11 = VAR_4->fps / 1000 *
        FUNC_14( VAR_3, "vdr-chapter-offset" );


    int VAR_12 = VAR_4->fps * VAR_2;



    int64_t VAR_13 = 0;


    char *VAR_14 = ((void*)0);
    size_t VAR_15;
    while( FUNC_4( &VAR_14, &VAR_15, VAR_5 ) )
    {
        int64_t VAR_16 = FUNC_2( VAR_14, VAR_4->fps );


        if( VAR_16 - VAR_13 < VAR_12 ||
            VAR_16 >= VAR_8 - VAR_12 )
            continue;
        VAR_13 = VAR_16;


        if( VAR_16 > -VAR_11 )
            VAR_16 += VAR_11;
        else
            VAR_16 = 0;

        uint64_t VAR_17;
        uint16_t VAR_18;
        if( !FUNC_3( VAR_6, VAR_4->b_ts_format,
            VAR_16, &VAR_17, &VAR_18 ) )
            continue;
        if( VAR_18 < 1 || VAR_18 > VAR_1 )
            continue;


        seekpoint_t *VAR_19 = FUNC_17();
        if( !VAR_19 )
            continue;
        VAR_19->i_time_offset = VAR_16 * (vlc_tick_t)( VAR_0 / VAR_4->fps );
        VAR_19->psz_name = FUNC_13( VAR_14 );

        FUNC_5( VAR_9->i_seekpoint, VAR_9->seekpoint, VAR_19 );
        VAR_10 = FUNC_18(VAR_10, VAR_9->i_seekpoint * sizeof (*VAR_10));

        for( int VAR_20 = 0; VAR_20 + 1 < VAR_18; ++VAR_20 )
            VAR_17 += FUNC_0(VAR_20);

        VAR_10[VAR_9->i_seekpoint - 1] = VAR_17;
    }


    if( VAR_9->i_seekpoint > 0 && VAR_10[0] > 0 )
    {
        seekpoint_t *VAR_21 = FUNC_17();
        if( VAR_21 )
        {
            VAR_21->i_time_offset = 0;
            VAR_21->psz_name = FUNC_13( FUNC_7("Start") );
            FUNC_6( VAR_9->i_seekpoint, VAR_9->seekpoint, VAR_21, 0 );
            VAR_10 = FUNC_18(VAR_10,
                               VAR_9->i_seekpoint * sizeof (*VAR_10));
            FUNC_12(VAR_10 + 1, VAR_10,
                    (VAR_9->i_seekpoint - 1) * sizeof (*VAR_10));
            VAR_10[0] = 0;
        }
    }

    if( VAR_9->i_seekpoint > 0 )
    {
        VAR_4->p_marks = VAR_9;
        VAR_4->offsets = VAR_10;
    }
    else
    {
        FUNC_15( VAR_9 );
        FUNC_10(VAR_10);
    }

    FUNC_8( VAR_5 );
    FUNC_8( VAR_6 );
}
