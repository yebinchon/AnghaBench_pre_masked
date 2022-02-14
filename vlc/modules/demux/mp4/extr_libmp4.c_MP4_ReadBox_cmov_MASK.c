
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct TYPE_20__ {scalar_t__ avail_out; scalar_t__ total_out; scalar_t__ opaque; scalar_t__ zfree; scalar_t__ zalloc; int * next_out; int avail_in; int * next_in; } ;
typedef TYPE_5__ z_stream ;
typedef scalar_t__ voidpf ;
typedef int uint8_t ;
typedef int stream_t ;
typedef scalar_t__ free_func ;
typedef scalar_t__ alloc_func ;
struct TYPE_19__ {TYPE_10__* p_cmov; TYPE_3__* p_cmvd; TYPE_2__* p_dcom; } ;
struct TYPE_21__ {TYPE_4__ data; TYPE_1__* p_father; } ;
struct TYPE_18__ {scalar_t__ i_uncompressed_size; int * p_data; scalar_t__ b_compressed; int i_compressed_size; } ;
struct TYPE_17__ {scalar_t__ i_algorithm; } ;
struct TYPE_16__ {scalar_t__ i_type; } ;
struct TYPE_15__ {int p_moov; } ;
typedef TYPE_6__ MP4_Box_t ;
typedef int MP4_Box_data_cmov_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_6__* FUNC_0 (TYPE_6__*,char*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,TYPE_6__*) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_10__* FUNC_4 (int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_5__*,int ) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_5__*) ;
 int * FUNC_9 (scalar_t__) ;
 int FUNC_10 (int *,char*,...) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (int *,char*) ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (int ,int *,scalar_t__,int) ;

__attribute__((used)) static int FUNC_15( stream_t *VAR_7, MP4_Box_t *VAR_8 )
{
    MP4_Box_t *VAR_9;
    MP4_Box_t *VAR_10;
    if( !( VAR_8->data.p_cmov = FUNC_4(1, sizeof( MP4_Box_data_cmov_t ) ) ) )
        return 0;

    if( !VAR_8->p_father ||
        ( VAR_8->p_father->i_type != VAR_1 &&
          VAR_8->p_father->i_type != VAR_0 ) )
    {
        FUNC_12( VAR_7, "Read box: \"cmov\" box alone" );
        return 1;
    }

    if( !FUNC_2( VAR_7, VAR_8 ) )
    {
        return 0;
    }

    if( ( VAR_9 = FUNC_0( VAR_8, "dcom" ) ) == ((void*)0) ||
        ( VAR_10 = FUNC_0( VAR_8, "cmvd" ) ) == ((void*)0) ||
        VAR_10->data.p_cmvd->p_data == ((void*)0) )
    {
        FUNC_12( VAR_7, "read box: \"cmov\" incomplete" );
        return 0;
    }

    if( VAR_9->data.p_dcom->i_algorithm != VAR_2 )
    {
        FUNC_10( VAR_7, "read box: \"cmov\" compression algorithm : %4.4s "
                 "not supported", (char*)&VAR_9->data.p_dcom->i_algorithm );
        return 0;
    }


    FUNC_10( VAR_7, "read box: \"cmov\" zlib unsupported" );
    return 0;
}
