
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {size_t bCnt; } ;
struct TYPE_6__ {TYPE_1__ h; int const* b; } ;
typedef TYPE_2__ Skein_512_Ctxt_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int const*,size_t,size_t) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int const*,int const*,size_t) ;

int
FUNC_4(Skein_512_Ctxt_t *VAR_3, const uint8_t *VAR_4, size_t VAR_5)
{
 size_t VAR_6;


 FUNC_1(VAR_3->h.bCnt <= VAR_0, VAR_1);


 if (VAR_5 + VAR_3->h.bCnt > VAR_0) {

  if (VAR_3->h.bCnt) {

   VAR_6 = VAR_0 - VAR_3->h.bCnt;
   if (VAR_6) {

    FUNC_2(VAR_6 < VAR_5);
    FUNC_3(VAR_4, &VAR_3->b[VAR_3->h.bCnt], VAR_6);
    VAR_5 -= VAR_6;
    VAR_4 += VAR_6;
    VAR_3->h.bCnt += VAR_6;
   }
   FUNC_2(VAR_3->h.bCnt == VAR_0);
   FUNC_0(VAR_3, VAR_3->b, 1,
       VAR_0);
   VAR_3->h.bCnt = 0;
  }




  if (VAR_5 > VAR_0) {

   VAR_6 = (VAR_5 - 1) / VAR_0;
   FUNC_0(VAR_3, VAR_4, VAR_6,
       VAR_0);
   VAR_5 -= VAR_6 * VAR_0;
   VAR_4 += VAR_6 * VAR_0;
  }
  FUNC_2(VAR_3->h.bCnt == 0);
 }


 if (VAR_5) {
  FUNC_2(VAR_5 + VAR_3->h.bCnt <= VAR_0);
  FUNC_3(VAR_4, &VAR_3->b[VAR_3->h.bCnt], VAR_5);
  VAR_3->h.bCnt += VAR_5;
 }

 return (VAR_2);
}
