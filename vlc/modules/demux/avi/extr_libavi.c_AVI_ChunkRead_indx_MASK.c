
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
typedef int stream_t ;
typedef unsigned int int32_t ;
typedef int indx_super_entry_t ;
typedef int indx_std_entry_t ;
typedef int indx_field_entry_t ;
typedef int avi_chunk_t ;
struct TYPE_9__ {TYPE_3__* super; TYPE_2__* field; TYPE_1__* std; } ;
struct TYPE_10__ {scalar_t__ i_indexsubtype; scalar_t__ i_indextype; unsigned int i_entriesinuse; unsigned int i_id; TYPE_4__ idx; scalar_t__ i_baseoffset; int i_longsperentry; } ;
typedef TYPE_5__ avi_chunk_indx_t ;
struct TYPE_8__ {unsigned int i_size; unsigned int i_duration; scalar_t__ i_offset; } ;
struct TYPE_7__ {unsigned int i_offset; unsigned int i_size; unsigned int i_offsetfield2; } ;
struct TYPE_6__ {unsigned int i_offset; unsigned int i_size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_4 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (unsigned int) ;
 unsigned int FUNC_6 (unsigned int,int) ;
 void* FUNC_7 (unsigned int,int) ;
 int VAR_6 ;
 int FUNC_8 (int *,char*,scalar_t__,scalar_t__,unsigned int) ;
 int FUNC_9 (int *,char*) ;

__attribute__((used)) static int FUNC_10( stream_t *VAR_7, avi_chunk_t *VAR_8 )
{
    unsigned int VAR_9, VAR_10;
    int VAR_11 = VAR_5;
    int32_t VAR_12;
    FUNC_5(VAR_12);
    avi_chunk_indx_t *VAR_13 = (avi_chunk_indx_t*)VAR_8;

    VAR_3;

    FUNC_1( VAR_13->i_longsperentry );
    FUNC_0 ( VAR_13->i_indexsubtype );
    FUNC_0 ( VAR_13->i_indextype );
    FUNC_2( VAR_13->i_entriesinuse );

    FUNC_2( VAR_13->i_id );
    VAR_13->idx.std = ((void*)0);
    VAR_13->idx.field = ((void*)0);
    VAR_13->idx.super = ((void*)0);

    if( VAR_13->i_indextype == VAR_1 && VAR_13->i_indexsubtype == 0 )
    {
        FUNC_3( VAR_13->i_baseoffset );
        FUNC_2( VAR_12 );

        VAR_9 = FUNC_6( VAR_13->i_entriesinuse, VAR_6 / 8 );
        VAR_13->i_entriesinuse = VAR_9;
        VAR_13->idx.std = FUNC_7( VAR_9, sizeof( indx_std_entry_t ) );
        if( VAR_9 == 0 || VAR_13->idx.std )
        {
            for( VAR_10 = 0; VAR_10 < VAR_9; VAR_10++ )
            {
                FUNC_2( VAR_13->idx.std[VAR_10].i_offset );
                FUNC_2( VAR_13->idx.std[VAR_10].i_size );
            }
        }
        else VAR_11 = VAR_4;
    }
    else if( VAR_13->i_indextype == VAR_1 && VAR_13->i_indexsubtype == VAR_0 )
    {
        FUNC_3( VAR_13->i_baseoffset );
        FUNC_2( VAR_12 );

        VAR_9 = FUNC_6( VAR_13->i_entriesinuse, VAR_6 / 12 );
        VAR_13->i_entriesinuse = VAR_9;
        VAR_13->idx.field = FUNC_7( VAR_9, sizeof( indx_field_entry_t ) );
        if( VAR_9 == 0 || VAR_13->idx.field )
        {
            for( VAR_10 = 0; VAR_10 < VAR_9; VAR_10++ )
            {
                FUNC_2( VAR_13->idx.field[VAR_10].i_offset );
                FUNC_2( VAR_13->idx.field[VAR_10].i_size );
                FUNC_2( VAR_13->idx.field[VAR_10].i_offsetfield2 );
            }
        }
        else VAR_11 = VAR_4;
    }
    else if( VAR_13->i_indextype == VAR_2 )
    {
        VAR_13->i_baseoffset = 0;
        FUNC_2( VAR_12 );
        FUNC_2( VAR_12 );
        FUNC_2( VAR_12 );

        VAR_9 = FUNC_6( VAR_13->i_entriesinuse, VAR_6 / 16 );
        VAR_13->i_entriesinuse = VAR_9;
        VAR_13->idx.super = FUNC_7( VAR_9, sizeof( indx_super_entry_t ) );
        if( VAR_9 == 0 || VAR_13->idx.super )
        {
            for( VAR_10 = 0; VAR_10 < VAR_9; VAR_10++ )
            {
                FUNC_3( VAR_13->idx.super[VAR_10].i_offset );
                FUNC_2( VAR_13->idx.super[VAR_10].i_size );
                FUNC_2( VAR_13->idx.super[VAR_10].i_duration );
            }
        }
        else VAR_11 = VAR_4;
    }
    else
    {
        FUNC_9( (vlc_object_t*)VAR_7, "unknown type/subtype index" );
    }





    FUNC_4( VAR_11 );
}
