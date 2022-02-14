
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vlc_object_t ;
struct TYPE_6__ {size_t i_buffer; scalar_t__ p_buffer; } ;
typedef TYPE_1__ block_t ;
struct TYPE_7__ {size_t i_write; size_t i_data; int lock; int p_dsbuffer; int format; int chan_table; int chans_to_reorder; } ;
typedef TYPE_2__ aout_stream_sys_t ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,size_t,size_t,void**,unsigned long*,void**,unsigned long*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,void*,unsigned long,void*,unsigned long) ;
 int FUNC_3 (scalar_t__,size_t,int ,int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (void*,scalar_t__,unsigned long) ;
 int FUNC_6 (void*,int ,unsigned long) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,char*) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static HRESULT FUNC_12( vlc_object_t *VAR_3, aout_stream_sys_t *VAR_4,
                           block_t *VAR_5 )
{
    size_t VAR_6 = (VAR_5 != ((void*)0)) ? VAR_5->i_buffer : VAR_1;
    void *VAR_7, *VAR_8;
    unsigned long VAR_9, VAR_10;
    HRESULT VAR_11;

    FUNC_10( &VAR_4->lock );


    VAR_11 = FUNC_0(
           VAR_4->p_dsbuffer,
           VAR_4->i_write,
           VAR_6,
           &VAR_7,
           &VAR_9,
           &VAR_8,
           &VAR_10,
           0 );
    if( VAR_11 == VAR_0 )
    {
        FUNC_1( VAR_4->p_dsbuffer );
        VAR_11 = FUNC_0(
                               VAR_4->p_dsbuffer,
                               VAR_4->i_write,
                               VAR_6,
                               &VAR_7,
                               &VAR_9,
                               &VAR_8,
                               &VAR_10,
                               0 );
    }
    if( VAR_11 != VAR_2 )
    {
        FUNC_8( VAR_3, "cannot lock buffer" );
        if( VAR_5 != ((void*)0) )
            FUNC_4( VAR_5 );
        FUNC_11( &VAR_4->lock );
        return VAR_11;
    }

    if( VAR_5 == ((void*)0) )
    {
        FUNC_6( VAR_7, 0, VAR_9 );
        FUNC_6( VAR_8, 0, VAR_10 );
    }
    else
    {
        if( VAR_4->chans_to_reorder )
            FUNC_3( VAR_5->p_buffer, VAR_5->i_buffer,
                                 VAR_4->chans_to_reorder, VAR_4->chan_table,
                                 VAR_4->format );

        FUNC_5( VAR_7, VAR_5->p_buffer, VAR_9 );
        if( VAR_8 && VAR_10 )
            FUNC_5( VAR_8, VAR_5->p_buffer + VAR_9, VAR_10 );

        if( FUNC_9( ( VAR_9 + VAR_10 ) < VAR_5->i_buffer ) )
            FUNC_7( VAR_3, "Buffer overrun");

        FUNC_4( VAR_5 );
    }


    FUNC_2( VAR_4->p_dsbuffer, VAR_7, VAR_9,
                               VAR_8, VAR_10 );

    VAR_4->i_write += VAR_6;
    VAR_4->i_write %= VAR_1;
    VAR_4->i_data += VAR_6;
    FUNC_11( &VAR_4->lock );

    return VAR_2;
}
