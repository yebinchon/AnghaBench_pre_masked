
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sout_stream_t ;
struct TYPE_4__ {int orientation; int i_height; int i_width; int i_visible_height; int i_visible_width; int i_chroma; } ;
struct TYPE_5__ {TYPE_1__ video; int i_codec; } ;
typedef TYPE_2__ es_format_t ;


 int FUNC_0 (int *,char*,char const*,char const*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1( sout_stream_t *VAR_0, const es_format_t *VAR_1 )
{
    FUNC_0( VAR_0, "format now %4.4s/%4.4s %dx%d(%dx%d) ø%d",
             (const char *) &VAR_1->i_codec,
             (const char *) &VAR_1->video.i_chroma,
             VAR_1->video.i_visible_width, VAR_1->video.i_visible_height,
             VAR_1->video.i_width, VAR_1->video.i_height,
             VAR_1->video.orientation );
}
