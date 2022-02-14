
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int stream_t ;
struct TYPE_6__ {int i_microsecperframe; int i_maxbytespersec; int i_reserved1; int i_flags; int i_totalframes; int i_initialframes; int i_streams; int i_suggestedbuffersize; int i_width; int i_height; int i_scale; int i_rate; int i_start; int i_length; } ;
struct TYPE_5__ {int i_chunk_fourcc; } ;
struct TYPE_7__ {TYPE_2__ avih; TYPE_1__ common; } ;
typedef TYPE_3__ avi_chunk_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (int *,char*,int,char*,char*,char*,char*,int,int) ;

__attribute__((used)) static int FUNC_3( stream_t *VAR_7, avi_chunk_t *VAR_8 )
{
    VAR_5;

    VAR_8->common.i_chunk_fourcc = VAR_0;
    FUNC_0( VAR_8->avih.i_microsecperframe);
    FUNC_0( VAR_8->avih.i_maxbytespersec );
    FUNC_0( VAR_8->avih.i_reserved1 );
    FUNC_0( VAR_8->avih.i_flags );
    FUNC_0( VAR_8->avih.i_totalframes );
    FUNC_0( VAR_8->avih.i_initialframes );
    FUNC_0( VAR_8->avih.i_streams );
    FUNC_0( VAR_8->avih.i_suggestedbuffersize );
    FUNC_0( VAR_8->avih.i_width );
    FUNC_0( VAR_8->avih.i_height );
    FUNC_0( VAR_8->avih.i_scale );
    FUNC_0( VAR_8->avih.i_rate );
    FUNC_0( VAR_8->avih.i_start );
    FUNC_0( VAR_8->avih.i_length );
    FUNC_1( VAR_6 );
}
