
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct decoder_owner {TYPE_1__* p_image; } ;
typedef int picture_t ;
typedef int decoder_t ;
struct TYPE_2__ {int outfifo; } ;


 struct decoder_owner* FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2( decoder_t *VAR_0, picture_t *VAR_1 )
{
    struct decoder_owner *VAR_2 = FUNC_0( VAR_0 );
    FUNC_1( VAR_2->p_image->outfifo, VAR_1 );
}
