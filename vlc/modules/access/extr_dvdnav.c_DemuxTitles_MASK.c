
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_10__ {int i_flags; int seekpoint; int i_seekpoint; void* i_time_offset; void* i_length; void* psz_name; } ;
typedef TYPE_1__ seekpoint_t ;
typedef int int32_t ;
typedef TYPE_1__ input_title_t ;
struct TYPE_11__ {TYPE_4__* p_sys; } ;
typedef TYPE_3__ demux_t ;
struct TYPE_12__ {int title; int i_title; int dvdnav; } ;
typedef TYPE_4__ demux_sys_t ;


 void* FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,int,scalar_t__**,scalar_t__*) ;
 int FUNC_4 (int ,int*) ;
 int FUNC_5 (scalar_t__*) ;
 int FUNC_6 (TYPE_3__*,char*) ;
 void* FUNC_7 (char*) ;
 TYPE_1__* FUNC_8 () ;
 TYPE_1__* FUNC_9 () ;

__attribute__((used)) static void FUNC_10( demux_t *VAR_2 )
{
    demux_sys_t *VAR_3 = VAR_2->p_sys;
    input_title_t *VAR_4;
    seekpoint_t *VAR_5;
    int32_t VAR_6;


    VAR_4 = FUNC_8();
    VAR_4->i_flags = VAR_1 | VAR_0;
    VAR_4->psz_name = FUNC_7( "DVD Menu" );

    VAR_5 = FUNC_9();
    VAR_5->psz_name = FUNC_7( "Resume" );
    FUNC_1( VAR_4->i_seekpoint, VAR_4->seekpoint, VAR_5 );

    VAR_5 = FUNC_9();
    VAR_5->psz_name = FUNC_7( "Root" );
    FUNC_1( VAR_4->i_seekpoint, VAR_4->seekpoint, VAR_5 );

    VAR_5 = FUNC_9();
    VAR_5->psz_name = FUNC_7( "Title" );
    FUNC_1( VAR_4->i_seekpoint, VAR_4->seekpoint, VAR_5 );

    VAR_5 = FUNC_9();
    VAR_5->psz_name = FUNC_7( "Chapter" );
    FUNC_1( VAR_4->i_seekpoint, VAR_4->seekpoint, VAR_5 );

    VAR_5 = FUNC_9();
    VAR_5->psz_name = FUNC_7( "Subtitle" );
    FUNC_1( VAR_4->i_seekpoint, VAR_4->seekpoint, VAR_5 );

    VAR_5 = FUNC_9();
    VAR_5->psz_name = FUNC_7( "Audio" );
    FUNC_1( VAR_4->i_seekpoint, VAR_4->seekpoint, VAR_5 );

    VAR_5 = FUNC_9();
    VAR_5->psz_name = FUNC_7( "Angle" );
    FUNC_1( VAR_4->i_seekpoint, VAR_4->seekpoint, VAR_5 );

    FUNC_1( VAR_3->i_title, VAR_3->title, VAR_4 );


    FUNC_4( VAR_3->dvdnav, &VAR_6 );

    if( VAR_6 > 90 )
        FUNC_6( VAR_2, "This is probably an Arccos Protected DVD. This could take time..." );

    for( int VAR_7 = 1; VAR_7 <= VAR_6; VAR_7++ )
    {
        uint64_t VAR_8;
        uint64_t *VAR_9;

        int32_t VAR_10 = FUNC_3( VAR_3->dvdnav, VAR_7,
                                                            &VAR_9,
                                                            &VAR_8 );
        if( VAR_10 < 1 )
        {
            VAR_8 = 0;
            VAR_9 = ((void*)0);
        }
        VAR_4 = FUNC_8();
        VAR_4->i_length = FUNC_0(VAR_8);
        for( int VAR_11 = 0; VAR_11 < FUNC_2( VAR_10, 1 ); VAR_11++ )
        {
            VAR_5 = FUNC_9();
            if( VAR_9 )
            {
                if ( VAR_11 > 0 )
                    VAR_5->i_time_offset = FUNC_0(VAR_9[VAR_11 - 1]);
                else
                    VAR_5->i_time_offset = 0;
            }
            FUNC_1( VAR_4->i_seekpoint, VAR_4->seekpoint, VAR_5 );
        }
        FUNC_5( VAR_9 );
        FUNC_1( VAR_3->i_title, VAR_3->title, VAR_4 );
    }
}
