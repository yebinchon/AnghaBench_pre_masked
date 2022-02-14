
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_5__ {TYPE_2__* p_sys; } ;
typedef TYPE_1__ stream_t ;
struct TYPE_6__ {int i_header_packet_id_type; int i_media_packet_id_type; int i_packet_seq_num; int* p_header; size_t i_header; int* p_media; size_t i_media; scalar_t__ i_media_used; } ;
typedef TYPE_2__ access_sys_t ;


 int FUNC_0 (int*) ;
 size_t FUNC_1 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int*) ;
 int* FUNC_3 (size_t) ;
 int FUNC_4 (int*,int*,size_t) ;
 int FUNC_5 (TYPE_1__*,char*,...) ;
 int* FUNC_6 (int*,size_t) ;

__attribute__((used)) static int FUNC_7( stream_t *VAR_4,
                             uint8_t *VAR_5, size_t VAR_6,
                             size_t *VAR_7 )
{
    access_sys_t *VAR_8 = VAR_4->p_sys;
    int VAR_9;
    size_t VAR_10;
    uint32_t VAR_11;

    *VAR_7 = VAR_6;
    if( VAR_6 <= 8 )
    {
        FUNC_5( VAR_4, "truncated packet (header incomplete)" );
        return -1;
    }

    VAR_11 = VAR_5[4];
    VAR_9 = FUNC_0( VAR_5 );
    VAR_10 = FUNC_1( VAR_5 + 6 );



    if( VAR_10 > VAR_6 || VAR_10 <= 8)
    {



        *VAR_7 = 0;
        return -1;
    }
    else if( VAR_10 < VAR_6 )
    {
        *VAR_7 = VAR_10;
    }

    if( VAR_11 == 0xff )
    {
        FUNC_5( VAR_4,
                  "receive MMS UDP pair timing" );
        return( VAR_2 );
    }

    if( VAR_11 != VAR_8->i_header_packet_id_type &&
        VAR_11 != VAR_8->i_media_packet_id_type )
    {
        FUNC_5( VAR_4, "incorrect Packet Id Type (0x%x)", VAR_11 );
        return -1;
    }


    if( VAR_9 != VAR_8->i_packet_seq_num )
    {







    }
    VAR_8->i_packet_seq_num = VAR_9 + 1;

    if( VAR_11 == VAR_8->i_header_packet_id_type )
    {
        uint8_t *VAR_12 = FUNC_6( VAR_8->p_header,
                                     VAR_8->i_header + VAR_10 - 8 );
        if( !VAR_12 )
            return VAR_3;

        FUNC_4( &VAR_12[VAR_8->i_header], VAR_5 + 8, VAR_10 - 8 );
        VAR_8->p_header = VAR_12;
        VAR_8->i_header += VAR_10 - 8;





        return VAR_0;
    }
    else
    {
        FUNC_2( VAR_8->p_media );
        VAR_8->i_media = 0;
        VAR_8->i_media_used = 0;

        VAR_8->p_media = FUNC_3( VAR_10 - 8 );
        if( !VAR_8->p_media )
            return VAR_3;

        VAR_8->i_media = VAR_10 - 8;
        FUNC_4( VAR_8->p_media, VAR_5 + 8, VAR_8->i_media );




        return VAR_1;
    }
}
