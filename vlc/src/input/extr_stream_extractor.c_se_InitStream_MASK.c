
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int identifier; TYPE_1__* source; scalar_t__ pf_read; } ;
struct stream_extractor_private {TYPE_2__ extractor; } ;
struct TYPE_7__ {int psz_url; int pf_control; int pf_seek; int pf_block; int pf_read; } ;
typedef TYPE_3__ stream_t ;
struct TYPE_5__ {int psz_url; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2( struct stream_extractor_private* VAR_6, stream_t* VAR_7 )
{
    if( VAR_6->extractor.pf_read ) VAR_7->pf_read = VAR_4;
    else VAR_7->pf_block = VAR_2;

    VAR_7->pf_seek = VAR_5;
    VAR_7->pf_control = VAR_3;
    VAR_7->psz_url = FUNC_0( VAR_6->extractor.source->psz_url,
                                           VAR_6->extractor.identifier );
    if( FUNC_1( !VAR_7->psz_url ) )
        return VAR_0;

    return VAR_1;
}
