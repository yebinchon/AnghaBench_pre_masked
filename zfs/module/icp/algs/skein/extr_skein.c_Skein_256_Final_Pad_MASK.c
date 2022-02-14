
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {size_t bCnt; int * T; } ;
struct TYPE_6__ {int X; TYPE_1__ h; int * b; } ;
typedef TYPE_2__ Skein_256_Ctxt_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int *,int,size_t) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int ,size_t) ;
 int FUNC_3 (int *,size_t) ;

int
FUNC_4(Skein_256_Ctxt_t *VAR_4, uint8_t *VAR_5)
{

 FUNC_1(VAR_4->h.bCnt <= VAR_0, VAR_1);

 VAR_4->h.T[1] |= VAR_3;

 if (VAR_4->h.bCnt < VAR_0)
  FUNC_3(&VAR_4->b[VAR_4->h.bCnt],
      VAR_0 - VAR_4->h.bCnt);

 FUNC_0(VAR_4, VAR_4->b, 1, VAR_4->h.bCnt);


 FUNC_2(VAR_5, VAR_4->X, VAR_0);

 return (VAR_2);
}
