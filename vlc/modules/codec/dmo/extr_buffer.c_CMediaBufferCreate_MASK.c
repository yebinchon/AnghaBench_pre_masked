
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int block_t ;
struct TYPE_6__ {int i_ref; int i_max_size; int b_own; TYPE_1__* vt; int * p_block; } ;
struct TYPE_5__ {int GetBufferAndLength; int GetMaxLength; int SetLength; int Release; int AddRef; int QueryInterface; } ;
typedef TYPE_1__ IMediaBuffer_vt ;
typedef TYPE_2__ CMediaBuffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int) ;

CMediaBuffer *FUNC_2( block_t *VAR_6, int VAR_7,
                                  bool VAR_8 )
{
    CMediaBuffer *VAR_9 = (CMediaBuffer *)FUNC_1( sizeof(CMediaBuffer) );
    if( !VAR_9 ) return ((void*)0);

    VAR_9->vt = (IMediaBuffer_vt *)FUNC_1( sizeof(IMediaBuffer_vt) );
    if( !VAR_9->vt )
    {
        FUNC_0( VAR_9 );
        return ((void*)0);
    }

    VAR_9->i_ref = 1;
    VAR_9->p_block = VAR_6;
    VAR_9->i_max_size = VAR_7;
    VAR_9->b_own = VAR_8;

    VAR_9->vt->QueryInterface = VAR_3;
    VAR_9->vt->AddRef = VAR_0;
    VAR_9->vt->Release = VAR_4;

    VAR_9->vt->SetLength = VAR_5;
    VAR_9->vt->GetMaxLength = VAR_2;
    VAR_9->vt->GetBufferAndLength = VAR_1;

    return VAR_9;
}
