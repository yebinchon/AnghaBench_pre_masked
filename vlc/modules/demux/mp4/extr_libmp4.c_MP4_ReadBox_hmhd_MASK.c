
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int stream_t ;
struct TYPE_7__ {int i_avg_bitrate; int i_max_bitrate; int i_avg_PDU_size; int i_max_PDU_size; int i_reserved; } ;
struct TYPE_5__ {TYPE_4__* p_hmhd; } ;
struct TYPE_6__ {TYPE_1__ data; } ;
typedef TYPE_2__ MP4_Box_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,char*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_6( stream_t *VAR_1, MP4_Box_t *VAR_2 )
{
    FUNC_3( VAR_0, ((void*)0) );

    FUNC_2( VAR_2->data.p_hmhd );

    FUNC_0( VAR_2->data.p_hmhd->i_max_PDU_size );
    FUNC_0( VAR_2->data.p_hmhd->i_avg_PDU_size );

    FUNC_1( VAR_2->data.p_hmhd->i_max_bitrate );
    FUNC_1( VAR_2->data.p_hmhd->i_avg_bitrate );

    FUNC_1( VAR_2->data.p_hmhd->i_reserved );
    FUNC_4( 1 );
}
