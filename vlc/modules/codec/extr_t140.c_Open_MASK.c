
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_5__ {int * psz_encoding; } ;
struct TYPE_7__ {int i_codec; int i_cat; TYPE_1__ subs; } ;
struct TYPE_6__ {int force; } ;
struct TYPE_8__ {TYPE_3__ fmt_out; int pf_encode_sub; int * p_sys; TYPE_2__ obj; } ;
typedef TYPE_4__ encoder_t ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static int FUNC_2( vlc_object_t *VAR_4 )
{
    encoder_t *VAR_5 = (encoder_t *)VAR_4;

    switch( VAR_5->fmt_out.i_codec )
    {
        case 128:
            if( ( VAR_5->fmt_out.subs.psz_encoding != ((void*)0) )
             && FUNC_1( VAR_5->fmt_out.subs.psz_encoding, "utf8" )
             && FUNC_1( VAR_5->fmt_out.subs.psz_encoding, "UTF-8" ) )
            {
                FUNC_0( VAR_4, "Only UTF-8 encoding supported" );
                return VAR_2;
            }
        case 129:
            break;

        default:
            if( !VAR_5->obj.force )
                return VAR_2;

            VAR_5->fmt_out.i_codec = 129;
    }

    VAR_5->p_sys = ((void*)0);

    VAR_5->pf_encode_sub = VAR_0;
    VAR_5->fmt_out.i_cat = VAR_1;
    return VAR_3;
}
