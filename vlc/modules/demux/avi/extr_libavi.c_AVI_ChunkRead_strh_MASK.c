
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int stream_t ;
struct TYPE_4__ {scalar_t__ i_scale; scalar_t__ i_rate; scalar_t__ i_samplesize; int i_handler; int i_type; scalar_t__ i_quality; scalar_t__ i_suggestedbuffersize; scalar_t__ i_length; scalar_t__ i_start; scalar_t__ i_initialframes; scalar_t__ i_reserved1; scalar_t__ i_flags; } ;
struct TYPE_5__ {TYPE_1__ strh; } ;
typedef TYPE_2__ avi_chunk_t ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int *,char*,char*,int ,scalar_t__,float) ;

__attribute__((used)) static int FUNC_4( stream_t *VAR_2, avi_chunk_t *VAR_3 )
{
    VAR_0;

    FUNC_2( VAR_3->strh.i_type );
    FUNC_2( VAR_3->strh.i_handler );
    FUNC_0( VAR_3->strh.i_flags );
    FUNC_0( VAR_3->strh.i_reserved1 );
    FUNC_0( VAR_3->strh.i_initialframes );
    FUNC_0( VAR_3->strh.i_scale );
    FUNC_0( VAR_3->strh.i_rate );
    FUNC_0( VAR_3->strh.i_start );
    FUNC_0( VAR_3->strh.i_length );
    FUNC_0( VAR_3->strh.i_suggestedbuffersize );
    FUNC_0( VAR_3->strh.i_quality );
    FUNC_0( VAR_3->strh.i_samplesize );
    FUNC_1( VAR_1 );
}
