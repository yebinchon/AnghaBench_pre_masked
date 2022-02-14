
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ i_int; } ;
typedef TYPE_2__ vlc_value_t ;
typedef int input_thread_t ;
struct TYPE_8__ {scalar_t__ i_start; TYPE_1__* master; } ;
typedef TYPE_3__ input_thread_private_t ;
struct TYPE_6__ {scalar_t__ i_title_start; scalar_t__ i_title_offset; scalar_t__ i_title; scalar_t__ i_seekpoint_start; scalar_t__ i_seekpoint_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,TYPE_2__*) ;
 int FUNC_1 (int *,float,int) ;
 int FUNC_2 (int *,scalar_t__,int) ;
 TYPE_3__* FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*,int) ;

__attribute__((used)) static int FUNC_7( input_thread_t *VAR_4 )
{
    int VAR_5 = FUNC_5( VAR_4, "input-repeat" );
    if( VAR_5 <= 0 )
        return VAR_2;

    vlc_value_t VAR_6;

    FUNC_4( VAR_4, "repeating the same input (%d)", VAR_5 );
    if( VAR_5 > 0 )
    {
        VAR_5--;
        FUNC_6( VAR_4, "input-repeat", VAR_5 );
    }

    input_thread_private_t *VAR_7 = FUNC_3(VAR_4);

    VAR_6.i_int = VAR_7->master->i_title_start - VAR_7->master->i_title_offset;
    if( VAR_6.i_int < 0 || VAR_6.i_int >= VAR_7->master->i_title )
        VAR_6.i_int = 0;
    FUNC_0( VAR_4,
                       VAR_1, &VAR_6 );

    VAR_6.i_int = VAR_7->master->i_seekpoint_start -
                VAR_7->master->i_seekpoint_offset;
    if( VAR_6.i_int > 0 )
        FUNC_0( VAR_4,
                           VAR_0, &VAR_6 );


    if( VAR_7->i_start > 0 )
        FUNC_2( VAR_4, VAR_7->i_start, 0 );
    else
        FUNC_1( VAR_4, 0.0f, 0 );

    return VAR_3;
}
