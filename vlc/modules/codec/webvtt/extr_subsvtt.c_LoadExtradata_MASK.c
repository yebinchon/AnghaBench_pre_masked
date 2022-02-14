
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int webvtt_text_parser_t ;
struct TYPE_7__ {int * stream; } ;
struct parser_ctx {TYPE_3__* p_dec; int * p_region; TYPE_2__ css; } ;
typedef int stream_t ;
struct TYPE_6__ {int i_extra; int p_extra; } ;
struct TYPE_8__ {TYPE_1__ fmt_in; } ;
typedef TYPE_3__ decoder_t ;


 int FUNC_0 (struct parser_ctx*,int ,int,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_3__*,int ,int ,int) ;
 char* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 int * FUNC_6 (struct parser_ctx*,int *,int *,int (*) (struct parser_ctx*,int ,int,int *)) ;

__attribute__((used)) static void FUNC_7( decoder_t *VAR_0 )
{
    stream_t *VAR_1 = FUNC_2( VAR_0,
                                               VAR_0->fmt_in.p_extra,
                                               VAR_0->fmt_in.i_extra,
                                               1 );
    if( !VAR_1 )
        return;

   struct parser_ctx VAR_2;



   VAR_2.p_region = ((void*)0);
   VAR_2.p_dec = VAR_0;
   webvtt_text_parser_t *VAR_3 =
           FUNC_6( &VAR_2, ((void*)0), ((void*)0), FUNC_0 );
   if( VAR_3 )
   {
        char *VAR_4;
        while( (VAR_4 = FUNC_3( VAR_1 )) )
            FUNC_5( VAR_3, VAR_4 );
        FUNC_4( VAR_3 );

        FUNC_0( &VAR_2, 0, 0, ((void*)0) );
   }

    FUNC_1( VAR_1 );
}
