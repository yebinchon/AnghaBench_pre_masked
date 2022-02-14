
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct xdr_bytesrec {int xc_num_avail; } ;
struct TYPE_9__ {int nvs_op; int * nvs_private; } ;
typedef TYPE_1__ nvstream_t ;
struct TYPE_10__ {size_t nvp_size; } ;
typedef TYPE_2__ nvpair_t ;
typedef size_t int32_t ;
typedef int XDR ;


 int VAR_0 ;
 int VAR_1 ;


 size_t FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*,size_t*) ;
 int FUNC_3 (int *,int ,struct xdr_bytesrec*) ;
 int FUNC_4 (int *,size_t*) ;

__attribute__((used)) static int
FUNC_5(nvstream_t *VAR_3, nvpair_t *VAR_4, size_t *VAR_5)
{
 XDR *VAR_6 = VAR_3->nvs_private;
 int32_t VAR_7, VAR_8;

 switch (VAR_3->nvs_op) {
 case 128: {
  size_t VAR_9;

  if (FUNC_2(VAR_3, VAR_4, &VAR_9) != 0)
   return (VAR_0);

  VAR_8 = VAR_4->nvp_size;
  VAR_7 = VAR_9;
  if (!FUNC_4(VAR_6, &VAR_7) || !FUNC_4(VAR_6, &VAR_8))
   return (VAR_0);

  return (FUNC_1(VAR_3, VAR_4));
 }
 case 129: {
  struct xdr_bytesrec VAR_10;


  if (!FUNC_4(VAR_6, &VAR_7) || !FUNC_4(VAR_6, &VAR_8))
   return (VAR_0);
  *VAR_5 = VAR_8;


  if (*VAR_5 == 0)
   return (0);


  if (!FUNC_3(VAR_6, VAR_2, &VAR_10))
   return (VAR_0);

  if (*VAR_5 > FUNC_0(VAR_10.xc_num_avail))
   return (VAR_0);
  break;
 }

 default:
  return (VAR_1);
 }
 return (0);
}
