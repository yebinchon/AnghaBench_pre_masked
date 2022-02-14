
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
typedef int stream_t ;
struct TYPE_7__ {int psz_notice; int rgs_language; } ;
struct TYPE_5__ {TYPE_4__* p_cprt; } ;
struct TYPE_6__ {TYPE_1__ data; } ;
typedef TYPE_2__ MP4_Box_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ,int*) ;
 int FUNC_6 (int *,char*,int ,int ) ;

__attribute__((used)) static int FUNC_7( stream_t *VAR_2, MP4_Box_t *VAR_3 )
{
    uint16_t VAR_4;
    bool VAR_5;

    FUNC_3( VAR_0, VAR_1 );

    FUNC_2( VAR_3->data.p_cprt );

    FUNC_0( VAR_4 );
    FUNC_5( VAR_4, VAR_3->data.p_cprt->rgs_language, &VAR_5 );

    FUNC_1( VAR_3->data.p_cprt->psz_notice );







    FUNC_4( 1 );
}
