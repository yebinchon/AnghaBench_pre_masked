
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_12__ {int i_magazine; scalar_t__ i_page; } ;
struct TYPE_13__ {TYPE_2__ teletext; } ;
struct TYPE_14__ {scalar_t__ i_codec; TYPE_3__ subs; } ;
struct TYPE_11__ {scalar_t__ i_codec; } ;
struct TYPE_15__ {TYPE_4__ fmt_in; TYPE_1__ fmt_out; TYPE_6__* p_sys; int pf_decode; } ;
typedef TYPE_5__ decoder_t ;
struct TYPE_16__ {int i_wanted_magazine; int i_wanted_page; void* b_ignore_sub_flag; int * pi_active_national_set; scalar_t__ i_align; } ;
typedef TYPE_6__ decoder_sys_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_6__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_5__*,char*,int,int,void*) ;
 int * VAR_5 ;
 void* FUNC_2 (TYPE_5__*,char*) ;
 int FUNC_3 (TYPE_5__*,char*) ;

__attribute__((used)) static int FUNC_4( vlc_object_t *VAR_6 )
{
    decoder_t *VAR_7 = (decoder_t *) VAR_6;
    decoder_sys_t *VAR_8 = ((void*)0);
    int VAR_9;


    if( VAR_7->fmt_in.i_codec != VAR_1)
    {
        return VAR_2;
    }

    VAR_7->pf_decode = VAR_0;
    VAR_8 = VAR_7->p_sys = FUNC_0( 1, sizeof(*VAR_8) );
    if( VAR_8 == ((void*)0) )
        return VAR_3;
    VAR_7->fmt_out.i_codec = 0;

    VAR_8->i_align = 0;
    for ( int VAR_10 = 0; VAR_10 < 9; VAR_10++ )
        VAR_8->pi_active_national_set[VAR_10] = VAR_5[1];

    VAR_9 = FUNC_3( VAR_7, "telx-override-page" );
    if( VAR_9 == -1 && VAR_7->fmt_in.subs.teletext.i_magazine < 9 &&
        ( VAR_7->fmt_in.subs.teletext.i_magazine != 1 ||
          VAR_7->fmt_in.subs.teletext.i_page != 0 ) )
    {
        bool VAR_11;
        VAR_8->i_wanted_magazine = VAR_7->fmt_in.subs.teletext.i_magazine;
        VAR_8->i_wanted_page = VAR_7->fmt_in.subs.teletext.i_page;

        VAR_11 = FUNC_2( VAR_7, "telx-french-workaround" );
        if( VAR_8->i_wanted_page < 100 &&
            (VAR_11 || (VAR_8->i_wanted_page % 16) >= 10))
        {



            VAR_8->i_wanted_page = (VAR_8->i_wanted_page / 10) * 16 +
                                   (VAR_8->i_wanted_page % 10);
        }
    }
    else if( VAR_9 <= 0 )
    {
        VAR_8->i_wanted_magazine = -1;
        VAR_8->i_wanted_page = -1;
    }
    else
    {
        VAR_8->i_wanted_magazine = VAR_9 / 100;
        VAR_8->i_wanted_page = (((VAR_9 % 100) / 10) << 4)
                               |((VAR_9 % 100) % 10);
    }
    VAR_8->b_ignore_sub_flag = FUNC_2( VAR_7,
                                    "telx-ignore-subtitle-flag" );

    FUNC_1( VAR_7, "starting telx on magazine %d page %02x flag %d",
             VAR_8->i_wanted_magazine, VAR_8->i_wanted_page,
             VAR_8->b_ignore_sub_flag );

    return VAR_4;







}
